											 /*In the name of Almighty Allah*/
#include<bits/stdc++.h>
using namespace std;

#define                 endl                        '\n'
#define                 C(a)                        cout<<(a)<<endl;
#define                 ll                          long long
#define                 Yes                         cout<<"Yes"<<endl;
#define                 No                          cout<<"No"<<endl;
#define                 frac(a)                     cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);//frac(4); cout<<a; 1.1234
#define                 f(i,pp,n)                   for(ll (i) = pp; i <n; i++)
#define                 rf(i,pp,n)                  for(ll (i) = pp; i >=n; i--)
#define                 fr(i,pp,n)                  for(ll (i) = pp; i <=n; i++)
#define                 ita2(n)                     for(auto pri : (n)) { cout<<pri<<" " ;} cout<<endl;
#define                 ita3(n)                     for(auto pri : (n)) { cout<<pri.first<<" "<<pri.second<<endl; }
#define                 vsort(n)                    sort(n.begin(),n.end()); 
#define                 vrsort(n)                   sort(n.begin(),n.end(),greater <> ()); 
#define                 MOD                         1000000007
#define                 bug                         cout<<"ekane asche"<<endl;
#define                 unique(n)                   (n).erase(unique((n).begin(),(n).end()),(n).end());
const long long inf = 90000000000000000;
ll test ,COUNT = 0 ; 
// // modulo // PBDS // graph_index //Factors // rotator // issort? // sum // count //SUBSTR //CMP




void solve()
{
	string s ; cin>>s; 


	// string s = "abcdef"; 
    //cdef abef abcf adef   
    // a ab abc abcd abcde abcdef b bc bcd bcde bcdef c cd cde cdef d de def e ef f
    int sz=s.size();
    string ss;
	vector<string>vec ; 
    for(int i=0; i<sz; i++)  // i = 0 , 1 , 2 , 3 , 4
    {
      for(int j=0; j<sz-i; j++)  // j = 0 to <2
      {
        ss = s.substr( i , j+1 ); // (1,j+1)
        cout<< ss <<endl;
		vec.push_back(ss) ; 
      }
    }
    // return 0;


	
	
}   



int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	long long  c = 1;
	cin >> test;
	COUNT = 0 ;
	for(long long tc = 1 ; tc<= test ; tc++ )
	{
		COUNT++ ;
		// cin.ignore();
		// cout << "Case " << c++ << ": ";
		solve();
	}
	return 0 ; 
}