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

long long C(int n, int r) 
{
    if(r > n - r) r = n - r; 
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) 
    {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}

void solve() 
{
    int arr[4] = {0, 6, 28, 96};

    long n;
    cin >> n;
    for(int i =1 ; i<= n; i++)
    {
        if(i<=4)
        {
            cout << arr[i-1] << endl;
        }
        else
            cout << C((i*i), 2) - 4*i*i + 12*i - 8 << endl;
    }
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