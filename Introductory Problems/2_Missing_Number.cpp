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
    ll sum =0;

    long a = 0;
    cin >> a;

    vector<long> vec1(a-1);
    for (auto& element : vec1)
        cin >> element;

    sum = accumulate(vec1.begin(), vec1.end(), 0LL); //0LL is very important.

    ll apparant_sum = a*(a+1)/2;

    cout << apparant_sum - sum << endl;
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