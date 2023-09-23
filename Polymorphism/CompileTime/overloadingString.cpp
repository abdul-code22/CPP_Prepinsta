#include<iostream>
#include<string.h>
using namespace std;

//uniary overloading of a operator also we need to create a special funtion for the role of operator
class stringOverloading{
    public:
    char string1[20], string2[20];
    //no c++ library exist so we define the function
    //we can also customize this function
    void operator +(){
        cout << "After concatenating: " << strcat(string1, string2) << endl;
    }
};

int main()
{
    stringOverloading o1;
    cout << "Before overloading" << endl;
    strcpy(o1.string1, "string");
    strcpy(o1.string2, "Overloading");
    +o1;
   
    cout << "After overloading" << endl;
    
}