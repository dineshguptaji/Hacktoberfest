#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l,int b);
        Rectangle(Rectangle &r);
        void setLength(int l);
        void setBreadth(int b);
        int getLength(){return length;} //Inline function
        int getBreadth(){return breadth;}//Inline Function
        int area();
        int perimeter();
        bool isSquare();
        ~Rectangle();
};

Rectangle::Rectangle(){
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l,int b){
    length=l>0?l:1;
    breadth=b>0?b:1;
}
void Rectangle::setLength(int l){
    length=l>0?l:1;
}
void Rectangle::setBreadth(int b){
    breadth=b>0?b:1;
}
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length*breadth);
}
bool Rectangle::isSquare(){
    return length==breadth;
}
Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed";
}

int main(){

    Rectangle r(2,2);
    if(r.isSquare()){
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;

    cout<<r.area()<<endl;

    return 0;
}