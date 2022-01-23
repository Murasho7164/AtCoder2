#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    vector<vector<int>> a(3, vector <int>(3));

    rep(i, 3) {
        rep(j, 3) {
            cin >> a.at(i).at(j);
        }
    }

    int n;
    cin >> n;

    vector<int> b(n);
    rep(k, n) {
        cin >> b.at(k);
    }


    rep(k, n) {
        rep(i, 3) {
            rep(j, 3) {
                if (a.at(i).at(j) == b.at(k)) {
                    a.at(i).at(j) = 0;
                }
            }
        }

    }


    rep(i, 3) {
        if (a.at(i).at(0) == 0 && a.at(i).at(1) == 0 && a.at(i).at(2) == 0) {
            cout << "Yes" << endl;
            return 0;
        }
        else if (a.at(0).at(i) == 0 && a.at(1).at(i) == 0 && a.at(2).at(i) == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if (a.at(0).at(0) == 0 && a.at(1).at(1) == 0 && a.at(2).at(2) == 0) {
        cout << "Yes" << endl;
        return 0;
    }
    else if (a.at(0).at(2) == 0 && a.at(1).at(1) == 0 && a.at(2).at(0) == 0) {
        cout << "Yes" << endl;
        return 0;
    }
    else
        cout << "No" << endl;

    return 0;
}
