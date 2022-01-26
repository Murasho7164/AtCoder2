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
    vector<vector<int>> dp(n, vector<int>(a.length(),0));

    For(i, 0, n) {
        For(j,0,a.length()){
            if (j == 0&&s[i]=='a') {

            }
            if (i == 0) {

            }
        }
    }


    return 0;
}
