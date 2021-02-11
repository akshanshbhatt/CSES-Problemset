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


void solve() 
{
    ll x, y;
    ll ans;
    cin >> x >> y;
    // cout << x << " " << y;
    //ll large = max(x, y);
    ll large = y>x? y : x;
    ll complete_squares = (large - 1)*(large - 1);
    if((large%2) == 0)
    {
        ans = x>y ? large*large - y + 1 : complete_squares + x; 
    }
    else
        ans = x>y ? complete_squares + y : large*large - x + 1;

    cout << ans << " ";
}

// void looping()
// {
//     for(int i =1; i<=6; i++)
//     {
//         for(int j =1; j<=6; j++)
//         {
//             solve(i,j);
//         }
//         cout << endl;
//     }
// }

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) 
    {
        // cout << "Case #" << t  << ": ";
        solve();
        //looping();
    }
}