/* Ignore this program, this has a very high Time Complexity, I used it for verifying the digits I generated using the other program*/

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

vector <long> vec1;
stringstream string1;

void max_len(long n)
{
    long len =0;
    for(int i =1; len <= n; i++)
    {
        string1 << i;
        string test = string1.str();
        len = test.length();
    }
}

void solve() 
{
   for (auto& element : vec1)
    cout << string1.str()[element-1] << endl;
}

int main() 
{
    long temp;
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) 
    {
        // cout << "Case #" << t  << ": ";
        cin >> temp;
        vec1.push_back(temp);
    }
    max_len(*max_element(vec1.begin(), vec1.end()));
    solve();
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