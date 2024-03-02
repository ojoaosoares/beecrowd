#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _

    long long n;
    cin >> n;

    vector<long long> pizza(n);

    for(long long i = 0; i < n; i++)
        cin >> pizza[i];

    long long current_max = 0, global_max = 0, current_minumum = 0, global_minimum = 0, total = 0;

    for (long long i = 0; i < n; i++)
    {
        current_max = max(pizza[i], current_max + pizza[i]);
        global_max = max(global_max, current_max);

        current_minumum = min(pizza[i], current_minumum + pizza[i]);
        global_minimum = min(global_minimum, current_minumum);

        total += pizza[i];
    }

    cout << max(global_max, total - global_minimum) << '\n';
}
