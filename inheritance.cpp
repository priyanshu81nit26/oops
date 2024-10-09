#include<bits/stdc++.h>
using namespace std;

// dynamic memory allocation:
class parent{
    public:
    int roll;
    string name;
    string lastname;

};

int main()
{
    parent*p=new parent;
    (*p).name="priyanshu";
    p->lastname="sharma";
    p->roll=81;

    cout<<p->name<<" "<<p->lastname<<" "<<p->roll<<endl;

}