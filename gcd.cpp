#include<bits/stdc++.h>
#include<cmath>
using namespace std;

// O(logn) Ecluids Theorem
int gcdOPTIMISED(int a,int b){

    while(a!=b){
        if(a>b)
            a-=b;
        if(b>a)
            b-=a;
    }
    return a; //or you can return b both are same
}

// Naive Solution

int gcd(int a,int b){
    
    int result=min(a,b);
    while(result>0){
        if (result%a==0 && result%b==0)
            return result;
        result--;
    }
    return result;
}