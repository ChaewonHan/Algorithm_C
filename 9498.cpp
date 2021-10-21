#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;

    if (a >= 90 && a <= 100) cout << 'A';
    else if (a >= 80) cout << 'B';
    else if (a >= 70) cout << 'C';
    else if (a >= 60) cout << 'D';
    else cout << 'F';

    return 0;
}
// 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F

// 1. 문자 1개는 char형이라서 작은 따옴표를 사용해야 된다.