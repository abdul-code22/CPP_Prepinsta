// write the program to print the nth terms of the fibonacci sequence
#include <iostream>
using namespace std;
class fibonaci
{
public:
    fibonaci(int num)
    {
        int a = 0, b = 1, t, j;

        cin >> num; // overloading
        cout << "the fibonacci series is :" << a << " " << b << " ";
        for (j = 2; j < num; j++)
        {
            t = a + b;
            cout << t << " ";
            a = b;
            b = t;
        }
        cout << "\n";
    }
};
int main()
{
    fibonaci obj(5);
    return 0;
}