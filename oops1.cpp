#include <bits/stdc++.h>
using namespace std;
// #include "Hero.cpp"
class Hero{
// // private:
// // 	int health;
// public:

// //constructor
      
//       int health;
	  
//       char level;
// // double salary;
// Hero()
// {
//       cout<<"simple constructor";
// }

// //  Hero(int age)
// //       {
// //             cout<<this<<endl;
           
// // this->age = age;
// //       }
// // int getAge()
// // {
// // 	return age;
// // }
// // void setAge(int h)
// // {
// // 	age = h;
// // }
public:


      int x; 
     const int y;
      int &z;
      Hero(int a,int  b, int c):x(a),y(b),z(c)
      {
           
      }
//        int health;
// char level;
// char *name;
//  static int timeToComlete;



//  int random() const
//  {
//       return timeToComlete+5;
//  }
//     //constructor
//       Hero()
//       {
//             // name = new char[100];
//             cout<<"simple constructor";
//       }

//       ~Hero()
//       {
//             cout<<"distructor";
//       }
//       // Hero(int health,char level){
//       //       this->health = health;
//       //       this->level=level;
//       // }

//       // //copy constructor
//       Hero(Hero& temp)
//       {

//             char *ch= new char[strlen(temp.name)+1];
//          strcpy(ch,temp.name);
//             this->name = ch;
//             cout<<"copy constructor";
//             this->health = temp.health;
//             this->level= temp.level;
//       }   


//    void setHealth(int health)
//    {

//       this->health = health;
   
//    }  
//    void setLevel(char level)
//    {
//       this->level=level;
//    }  
//    void setName(char name[])
//    {
// strcpy(this->name,name);
//    }


//       void print()
//       {
//             cout<<health<<endl;
//             cout<<level<<endl;
//             cout<<name<<endl;
//             cout<<endl;
//       }
     
};

// int Hero::timeToComlete = 5;  

int main()
{


Hero we(2,3,4);
cout<<we.x;






// const Hero a;
// a.setHealth(10);
// cout<<a.health;


//   const  float a = 5;
// a = a;
//   cout<<a;

// Hero a;
// cout<<a.random();
      // Hero a ;
      // cout<<a.timeToComlete;

      // cout<<Hero::timeToComlete;

//static
// Hero a;

// Hero *b = new Hero();
// delete b; 
// // Hero hero1;
// hero1.setHealth(12);
// hero1.setLevel('d');
// char name[7]="ajay";
// hero1.setName(name);
// // hero1.print();


// Hero hero2(hero1);
// // hero2.print();

// hero1.name[0] ='v';
// // hero1.print();

// // hero2.print();

// hero1 = hero2;
// hero1.print();

// hero2.print();


// Hero ramesh(70,'r');
// ramesh.print();

// Hero suresh(ramesh);
// suresh.print();


// // cout<<"33"<<endl;
// Hero a(10);
// // cout<<"35"<<endl;

// // cout<<a.age;
// cout<<&a;


// //static allocation 
//  Hero a; 
// a.age = 10;
// cout<<a.age;
//  //dynamically allocation
//  Hero *b = new Hero;
//     // *b.age = 70;
//  // ramesh.health = 70;
//  // ramesh.setHealth(70);
//  // ramesh.level = 23;
//  // // cout<<ramesh.health<<endl;
//  // cout<<ramesh.getHealth()<<endl;
//  // cout<<ramesh.level<<endl;
//  // cout<<sizeof(ramesh.level)<<endl;
//  // cout<<sizeof(ramesh.health)<<endl;
// // cout<<(*b).salary;
// // cout<<b->salary;
//  b->setAge(21);
//  cout<<b->getAge();
 
 return 0;

}




