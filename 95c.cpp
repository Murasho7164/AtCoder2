#include"bits/stdc++.h"
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
using P = pair<int, int>;

int main() {
    //95
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int price = 0;
    while (x > 0 && y > 0) {
        if (a + b >= c * 2) price += (c * 2);
        else price += (a + b);
        x--;
        y--;
    }
    while (x > 0 || y > 0) {
        if (x > 0) {
            if (a < c * 2)price += a;
            else price += 2 * c;
            x--;
        }
        else {
            if (b < c * 2)price += b;
            else price += 2 * c;
            y--;
        }
    }

    cout << price << endl;

    return 0;
}