#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;



int main() {
    //203
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) {
        cout << c << endl;
    }
    else if(b==c)
    {
        cout << a << endl;
    }
    else if (a == c)
    {
        cout << b << endl;
    }
    else {
        cout << 0 << endl;
    }



    

    return 0;
}