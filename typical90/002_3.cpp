#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //“TŒ^90_002
    //‰ğà
    int n;
    cin >> n;

    if (n % 2 != 0)return 0;

    rep(i, 1 << n) {
        string kakko = "";
        int l = 0, r = 0;
        bool ok=true;
        for (int j = n - 1; j >= 0; j--) {
            if (((1 << j) & i) == 0) {
                kakko += '(';
                l++;
            }
            else {
                kakko += ')';
                r++;
            }
            if (l < r)ok = false;
        }
        
        if(l!=r) ok = false;

        if (ok) cout << kakko << endl;
    }

    return 0;
}
