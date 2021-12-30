#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //164
    int n; cin >> n;
    vector<string> s(n);
    rep(i, n)cin >> s[i];
    
    set<string> st;
    rep(i, n) st.insert(s[i]);

    cout << st.size() << endl;
    

    return 0;
}