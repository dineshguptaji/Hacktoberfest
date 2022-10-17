#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int sum=0;
    while(sum>=0){
        int n;
        cin>>n;
        sum+=n;
        if(sum<0){
            break;
        }
        v.push_back(n);
        
    }
    for(auto x:v){
        cout<<x<<endl;
    }
    return 0;
}