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
    string n;
    int c =0;

    stringstream odd;
    stringstream even_front;
    //stringstream even_rear;
    getline(cin, n);

    map<char, int> char_freq;

    for(char c : n)
    {
        char_freq[c]++;
    }

    for (auto const& x : char_freq)
    {
        if(x.second % 2 != 0)
        {
            c++;
            odd << string(x.second, x.first);
            if(c == 2)
            {
                cout << "NO SOLUTION";
                exit(0);
            }
        }
        else
        {
            even_front << string((x.second/2), x.first);
            //even_rear << even_rear.str() << string((x.second/2), x.first);
        }      
    }
    string rear = even_front.str();
    reverse(rear.begin(), rear.end());
    cout << even_front.str() << odd.str() << rear;
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