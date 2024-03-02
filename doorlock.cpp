#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _

    long long n, m;
    cin >> n >> m;

    vector<int> lock(n);

    for (int i = 0; i < n; i++)
        cin >> lock[i];

    long long resto = 0, cont = 0;

    for (int i = 0; i < n - 1; i++)
    {
        resto = m - lock[i];
        lock[i] += resto;
        lock[i+1] += resto;

        cont +=  abs(resto);

    }

    cout << cont << '\n';
}
