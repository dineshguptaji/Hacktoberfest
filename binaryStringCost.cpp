#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
      int n,x,y;
      cin>>n>>x>>y;
      string s;
      cin>>s;
      sort(s.begin(),s.end());
      if(s[0]==s[n-1]) {cout<<0<<endl; continue;}
      if(x<y)
      {
        cout<<x<<endl; continue;
      }
      else { cout<<y<<endl;; continue;}
    }
    return 0;
}