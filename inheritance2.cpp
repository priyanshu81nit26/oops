#include <bits/stdc++.h>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "i am working" << endl;
    }
};

// inherited class:
class student : public Human
{
    // name and age are inherited as protected
    int roll;
    int fees;

public:
    student(string name, int age, int roll, int fees) : Human(name, age)
    {

        this->fees = fees;
        this->roll = roll;
    }
};

int main()
{
    student s1("priyanshu", 20, 81, 5000);
    s1.display();
}