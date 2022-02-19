#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;
const int mod2 = 998244353;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> primes;
    vector<bool> nums(201, true);
    For(i,2, 201) {
        if (nums[i]) {
            primes.push_back(i);
            for (int x = 2 * i; x < 201; x += i) {
                nums[x] = false;
            }
        }
    }

    int taka = a;
    int aoki = c;
    vector<bool> taka_win(b - a + 1,true);
    while (taka <= b ) {
        while(aoki <= d)
        {
            if (nums[taka + aoki]) {
                taka_win[taka - a] = false;
                break;
            }
            aoki++;
        }
        aoki = c;
        taka++;
    }

    rep(i, taka_win.size()) {
        if (taka_win[i]) {
            cout << "Takahashi" << endl;
            return 0;
        }
    }

    cout << "Aoki" << endl;

    return 0;
}
