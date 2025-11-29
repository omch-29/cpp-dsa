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
//1]Encapsulation: wrapping up data and member functions(methods) in a single unit. It also implements data hiding.
//Constructor: Special method invoked automatically during object creation=> allocates memory., Destructor: deallocates memory(~dest, also auto)
//shallow copy : copies refernces to original array
//deep copy: creates new copy of array., compiler generally creates shallow copy.
//2]Inheritance : when properties and methods from parent class are passed to child class. class child : public parent, 3types: simgle, multi-level: p->c->c, multiple inher: myltiple parent, simgle child.
//3]Polymorphism : Ability of object to take different forms => abil to behave in diff ways depending upon context. for ex: two functions with same name 
//but different data type of params.
/*Funcn overloading: same name, different params type.
operator overloading : changing logic for operators.
funcn overriding : whne parent class and C class contain same funcn with diff implementn, P class f is overriden.
                funcn overloading     vs funcn overriding
compile type polymorphism         ||   run time polymorphism
single class has same funcn           P and C class ahve same .....*/
//Virtual function : member funcn that must be redifined in child class..
/*4]Abstraction: Hiding unnecesarry details showing only important.
Abstract class : only gives blurprint.
pure virtual function = abstract funcn with no logic i.e=0 */


int main(){
    // Student s1;
    // s1.setName("me");
    // cout<<s1.getName();
    Car c1("alto",120000);
    cout<<c1.getName()<<"\n";
    return 0;
}