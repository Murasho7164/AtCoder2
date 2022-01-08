#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    vector<int> t(n);
    rep(i, n) {
        cin >> s.at(i) >> t.at(i);
    }

    int max = 0;

    rep(i, n) {
        if (t.at(i) > t.at(max)) {
            max = i;
        }
    }
    t.at(max) = 0;

    rep(i, n) {
        if (t.at(i) > t.at(max)) {
            max = i;
        }
    }

    cout << s.at(max) << endl;

    return 0;
}