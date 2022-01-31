#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<int> dq;

    dq.push_back(n);
    n--;

    int pos = s.length() - 1;
    while (n >= 0) {
        if (s[pos] == 'L')dq.push_back(n);
        else dq.push_front(n);
        n--;
        pos--;
    }

    rep(i, s.length() + 1) {
        if (i != 0)cout << " ";
        int a = dq.front();
        cout << a;
        dq.pop_front();
    }

    cout << endl;

    return 0;
}
