#include <iostream>
using namespace std;

class conversion
{
    int x, y;

public:
    void display()
    {
        cout << "the value are " << x << ", " << y << endl;
    }
    // at the time of parameterrized constructor definition, I am initializing one of the values
    conversion(int a, int b = 0)
    {
        x = a;
        y = b;
    }
};
// constructor overloading

int main()
{ // basic parameterizated constructor with one papameter parameter
    conversion muobj(10);
    muobj.display();

    // implicit calling using assignment operator

    // conversion constructor
    muobj = 100; // we able to call the papameterized constructor
    muobj.display();
    return 0;
}