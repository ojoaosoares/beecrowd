#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);


long long n, c, t;

bool possible(vector<long long> &p, long long chute)
{
    long long resto = t*chute, pessoas = 1;
    for (int i = 0; i < n; i++)
    {
        if(resto >= p[i])
            resto -= p[i];
        else {
            pessoas++;
            i--;
            resto = chute*t;
        }

        if(pessoas > c) return false;
    }

    return true;
}


int main() { _

   cin >> n >> c >> t;

   vector<long long> p(n);

   for (int i = 0; i < n; i++)
       cin >> p[i];

   long long left = 1, right = 1e9 + 10;

    while (left < right)
    {
        long long middle = (left + right)/2;

        if(possible(p, middle)) right = middle;
        else left = middle + 1;
    }

    cout << left << '\n';


}
