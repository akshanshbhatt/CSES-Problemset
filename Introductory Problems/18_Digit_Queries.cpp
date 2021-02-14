//This problem took a lot of time...Sigh

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

vector <ll> vec1;

void solve() 
{

    //ll sum =0;
    //I cached the values of different slab values using the commented loop below into a set for improving the time of execution.
    set <ll> slab {9LL, 189LL, 2889LL, 38889LL, 488889, 5888889, 68888889, 788888889, 8888888889, 98888888889LL, 1088888888889LL, 11888888888889LL, 128888888888889LL, 1388888888888889LL, 14888888888888889LL, 158888888888888889LL};

    // for(int i=1; i<=16; i++)
    // {
    //     sum = sum + 0.9*i*(powl(10,i));
    //     slab.insert(sum);
    // }
    // //slab.erase(slab.begin());
    // cout << "{" ;
    // for(auto element : slab)
    //     cout << element << ", ";
    // cout << "}" ;

    for(auto iter : vec1) //Iterating through the input vector
    {
        //cout << iter <<endl;
        if(iter > 0 && iter <=9) //to save the calculation time for single digit inputs.
        {
            cout << iter << endl;
            continue;
        }

        ll temp = iter;
        auto pos = slab.equal_range(iter);
        auto lowerBound = pos.first;
        pos.first--;

        //cout << " " << " " << *pos.first;
        ll x = temp - (*(pos.first)) - 1;
        int number_of_digits = distance(slab.begin(), lowerBound);
        ll ahead_by = (x/(number_of_digits+1))+1;
        //cout << x << " " << (*pos.first) << " " << iter << " " << ahead_by;
        ll actual_number = stoll(string((number_of_digits), '9')) + ahead_by;
        int modulo = x % (number_of_digits+1);
        string stor = to_string(actual_number);
        char digit = stor[modulo];
        cout << digit << endl;//"digit = " << digit << "\n" << "number_of_digits = " << number_of_digits << "\n" << "ahead_by = "<< ahead_by << "\nx = " << x << "\n*pos.first = " << *pos.first <<"\nactual_number = "<< actual_number<< "\nmodulo = "<< modulo<< "\nstor = "<< stor<< "\ndigit = "<< digit << "\n"<< endl;
    }
    
}

int main() 
{
    ll temp;
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