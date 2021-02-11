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
    long sum=0;

    long a = 0;
    cin >> a;

    vector<long> vec1(a);
    for (auto& element : vec1)
        cin >> element;

    for(uint32_t i=0; i < (vec1.size()-1); i++)
    {
        long diff = vec1[i] - vec1[i+1];
        if(diff > 0)
        {
            sum = sum + diff;
            vec1[i+1] = vec1[i+1] + diff;
        }
    }

    cout << sum;
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