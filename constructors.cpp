#include <bits/stdc++.h>
using namespace std;

class fruits
{
private:
    int quant;
    string color;

public:
    string type;
    fruits()
    {
        quant = 5;
        color = "red";
        type = "fresh";
    }
    fruits(int amount, string c, string t)
    {
        this->quant = amount;
        this->color = c;
        this->type = t;
    }
    inline fruits(int a, string c, string t, int pika)
        : quant(a), color(c), type(t) {}

    fruits(fruits &A)
    {
        quant = A.quant;
        color = A.color;
        type = A.type;
    }

    // destructor
    ~fruits()
    {
        // it not delete the object but
        // basically release the dynamically allocate dmemory locations
        // closed the files which we may had openn earlier
    }

    void display()
    {
        cout << quant << " " << color << " " << type << endl;
    }
};

int main()
{
    fruits apple(10, "red", "fresh");
    fruits mango;
    apple.display();
    mango.display();
    cout << apple.type << endl;

    // copying constructor:
    fruits nashpati(apple);
    // or
    fruits banana;
    banana = nashpati;


    // destructor:
    // if we create dynamic objects we have to separately called delete for them
    fruits*peak=new fruits;
    delete peak;
}
