#include<iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Default of Base"<<endl;
        }
        Base(int x){
            cout<<"Param of base"<<x<<endl;
        }
};
class Derived:public Base{
    public:
        Derived(){
            cout<<"Default of Derived"<<endl;
        }
        Derived(int a){
            cout<<"Param of Derived"<<a<<endl;
        }
        Derived(int x,int a):Base(x){
            cout<<"Param Derived Special"<<a;
        }
};
int main(){

    Derived d(4,6);
    return 0;
}