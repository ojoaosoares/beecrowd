#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _

    int n;
    cin >> n;

    vector<int> wall(n), left(n), right(n);

    for(int i = 0; i < n; i++)
        cin >> wall[i];

    left[0] = 1;
    for (int i = 1; i < n; i++)
        left[i] = min(wall[i], left[i - 1] + 1);
    

    right[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        right[i] = min(wall[i], right[i + 1] + 1);
    

    int maximo = -1;
    for (int i = 0; i < n; i++)
    {
        int t = min(left[i], right[i]);        
        maximo = max(maximo, t);
    }

    cout << maximo << '\n';
}
