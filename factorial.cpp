#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _

    long long n, result = 0;
    cin >> n;

    int *fatoriais = new int[9];

    for (int i = 1; i <= 9; i++)
    {
        if(i >= 2) fatoriais[i - 1] = i * fatoriais[i - 2];
        else fatoriais[0] = 1;
    }

    for (int i = 8; i >= 0; i--)
    {
        result += n / fatoriais[i];
        n %= fatoriais[i];
    }

    cout << result << '\n';

    delete[] fatoriais;

}
