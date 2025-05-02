#include "cpplib/util/template.hpp"
#include "cpplib/math/ACL_modint998244353.hpp"

vec p = {2, 4, 6, 5, 3, 1};
vec a = {1, 9, 2, 25, 2, 9};
void solve() {
    lint n = 6;
    cout << n << endl;
    cout << flush;
    while (1) {
        char c;
        cin >> c;
        if (c == '?') {
            lint s, t;
            cin >> s >> t;
            s--;
            t--;
            assert(s != t);
            s = p[s] - 1;
            t = p[t] - 1;
            lint res = 0;
            rep(i, min(s, t), max(s, t) + 1) { res += a[i]; }
            cout << res << endl;
            cout << flush;
        } else {
            assert(c == '!');
            vec p2(n), a2(n);

            rep(i, n) { cin >> p2[i]; }
            rep(i, n) { cin >> a2[i]; }
            // debug(p2);
            // debug(a2);
            assert(p2 == p);
            assert(a2 == a);
            return;
        }
    }
}

int main() {
    solve();
    // lint t;cin>>t;while(t--)solve();
}