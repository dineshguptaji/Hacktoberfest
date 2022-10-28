#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& arr){

    int i=0;
    while(i<arr.size()){
        if(arr[i]!=i && arr[i]<arr.size()){           
            int temp=arr[arr[i]];
            arr[arr[i]]=arr[i];
            arr[i]=temp;
        }
        else{
            i++;
        }
    }
    int ans;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=i){
            ans=i;
        }
    }
    return ans;

}

int main(){

    vector<int> v{3,0,1};

    cout<<missingNumber(v)<<endl;
    return 0;
}