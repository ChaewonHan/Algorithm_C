#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num;
    cin >> num;
    stack<int> s;

    while(num--) {
        string str;
        cin >> str;
        if(str == "pop") {
            if (s.empty()) cout << -1 << "\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if(str == "size") {
            cout << s.size() << "\n";
        }
        else if(str == "empty") {
            cout << (int)s.empty() << "\n";
        }
        else if(str == "top") {
            if (s.empty()) cout << -1 << "\n";
            else cout << s.top();
        }
        else if(str == "push") {
            int t;
            cin >> t;
            s.push(t);
        }
    }
    
}