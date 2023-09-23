#include<iostream>
using namespace std;

class Demo{
    public:
    int i ;
    float f;
    Demo(int val, float val2){
        i = val;
        f = val2;
    }
};

int main()
{ //parameter constructor
    Demo d(1000, 5.0);
    Demo d2(2000, 6.0);
    cout << d.i << " & " << d.f << endl;
    cout << d2.i << " & " << d2.f << endl;
    


}