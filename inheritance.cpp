#include <bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;

    // Person(){ // default

    // }

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){ //if we pass constructor then we don't need to write datatype we just pass value
        this->rollno = rollno; 
    } 

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "roll No : " << rollno << endl;
    }
};
int main(){
    Student s1("Dhruvi", 20, 21);
    // s1.name = "Dhruvi";
    // s1.age = 20;
    // s1.rollno = 29;
    s1.getInfo();
}