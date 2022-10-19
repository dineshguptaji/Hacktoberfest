#include<bits/stdc++.h>
using namespace std;


int minimumStepsToOne(int n,vector<int> dp){
    if(n==1||n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int n1=INT_MAX,n2=INT_MAX,n3=INT_MAX;

    if(n%3==0){
        n3=minimumStepsToOne(n/3,dp)+1;
    }
    if(n%2==0){
        n2=minimumStepsToOne(n/2,dp)+1;
    }
    
    n1=minimumStepsToOne(n-1,dp)+1;
    

    int result=min(min(n1,n2),n3);
    dp[n]=result;
    return dp[n];
}



int main(){
    int n;
    cin>>n;

    vector<int> dp(n+1,-1);

    cout<<minimumStepsToOne(n,dp);

    return 0;

}