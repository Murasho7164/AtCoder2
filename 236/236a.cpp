#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //236
    string s;
    cin >> s;
    int a, b;
    cin >> a >> b;
    char c = s[a - 1];
    s[a - 1] = s[b - 1];
    s[b - 1] = c;

    cout << s << endl;

    return 0;
}
