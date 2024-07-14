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
    int n,m,p;
    cin >> n >> m >> p;
    int a[n][m];
    int b[m][p];
    f(i,0,n){
    	f(j,0,m){
    		cin >> a[i][j];
    	}
    }
    f(i,0,m){
    	f(j,0,p){
    		cin >> b[i][j];
    	}
    }
    f(i,0,n){
    	f(j,0,p){
    		int tot = 0;
    		f(k,0,m){
    			tot += a[i][k] * b[k][j];
    		}
    		cout << tot << " ";
    	}
    	cout << endl;
    }
    
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