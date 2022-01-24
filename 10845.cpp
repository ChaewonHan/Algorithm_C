#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;
    queue<int> q;

    while(num--) {
        string str;
        cin >> str;

        if ("push" == str) {
            int t;
            cin >> t;
            q.push(t);
        }
        else if("pop" == str) {
            if(q.empty()) cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            }
            
        }
        else if("size" == str) {
            cout << q.size() << "\n";
        }
        else if("empty" == str) {
            cout << q.empty() << "\n";
        }
        else if("front" == str) {
            if (q.empty()) cout << -1 << "\n";
            else cout << q.front() << "\n";
        }
        else if("back" == str) {
            if (q.empty()) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
    }
    
}