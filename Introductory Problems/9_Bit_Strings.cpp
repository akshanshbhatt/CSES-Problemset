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

ll mod_calc(int two, int n)
{
    ll ans = 1;
    ll square = two;
    if(n == 0)
        return 1;

    while(n!=0)
    {
        if(n%2)
            ans=ans*square;
        square=(square*square)%MOD;
        n=n/2;
        if(ans > MOD)
            ans=ans%MOD;
    }
    return ans;
}

void solve() 
{
    int n;
    int two = 2;
    cin >> n;

    //ll power = pow(two, n);
    long result =  mod_calc(two, n);

    cout << result;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) 
    {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}