#include <iostream>

using namespace std;

int main(int n) {

    int ret = 0;

    for (int i = 1; i <= n; i++){
        if(i % 3 == 0 || i % 5 == 0) ret += i;
    }
    printf("%d", ret);
    return 0;
}


// Ctrl +Alt + C : exe ���� ����
// Ctrl +Alt + R : �͹̳ο� ���� ��� ������