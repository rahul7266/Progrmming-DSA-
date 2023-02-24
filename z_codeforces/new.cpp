
#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define f(i, a, n) for (ll i = a; i < n; i++)
#define rev(i, a, n) for (ll i = a; i >= n; i--)
#define vec vector<ll>
#define pqmax priority_queue<pair<int, int>>
#define pqmin priority_queue<int, vector<int>, greater<int>>
#define omap map<ll, ll>
#define umap unordered_map<ll, ll>
#define uset unordered_set<ll>
#define oset set<ll>
#define vpair vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define sor(v) sort(v.begin(), v.end())
#define sora(a, n) sort(a, a + n)
#define fi first
#define se second
#define emp empty
#define flash
#define all(c) (c).begin(), (c).end()
#define nline "\n"
#define INF 2e18
#define PI 3.141592653589793238462
#define ffo find1_first_of
#define sum(a) (accumulate((a).begin(), (a).end(), 0ll))
#define minele(a) (*min_element((a).begin(), (a).end()))
#define maxele(a) (*max_element((a).begin(), (a).end()))
#define minind(a) (min_element((a).begin(), (a).end()) - (a).begin())
#define maxind(a) (max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) (lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) (upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

/*--------------------------------------------------------*/
ll ipow(ll base, ll exp)
{
    ll result = 1;
    for (;;)
    {
        if (exp & 1)
            result = (result * base) % mod;
        ;
        exp >>= 1;
        if (!exp)
            break;
        base = (base * base) % mod;
    }

    return result;
}
ll fact(ll n)
{
    if (n >= mod)
        return 0;

    ll result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % mod;

    return result;
}
bool is_prime(ll n)
{
    if (n == 1)
    {
        return false;
    }
    ll i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i += 1;
    }
    return true;
}
bool pow2(ll x)
{
    return x && (!(x & (x - 1)));
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void dv(vector<int> v)
{
    for (auto x : v)
        cout << x << " ";
    cout << endl;
}
ll binary_ex(ll a, ll b, ll m)
{
    ll ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return ans;
}
bool isPerfectSquare(ll x)
{
    if (sqrt(x) * sqrt(x) == x)
    {
        return true;
    }
    return false;
}
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
ll factorial(ll n)
{

    return (n == 1 || n == (ll)0) ? (ll)1 : n * factorial(n - 1);
}
ll maxSubArraySum(ll a[], ll size)
{
    ll max_so_far = -1111111111, max_ending_here = 0;

    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
bool isPalindrome(string s, ll n)
{
    ll l = 0;
    ll h = n - 1;
    while (h > l)
    {
        if (s[l++] != s[h--])
        {

            return false;
        }
    }
    return true;
}
bool is_vowel(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;

    return false;
}

int ncr(ll n, ll r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

/*--------------------------------------------------------*/
//    bool is_vowel(char c)
//    bool isPalindrome(string s, ll n)
//    ll maxSubArraySum(ll a[], ll size)
//    ll factorial(ll n)
//    bool isPowerOfTwo(ll n)
//    bool isPerfectSquare(ll x)
//    ll binary_ex(ll a, ll b, ll m)
//    void dv(vector<int>v)
//    ll ipow(ll base, ll exp)
//    bool is_prime(ll n)
//    bool pow2(ll x)
//    void display(int a[], int n)
//    ll ncr(ll n, ll r)
//    ll countnoofdivisors(int n)
/*--------------------------------------------------------*/
bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first==p2.first) return p1.second<p2.second ;

    return p1.first>p2.first ;
}
void solve(){
 ll n;
 cin>>n ;
 if(n&1 && n%10 == 9){
     string a="", b = "";
        bool f = true;
        while(n > 0){
            if(n%2 && f){
                int t= n%10;
                a += to_string((t+1)/2);
                if(t > 1)
                b += to_string(t/2);
                f = false;
            }else{
                int t= n%10;
                b += to_string((t+1)/2);
                if(t > 1)
                a += to_string(t/2);
                f = true;
            }
            n = n/10;
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        cout<<a <<" "<< b<<endl;
 }
 else{
    cout<<(n+1)/2<<" "<<n/2<<endl;
 }
}
int main(){
 
    ll t;
    cin>>t ;
    while(t--)
    solve() ;
    return 0 ;
}