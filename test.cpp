#include<bits/stdc++.h>
using namespace std;

#define pb(n) push_back(n);
#define vi vector<int>
#define ll long long int
#define ull unsigned long long int
#define deb(x) cerr<<#x<<" is "<<x<<"\n";
#define deba(x) {cerr<<"Container \'"<<#x<<"\' has:\n \t";int s=0; for(auto i:x){cerr<<i<<" ";s++;} cerr<<"\t["<<s<<"]"<<"\n";}

void solve();
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);

   int t=1;
   cin>>t;
   for(int i=0; i<t; i++)
   {
      cerr<<"#Case "<<i+1<<"\n";
      solve();
      cout<<"\n";
      cerr<<"\n\n";
   }
   return 0;
}

void solve()
{
    int c;
    cin>>c;
    cout<<c*c;
}