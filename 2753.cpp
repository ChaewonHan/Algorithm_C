#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int val;
    cin >> val;

    if (val % 4 == 0 && val % 100 != 0) cout << 1;
    else if (val % 400 == 0) cout << 1;
    else cout << 0;

    return 0;
}