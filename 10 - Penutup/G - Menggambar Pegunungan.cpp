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

char st = '*';

void mt(int n){
	if(n == 0) return;
	mt(n-1);
	f(i,0,n){
		cout << st;
	}
	cout << endl;
	mt(n-1);
}

void solve() {
    int n;
    cin >> n;
    mt(n);
    
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