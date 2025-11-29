//OBJECT ORIENTED PROGRAMMING
//Class : blueprint of objects
//Objects : instances of class
//Getters ans Setters : used to perform operations on private members.
#include <iostream>
#include <vector>
#include<cstring>
#include <climits>
using namespace std;

// class Student {
//     string name;
//     float cgpa;
// public:

//     void getpec(){
//         cout<< cgpa*10<<"%"<<endl;
//     }
//     void setName(string nameval){
//         name=nameval;
//     }
//     string getName(){
//         return name;
//     }
// };
class Car {
    string name;
    float price;
public:
    Car(){
        cout<<"constructor called\n";
    }
    Car( string nameval, float priceval){
        cout<<"constructor called\n";
        name=nameval;
        price=price;
    }
    string getName(){
        return name;
    }
    ~Car(){
        cout<<"ended\n";
    }
};
//Encapsulation: wrapping up data and member functions(methods) in a single unit. It also implements data hiding.
//Constructor: Special method invoked automatically during object creation.
int main(){
    // Student s1;
    // s1.setName("me");
    // cout<<s1.getName();
    Car c1("alto",120000);
    cout<<c1.getName()<<"\n";
    return 0;
}