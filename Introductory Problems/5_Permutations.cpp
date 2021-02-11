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
    std::stringstream evenStream;
    std::stringstream oddStream;

    long a = 0;
    cin >> a;

    if(a<4 && a!=1)
    {
        cout << "NO SOLUTION";
    }

    else
    {
        string odd, even = "";

        for(int i = 1; i<=a; i++)
        {
            if(i%2 == 0)
            {
                evenStream<< i << " ";
            }
            else
            {
                oddStream<< i << " ";
            }
        }
        cout << evenStream.str() << oddStream.str();
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