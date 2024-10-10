#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main()
{
    // to read the file:
    ifstream fin;
    fin.open("input.txt");
    // read karo;
    char c;
    // to read excluding space:
    cin>>c;
    // to read the space as well:
    c=fin.get();
    while(!fin.eof())
    {
        cout<<c;
        c=fin.get();
    }
    fin.close();
    

    // to write the file:
    ofstream fout;//object creation:
    fout.open("input.txt");//if file not exists then it will create first then open
    //once opened now we can write:
    fout<<"hello anshu\n";
    fout.close();//closed the opened file:so that we can relaese the resources
}