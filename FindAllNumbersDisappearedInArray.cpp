#include<iostream>
#include<vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& arr) {
    int i=0;
    while(i<arr.size()){
        int correctIndex=arr[i]-1;
        if(arr[i]!=arr[correctIndex]){           
            swap(arr[i],arr[correctIndex]);
        }
        else{
            i++;
        }
    }
    for(auto x: arr){
        cout<<"*** "<<x<<" ***";
    }
    cout<<endl;
    
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=i+1){
            ans.push_back(i+1);
        }
    }
    return ans;
}
int main(){
    vector<int> v{4,3,2,7,8,2,3,1};
    for(auto x:findDisappearedNumbers(v)){
        cout<<x<<endl;
    }
    return 0;
}