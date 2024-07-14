#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<bool> vb;

#define f(i,s,e) for(ll i=s;i<e;i++)
#define fs(i,s,e) for(ll i=s;i<=e;i++)
#define rf(i,s,e) for(ll i=s;i<e;i--)
#define umap unordered_map
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define sz(x) ((int)x.size())
#define all(a) a.begin(), a.end()

void solve() {
    ll n,d;
    cin >> n >> d;
    vi x(n), y(n);
    f(i,0,n){
    	cin >> x[i] >> y[i];
    }
    ll min_t = LLONG_MAX;
    ll max_t = LLONG_MIN;
    
    
    f(i, 0, n) {
        f(j, i + 1, n) {
            ll t = (pow(abs(x[j] - x[i]), d) + pow(abs(y[j] - y[i]), d));
            min_t = min(min_t, t);
            max_t = max(max_t, t);
        }
    }
    
    cout << min_t << " " << max_t << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        //cout << "Case #" << t << ": ";
        solve();
    }
}