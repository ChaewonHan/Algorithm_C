#include <iostream>

using namespace std;

int func2(int arr[], int N) {

    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if(arr[i] + arr[j] == 100) return 1;
        }
    }
    return 0;
}

int main() {
    int N = 5;
    int arr[N] = {1, 2, 78, 4, 5};
    func2(arr, N);
    return 0;
}