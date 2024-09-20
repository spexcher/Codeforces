// Pragmas
// #pragma GCC target("avx2")
#pragma GCC optimization("O3")
// #pragma GCC optimization ("O2")
//  #pragma GCC target("unroll-loops")

// Includes and namespaces
#include <bits/stdc++.h>
#include <chrono>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Ordered Set and Ordered Map
template <typename T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class key, class value, class cmp = less_equal<key>>
using omap = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;

// 1D Stuff
using ll = long long;
using ld = long double;
using i64 = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vb = vector<bool>;
using vc = vector<char>;
using vs = vector<string>;

// 2D Vectors
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvb = vector<vb>;
using vvc = vector<vc>;
using vpii = vector<pii>;
using vpll = vector<pll>;

// Maps
using mii = map<int, int>;
using mci = map<char, int>;
using umii = unordered_map<int, int>;
using umci = unordered_map<char, int>;
using mll = map<ll, ll>;
using mcll = map<char, ll>;
using umll = unordered_map<ll, ll>;
using umcll = unordered_map<char, ll>;

// Sets
using si = set<int>;
using sll = set<ll>;
using sc = set<char>;

// Heaps
template <class T>
using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <class T>
using max_heap = priority_queue<T>;

// Shorthands
#define ff first
#define ss second
#define eb emplace_back
#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

// Functions
#define sqrt(x) sqrtl((x))
#define ceil(x) ceill((x))
#define abs(x) labs((x))
#define floor(x) floorl((x))
#define ceildiv(a, b) ((a + b - 1) / b)
#define sz(x) (ll) x.size()
#define getunique(v) sort(all(v)), v.erase(unique(all(v)), v.end())
#define setbits(n) __builtin_popcountll(n)
#define counttz(n) __builtin_ctzll(n)
#define countlz(n) __builtin_clzll(n)
#define print(x) cout << x << "\n"
#define upper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define lower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define sum(v) accumulate(all(v), 0ll)
#define maxe(v) *max_element(v.begin(), v.end())
#define mine(v) *min_element(v.begin(), v.end())

// Constants
#define PI 3.1415926535897932384626
#define linf 1e18
#define inf INT_MAX

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);                   \
    cout << fixed << setprecision(25)

// Prints
#define py cout << "YES\n"
#define pm cout << "-1\n"
#define pn cout << "NO\n"
#define pm cout << "-1\n"
#define pl cout << '\n'
#define nl '\n'
#define sp ' '

// Loops
#define FoF(i, k, n) for (int i = k; i <= n; i++)
#define FoR(i, k, n) for (int i = k; i >= n; i -= 1)
#define FoFS(i, k, n, s) for (int i = k; i <= n; i += s)
#define FoRS(i, k, n, s) for (int i = k; i >= n; i -= s)

// Input and Output overloads
template <typename T, typename U>
istream &operator>>(istream &in, pair<T, U> &p) { return in >> p.ff >> p.ss; }
template <typename T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}
template <typename T, typename U>
ostream &operator<<(ostream &out, const pair<T, U> &p) { return out << p.ff << ' ' << p.ss; }
template <typename T>
ostream &operator<<(ostream &out, const vector<T> &v)
{
    for (const auto &x : v)
        out << x << ' ';
    return out;
}
//  -----------------------------------Snippet area-------------------------------------

//  -----------------------------------End Snippet area---------------------------------
#define int long long
void solve();
signed main()
{
    fast_io;
    int t = 1;
    //   cin >> t;
    FoF(i, 1, t)
    { // eprintf("--- Case #%lld start ---\n", i);eprintf("Case #%lld: ", i);solve();eprintf("--- Case #%lld end ---\n", i);eprintf("time = %.5lf\n", getCurrentTime());eprintf("++++++++++++++++++++\n");
        solve();
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    vvc v(8, vc(8));
    while (n--)
    {
        cin >> v;
        bool found = false;
        int x = 0, y = 0;
        FoF(i, 0, 7)
        {
            FoF(j, 0, 7)
            {
                if (v[i][j] != '.')
                {
                    x = i, y = j;
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }
        while (x < 8 and v[x][y] != '.')
            s.pb(v[x][y]), x++;
        s.pb(nl);
    }
    print(s);
}