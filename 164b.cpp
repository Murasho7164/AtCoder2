#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //164
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int i = 1;; i++) {
        if (c - i * b <= 0) {
            cout << "Yes" << endl;
            return 0;
        }
        else if(a-i*d<=0){
            cout << "No" << endl;
            return 0;
        }
    }


    return 0;
}