#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //207
    int n; cin >> n;
    int t;
    vector<pair<double,double>> lr(n);
    rep(i, n) {
        cin >> t >> lr[i].first >> lr[i].second;
        if (t == 2)lr[i].second-=0.5;
        else if (t == 3)lr[i].first+=0.5;
        else if (t == 4) {
            lr[i].first+=0.5;
            lr[i].second-=0.5;
        }
    }

    int count = 0;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (lr[i].second >= lr[j].first && lr[i].first <= lr[j].second)count++;
            else if(lr[j].second >= lr[i].first && lr[j].first <= lr[i].second)count++;
        }
    }

    cout << count << endl;

    return 0;
}
