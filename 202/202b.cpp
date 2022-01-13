#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define For(i,s,g) for(int i=s;i<g;i++)
#define INF 1010000000
using ll = long long;
using P = pair<int, int>;

int main() {
    //202
    string s;
    cin >> s;

    string t(s.rbegin(), s.rend());

    rep(i, t.length()){
        if (t[i] == '6')t[i] = '9';
        else if(t[i] == '9')t[i] = '6';
    }

    cout << t << endl;

    return 0;
}