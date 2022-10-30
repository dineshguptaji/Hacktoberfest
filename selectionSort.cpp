#include<bits/stdc++.h>
using namespace std;

// Selction Sort

int main(){
    int arr[]={2,5,91,2,0,-1};
    int n=6;

    for(int i=0;i<n-1;i++){
        int k=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[k]){
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }

    for(int i:arr){
        cout<<i<<" ";
    }
}

// Time Complexity-->O(n^2);
// Space Complexity-->O(1);
