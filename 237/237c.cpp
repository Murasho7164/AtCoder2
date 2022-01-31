#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    string s;
    cin >> s;

    int a = 0;
    while (s.length() > 1 && s[s.length() - 1] == 'a') {
        s.pop_back();
        a++;
    }

    int pos = 0;
    while (s[pos] == 'a' && pos < a) {
        s.push_back('a');
        pos++;
    }

    if (s == string(s.rbegin(), s.rend()))cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
