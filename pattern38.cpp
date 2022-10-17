/*
5
54
543
5432
54321
*/


#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<6-j;
        }
        printf("\n");
    }

    return 0;
}