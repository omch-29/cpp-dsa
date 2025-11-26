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
    string name;
    float cgpa;
public:

    void getpec(){
        cout<< cgpa*10<<"%"<<endl;
    }
    void setName(string nameval){
        name=nameval;
    }
    string getName(){
        return name;
    }
};
int main(){
    Student s1;
    s1.setName("me");
    cout<<s1.getName();
    return 0;
}