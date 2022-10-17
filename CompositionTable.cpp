#include<iostream>
using namespace std;
int main(){

    int numberOfElement;
    cout<<"Enter Number of element for input ";
    cin>>numberOfElement;
    int input[numberOfElement];

    for( int i=0;i<numberOfElement;i++){
        int n;
        cout<< "Enter number ";
        cin>>n;
        input[i]=n;

    }
    char operation;
    cout<<"Enter operation ";
    cin>>operation;

    int modulo;
    cout<<"Enter number for which you want to take modulus ";
    cin>>modulo;

    for(int x :input){
        for(int y: input){
            switch(operation){
                case '+':
                    cout<<(x+y)%modulo<<" ";
                    break;
                case '-':
                    cout<<(x-y)%modulo<<" ";
                    break;
                case '*':
                    cout<<(x*y)%modulo<<" ";
                    break;
                case '/':
                    cout<<(x/y)%modulo<<" ";
                    break;
            }
            
        }
        cout<<endl;
    }


    return 0;
}