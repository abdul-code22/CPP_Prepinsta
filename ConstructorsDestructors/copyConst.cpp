#include <iostream>
using namespace std;

class copyCons{
    private:
    int x,y;

    public:

    //conpiler does not create its own copy constructor, or default constructor

    //default constructor
    copyCons(){
        cout << "Default constructor called" << endl;
    }

    copyCons(int x1,int y1){
        x= x1;y = y1;

        cout << "Paramterized Constructor Called "<< endl;
    }

    //copy constructor
    copyCons(const copyCons &p1){
        x=p1.x;
        y=p1.y;

        cout << "Copy constructor called "<< endl;
    }

    int getX(){
    return x;
    }
    int getY(){
        return y;
    }
};

int main()
{
    copyCons p1(10,20);

    copyCons p2(p1);//passing the object to copy constructor
    //same as above
    copyCons p3 = p1;

    copyCons p4;
    p4 = p1; //this will not call copy constructor

    cout << "p1.x = "<< p1.getX() <<", p1.y = "<< p1.getY() << endl;
    cout << "p2.x = "<< p2.getX() <<", p2.y = "<< p2.getY() << endl;
    cout << "p3.x = "<< p3.getX() <<", p3.y = "<< p3.getY() << endl;
    cout << "p4.x = "<< p4.getX() <<", p4.y = "<< p4.getY() << endl;
    return 0;
}