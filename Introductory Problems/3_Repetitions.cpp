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


void solve() 
{
    string input;
    getline(cin, input);


    long longest = 1, temp = 1; 
  
     
    for (long i = 1; i < input.size(); i++) // Traversing the inputted string from beginning to end
    { 
        
        if (input[i] == input[i - 1]) // checking if consecutive (neighbouring) characters are same or not
        { 
            temp++; 
        } 
        else 
        { 
            longest = max(longest, temp); //checking if the new temporary result is bigger than old answer or not
            temp = 1; 
        } 
    } 
    longest = max(longest, temp); 

    cout << longest ;
    
    //vector<char> vec1(input.begin(), input.end());
    //vector <int> difference_vector = pairwiseDifference(vec1);
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