#include <bits/stdc++.h>
using namespace std;

class student
{
    // we cannot access private properties:
private:
    string name;
    string lastname;
    int rollno;
    char grade;
    string reg_no;
    // these all are called attributes:

public:
            // setter function :
    void set(string namefirst, string namelast, int roll, char g, string reg)
    {
        if (namefirst.size() == 0 || namelast.size() == 0 || roll == 0 || reg.size() == 0)
            return;
        name = namefirst;
        lastname = namelast;
        rollno = roll;
        grade = g;
        reg_no = reg;
    }
    // getter function
    void display()
    {
        cout << name << " " << lastname << " " << rollno << endl;
    }
    // getter function :
    void geter(int pin)
    {
        if(pin==134)
        {
            cout<<reg_no<<" "<<grade<<" "<<endl;
        }
       
    }
    // these all are methods or functions:
};

int main()
{
    student s1;
    s1.set("priyanshu", "sharma", 81,'a',"22bcs081");
    s1.display();
    s1.geter(134);

   
}