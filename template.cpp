/**
 * @author Denis Crismariu
 */

#include <bits/stdc++.h>

using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rand(int a, int b)
{
    int ans = uniform_int_distribution<int>(a, b)(rng);
    return ans;
}
#define fastio std::ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define test " test "
#define yes "YES\n"
#define no "NO\n"
#define pb push_back
#define all(x) x.begin(), x.end()
// #define int long long
#define db(a) cout << #a "=" << (a) << " ";
#define deb(a) db(a) cout << '\n';
#define deb2(a, b) db(a) db(b) cout << '\n';
#define deb3(a, b, c) db(a) db(b) db(c) cout << '\n';
#define deb4(a, b, c, d) db(a) db(b) db(c) db(d) cout << '\n';
#define deb5(a, b, c, d, e) db(a) db(b) db(c) db(d) db(e) cout << '\n';
#define printV(v)    \
    for (auto i : v) \
        cout << i << " ";
#define FILES                      \
    freopen("txt.in", "r", stdin); \
    freopen("txt.out", "w", stdout);
typedef long long ll;
const int mod = 1e9 + 7;
const char bn = '\n';
int maxi = INT_MIN, mini = INT_MAX;
int n;
void solve()
{
    cin >> n;
}
signed main()
{
    fastio;
    // FILES;
    int __t = 1;
    //  cin >> __t;
    while (__t--)
        solve();

    return 0;
}
