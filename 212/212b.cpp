#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //212
    string s;
    cin >> s;

    if (s[0] == s[1]&& s[1] == s[2]&& s[2] == s[3]) {
        cout << "Weak" << endl;
        return 0;
    }

    rep(i, 3) {
        if(s[i]=='9') {
            if (s[i + 1] != '0') {
                cout << "Strong" << endl;
                return 0;
            }
        }
        else if (s[i] != char(s[i+1] - 1)) {
            cout << "Strong" << endl;
            return 0;
        }
    }
    cout << "Weak" << endl;
    return 0;
}