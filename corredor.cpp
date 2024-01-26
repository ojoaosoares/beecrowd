#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _

    int n;
    cin >> n;

    int x, sum = 0, max;

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if(sum + x < x) sum = x;
        else sum += x;

        if(sum > max || i == 0) max = sum;

    }

    cout << max << '\n';
}

