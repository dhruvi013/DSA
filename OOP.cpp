#include <bits/stdc++.h>
using namespace std;

class Teacher{
private:
    double salary;

public:
    // properties/ attributes
    string name;
    string dept;

    // constructor -> function with no return type
    // non-parameterized constructor
    Teacher(){
        // cout << "Hi, I am constructor" << endl;
        dept = "ICT"; // automatically sets depa as ICT for every object
    }

    // parameterized constructor
    // Teacher(string n, string d, double s){
    //     name = n;
    //     dept = d;
    //     salary = s;
    // }

    Teacher(string name, string dept, double salary){
        this->name = name;
        this->dept = dept;
        this->salary = salary;
    }

    // copy constructor
    Teacher(Teacher &orgObj){
        cout << "I am custom copy constructor" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->salary = orgObj.salary;
    }


    // methods/ member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    // setter -> set private values now we can access the salary (private)
    void setSalary(double s){
        salary = s;
    }

    // getter -> to get private values
    double getSalary(){
        return salary;
    }

    void getInfo(){
        cout << name << endl;
        cout << dept << endl;
        cout << salary;
    }
};

class Account{
private:
    string password;
    double balance; //data hiding

public:
    string username;
};

int main(){
    Teacher t1("Dhruvi", "ICT", 100000); // objects
    // Teacher t2; //automatically call constructor at time of object creation
    // Teacher t3;
    // t1.name = "Dhruvi";
    // t1.dept = "ICT";
    // t1.salary = 100000;  -> now we can not access this 
    // t1.setSalary(25000); // now we can access private attribute indirectly by setter

    // cout << t1.name << endl;
    // cout << t1.getSalary() << endl;
    // cout << t1.dept;
    t1.getInfo();
    cout << endl;
    Teacher t2(t1); // default copy constructor
    t2.getInfo();
}