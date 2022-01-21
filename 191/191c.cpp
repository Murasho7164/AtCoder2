#include "bits/stdc++.h"
using namespace std;
#define rep(i,n) for (int i = 0 ; i < (n) ; i++)
#define For(i,k,n) for (int i = k ; i < (n) ; i++)
using P = pair<int, int>;
typedef int long long ll;
const int mod = 1000000007;

int main() {
    //191
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    rep(i, h)rep(j, w) cin >> s[i][j];

    int ans = 0;
    rep(i, h)rep(j, w) {
        if (s[i][j] == '#') {
            if (s[i - 1][j] == '.' && s[i][j - 1] == '.')ans++;
            if (s[i - 1][j] == '.' && s[i][j + 1] == '.')ans++;
            if (s[i + 1][j] == '.' && s[i][j - 1] == '.')ans++;
            if (s[i + 1][j] == '.' && s[i][j + 1] == '.')ans++;
        }
        if (0 < i && i < h - 1 && 0 < j && j < w - 1 && s[i][j] == '.') {
            if (s[i - 1][j] == '#' && s[i][j - 1] == '#')ans++;
            if (s[i - 1][j] == '#' && s[i][j + 1] == '#')ans++;
            if (s[i + 1][j] == '#' && s[i][j - 1] == '#')ans++;
            if (s[i + 1][j] == '#' && s[i][j + 1] == '#')ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
