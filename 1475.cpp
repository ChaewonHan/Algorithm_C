#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input;
    int val = 1;
    int list[10] = {};

    //입력
    cin >> input;
    
    //입력 받은 숫자 배열에 하나씩 저장
    while(input > 0) {
        list[input%10]++;
        input/=10;
    }

    //같은 숫자 나오면 1증가, 6이나 9가 2번 나왔을 경우 증가안함
    for (int i=0; i<10; ++i) {
        if (list[6] > 1 || list[9] > 1) {
            val = (list[6]+list[9]+1) / 2;
        } else if (list[i] > 1) {
            val+=list[i];
        }
    }
    cout << val;
}