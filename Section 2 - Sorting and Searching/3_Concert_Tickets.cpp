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
    int n, m;
    cin >> n >> m;

    multiset <long, greater<int>> h ;//(n);
    //vector <long> t (m);
    long t;

    for (int i =0; i<n; ++i)
    {
        long ticket_price;
        cin >> ticket_price;
        h.insert(ticket_price);
    }

    //for (int i =0; i<m; ++i)
    //    cin >> t[i];

    //sort(h.begin(),h.end());

    // for(auto& it : t)
    // {
    //     cout << it << " ";
    // }

    while(m--)
    {
        // auto pos = h.lower_bound(it); //- h.begin()-1;
        // if(*pos > it && it != *h.begin())
        // {
        //     pos--;
        // }
        // if(pos == -1)
        // {
        //     cout << -1 << endl;
        //     continue;
        // }
        //auto pos2 = upper_bound(h.begin(), h.end(), t[i]);
        //cout<< (*pos) << endl;
        //h.erase(pos);
        //h.erase(h.begin()+pos);
        cin >> t;

        auto it = h.lower_bound(t);

        if (it == h.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            h.erase(it);
        }
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

//for vector inputting (of prespecified length)
//vector<long> vec1(a);
//    for (auto& element : vec1)
//        cin >> element;

//for pairwise difference
// vector<int> pairwiseDiff(const std::vector<char> &n) 
// { 
//     int diff; 
//     vector<int> diffe;
//     for (int j = 0; j < n.size()-1; j++) 
//     { 
//         diff = n[j] - n[j + 1]; 
//         cout << diff << " "; 
//     } 
//     return diffe;
// } 

//for nCr calculation
//long long C(int n, int r) 
//{
//    if(r > n - r) r = n - r; 
//    long long ans = 1;
//    int i;
//    for(i = 1; i <= r; i++) 
//    {
//        ans *= n - r + i;
//        ans /= i;
//    }
//    return ans;
//}