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
// 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F

// 1. ���� 1���� char���̶� ���� ����ǥ�� ����ؾ� �ȴ�.