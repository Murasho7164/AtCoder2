#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //215
    string s;
    int k;
    cin >> s >> k;

    int count = 1;
    sort(s.begin(), s.end());
    do {
        if (count == k) {
            cout << s << endl;
            return 0;
        }
        count++;
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
