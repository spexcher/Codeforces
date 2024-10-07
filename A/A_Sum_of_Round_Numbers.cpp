/*
 *                                                 888
 *                                                 888
 *                                                 888
 *    .d8888b  88888b.   .d88b.  888  888  .d8888b 88888b.   .d88b.  888d888
 *    88K      888 "88b d8P  Y8b `Y8bd8P' d88P"    888 "88b d8P  Y8b 888P"
 *    "Y8888b. 888  888 88888888   X88K   888      888  888 88888888 888
 *         X88 888 d88P Y8b.     .d8""8b. Y88b.    888  888 Y8b.     888
 *     88888P' 88888P"   "Y8888  888  888  "Y8888P 888  888  "Y8888  888
 *             888
 *             888
 *             888
 */
//  ------------------------------------------------------------------------------------
//  Author    : spexcher | Gourab Modak
//  Contact   : spexcher@gmail.com
//  Linktree  : https://linktr.ee/spexcher/
//  Github    : https://github.com/spexcher/
//  LinkedIn  : https://www.linkedin.com/in/gourabmodak/
//  ------------------------------------------------------------------------------------

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
using lld = long double;
using ull = unsigned long long;
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
namespace number_theory
{
    ll mod = 1000000007; // 1000000007 1000000009 998244353 2147483647
    ll fpow(ll x, ll y)
    {
        ll res = 1;
        x = x % mod;
        if (x == 0)
            return 0;
        while (y > 0)
        {
            if (y & 1LL)
                res = (res * x) % mod;
            y = y >> 1LL;
            x = (x * x) % mod;
        }
        return res;
    }
    bool isPowerOfTwo(int n)
    {
        if (n == 0)
            return false;
        return (ceil(log2(n)) == floor(log2(n)));
    }
    ll inv(ll a, ll p = mod) { return fpow(a, p - 2); }
    bool isPerfectSquare(ll x)
    {
        if (x >= 0)
        {
            ll sr = sqrt(x);
            return (sr * sr == x);
        }
        return false;
    }
    ll gcd(ll x, ll y)
    {
        if (x == 0)
            return y;
        if (y == 0)
            return x;
        return gcd(y, x % y);
    }
    bool isprime(ll n)
    {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;

        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (ll i = 5; i * i <= n; i += 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;

        return true;
    }

    bool prime[15000105];
    void sieve(int n)
    {
        for (ll i = 0; i <= n; i++)
            prime[i] = 1;
        for (ll p = 2; p * p <= n; p++)
        {
            if (prime[p] == true)
            {
                for (ll i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        prime[1] = prime[0] = 0;
    }

    vector<ll> primelist;
    bool __primes_generated__ = 0;

    void genprimes(int n)
    {
        __primes_generated__ = 1;
        sieve(n + 1);
        for (ll i = 2; i <= n; i++)
            if (prime[i])
                primelist.push_back(i);
    }

    vector<ll> factors(ll n)
    {
        if (!__primes_generated__)
        {
            cerr << "Call genprimes you dope" << endl;
            exit(1);
        }
        vector<ll> facs;

        for (ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++)
        {
            if (n % primelist[i] == 0)
            {
                while (n % primelist[i] == 0)
                {
                    n /= primelist[i];
                    facs.push_back(primelist[i]);
                }
            }
        }
        if (n > 1)
        {
            facs.push_back(n);
        }
        sort(facs.begin(), facs.end());
        return facs;
    }

    vector<ll> getdivs(ll n)
    {
        vector<ll> divs;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                divs.push_back(i);
                divs.push_back(n / i);
            }
        }

        getunique(divs);
        return divs;
    }
}

using namespace number_theory;

//  -----------------------------------End Snippet area---------------------------------
#define int long long
void solve();
signed main()
{
    fast_io;
    int t = 1;
    cin >> t;
    FoF(i, 1, t)
        solve();
    return 0;
}

void solve()
{
    string n;
    cin >> n;
    int c = 0;
    vi res;
    FoR(i, sz(n) - 1, 0)
    {
        int d = (n[i] - '0');
        if (d > 0)
        {
            c++;
            res.pb(d * (fpow(10, sz(n) - i - 1)));
        }
    }
    print(c);
    print(res);
}