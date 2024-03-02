#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

const int N_MAX = 200005;

long long n, c, stock[N_MAX], table[N_MAX][2];

long long solve (long long dia, long long comprou)
{
    if(dia == n) return 0;

    long long &resposta = table[dia][comprou];

    if (resposta == -1)
    {
        if (comprou) resposta = max(solve(dia + 1, 1), solve(dia + 1, 0) + stock[dia]);

        else return resposta = max(solve(dia + 1, 0), solve(dia + 1, 1) - (stock[dia] + c));
    }

    return resposta;    
}

int main() { _
    
    cin >> n >> c;

    for (long long i = 0; i < n; i++)
        cin >> stock[i];

    memset(table, -1, sizeof table);
    
    cout << solve(0, 0) << '\n';
}
