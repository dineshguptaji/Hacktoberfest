/*
1  
2	2  
3	0	3    
4	0	0	4  
5	0	0	0	5
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<i;
            }
            else
                cout<<0;
        }
        cout<<endl;
    }
}