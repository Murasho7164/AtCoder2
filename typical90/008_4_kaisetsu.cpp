#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;


int main() {
    //“TŒ^90_008
    //‰ðà
    int n;
    cin >> n;
    string s;
    cin >> s;

    string a = "atcoder";
    vector<vector<int>> dp(n, vector<int>(a.length(), 0));

    if (s[0] == a[0])dp[0][0]++;

    For(i,1, n) {
        if (s[i] == a[0]) dp[i][0]++;
        dp[i][0] += dp[i - 1][0];
    }

    For(i, 1, n) {
        For(j, 1, a.length()) {
            if (s[i] == a[j]) {
                dp[i][j] += dp[i - 1][j] + dp[i - 1][j - 1];
                dp[i][j] %= mod;
            }
            else {
                dp[i][j] += dp[i - 1][j];
            }
            
        }
    }

    cout << dp[n - 1][a.length() - 1] << endl;

    return 0;
}
