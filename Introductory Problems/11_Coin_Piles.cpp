#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef double db;

#define mp make_pair
#define pb push_back
#define endl "\n"
#define deb(x) cout << #x << " " << x << endl

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

//approach which I am thinking initially - if pile 1 has m+n coins then pile 2 should have 2m + n/2. If integer value of m and n exists then YES else NO

void solve() 
{
    long a, b = 0;
    cin >> a >> b;
    long double x_0 =  (2.0*b-a)/3.0;
    long double y_0 = 2.0*(2.0*a-b)/3.0;
    double alpha = x_0 - (ll)x_0;
    double beta = y_0 - (ll)y_0;

    if(alpha == 0.0 && beta == 0.0)
        cout << "YES" << endl ;
    else
        cout << "NO" << endl;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) 
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}