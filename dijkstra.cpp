#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);

int main() { _

    string joia;
    set<string> joias;

    while(cin >> joia) joias.insert(joia);

    cout << joias.size() << '\n';

}
