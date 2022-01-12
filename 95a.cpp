#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //95
    string s;
    cin >> s;

    int price = 700;
    rep(i, 3) {
        if (s[i] == 'o')price += 100;
    }

    cout << price << endl;

    return 0;
}