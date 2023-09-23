#include<iostream>
using namespace std;

class FunOver{

    int x, y, z;
    public:
    void sum(int a, int b){
        x = a; y = b;
        cout << "The sum is " << x + y << endl;
    }

    void sum(int a, int b, int c){
        x = a; y = b; z = c;
        cout << "The sum is " << x + y + z << endl;
    }

};

int main()
{
    FunOver f1;
    f1.sum(5 , 2);
    f1.sum(5 , 2, 3);
}