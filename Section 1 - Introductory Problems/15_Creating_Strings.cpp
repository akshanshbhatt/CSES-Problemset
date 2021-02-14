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

//the approach which I am thinking is recursively find all the permutations of the string and then insert them in a set. 

set<string> set1;

void permutations(string a, int l, int r) //Recusrsive Function to print all the valid perumations
{ 
    //set<string> set1;
    if (l == r) 
        set1.insert(a);
    else
    { 
        for (int i = l; i <= r; i++) 
        { 
  
            swap(a[l], a[i]); 
  
            permutations(a, l+1, r); 
  
            swap(a[l], a[i]); 
            
        }
    } 
} 

void solve() 
{
    string str;
    getline(cin, str);
    int l = 0;
    int r = str.size(); //a.size() is used instead of a.length() as it eases the thinking process without thinking about the '\n'
    permutations(str, l, r-1);

    cout<< set1.size() <<endl;
    for (auto i: set1)
        std::cout << i << endl;
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