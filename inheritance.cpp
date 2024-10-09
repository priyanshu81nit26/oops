#include <bits/stdc++.h>
using namespace std;

class parent {
public:
    int roll;
    string name;
    string lastname;
};

class student {
private:
    string aadhar;
    string regno;

protected:
    int classno;
    char section;

public:
    int rollno;
    string name;
    string lastname;

    student(string ad, string r, int roll, string n, string ln, int cn, char sec)
        : aadhar(ad), regno(r), rollno(roll), name(n), lastname(ln), classno(cn), section(sec) {}
};

class details : public student {
public:
    details(string ad, string r, int roll, string n, string ln, int cn, char sec)
        : student(ad, r, roll, n, ln, cn, sec) {}

    void display() {
        cout << rollno << " " << name << " " << lastname << " " << section << endl;
    }
};

int main() {
    details d("1abc23", "22bcs081", 81, "priyanshu", "sharma", 10, 'A');
    d.display();
}
