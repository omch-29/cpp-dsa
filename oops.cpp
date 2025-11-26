//OBJECT ORIENTED PROGRAMMING
//Class : blueprint of objects
//Objects : instances of class
//Getters ans Setters : used to perform operations on private members.
#include <iostream>
#include <vector>
#include<cstring>
#include <climits>
using namespace std;

class Student {
public:
    string name;
    float cgpa;

    void getpec(){
        cout<< cgpa*10<<"%"<<endl;
    }
};
int main(){
    Student s1;
    s1.name="me";
    s1.cgpa=9.2;
    s1.getpec();
    cout<<s1.name<<endl;
    return 0;
}