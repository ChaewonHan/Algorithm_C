#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> num; 
    stack<int> s;
    
    while(num--) {
        int i;
        cin >> i;
        if(i == 0) s.pop();
        else s.push(i);
    }
    int j = 0;
    while(!s.empty()){
        j = j + s.top();
        s.pop();
    }
    cout << j;
}