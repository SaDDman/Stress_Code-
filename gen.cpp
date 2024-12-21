#include<bits/stdc++.h>
using namespace std;

#define ll long long
 
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
inline ll gen_random(ll l, ll r) {
    return uniform_int_distribution<ll>(l, r)(rng);
}


 
// Random Real Number Generator:
 
// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// inline double gen_random(double l, double r) {
//     return uniform_real_distribution<double>(l, r)(rng);
// }





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("in.txt", "w", stdout) ; 
    ll t=1;
    cout<<t<<endl;
    while(t--)
    {
        // ll k = gen_random(2,5);
        // ll l1 = gen_random(1,10);
        // ll r1 = gen_random(1,10);
        // ll l2 = gen_random(1,10);
        // ll r2 = gen_random(1,10);
        // cout<<k<<" "<<l1<<" "<<r1<<" "<<l2<<" "<<r2<<endl;
        ll n = gen_random(1,10); cout<<n<<endl;
        string s ; 
        vector<char>b = {'0','1'} ; 
        for(ll i = 0 ; i< n ; i++ )
        {
            s+=b[gen_random(1,2)-1];
        } cout<<s<<endl;
    }

    return 0 ; 
}


// for vertor permutation 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     // freopen("in.txt", "w", stdout) ; 
//     ll t=1;
//     cout<<t<<endl;
//     while(t--)
//     {
//         ll n = gen_random(1,10);
      
//         cout<<n<<endl;
//         vector<ll>v ; 
//         for(int i = 1 ; i<=n ; i++ )
//         {
//             v.push_back(i);
//         }
//         shuffle(v.begin(),v.end(),rng);
        
//         for(auto u : v) cout<<u<<" ";
//         cout<<endl;
//     }
//     return 0 ; 
// }

// for string 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     // freopen("in.txt", "w", stdout) ; 
//     ll t=1;
//     cout<<t<<endl;
//     while(t--)
//     {
//         ll n = gen_random(1,10);
      
//         cout<<n<<endl;
//         for(int i = 0 ; i< n ; i++)
//         {
//             char c = 'a' + gen_random(0,25);
//             cout<<c;
//         }cout<<endl;
//     }
//     return 0 ; 
// }



// specific char only 
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     // freopen("in.txt", "w", stdout) ; 
//     ll t=1;
//     cout<<t<<endl;
//     while(t--)
//     {
//         ll n = gen_random(1,10);
//         vector<char>x = {'.','#'};
//         cout<<n<<endl;
//         for(int i = 0 ; i< n ; i++)
//         {
//             cout<<x[gen_random(0,x.size()-1)];
//         }cout<<endl;
//     }
//     return 0 ; 
// }