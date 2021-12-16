#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //207
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a >= c && b >= c) {
        cout << a + b << endl;
    }
    else if(a >= b && c >= b) {
        cout << a + c << endl;
    }
    else {
        cout << b + c << endl;
    }

    return 0;
}
