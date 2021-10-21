#include<iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;
    cout << a + b;

    return 0;
}
// 1. ios::sync_with_stdio(0);과 cin.tie(0); 추가 하지 않았다. 이걸 꼭 추가하도록 하자
// 2. #include <bits/stdc++.h>를 사용하면 일일히 헤더를 추가하지 않아도 되서 풀이 시간을 단축해준다.