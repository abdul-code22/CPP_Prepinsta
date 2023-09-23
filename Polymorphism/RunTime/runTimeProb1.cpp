// Write a C++ program in Oops that uses three display(void) functions
// from one base class and two derived classes to demonstrate run-time polymorphism.
#include <iostream>
using namespace std;

class C // Base class
{
public:
    virtual void Display(void) // virtual function
    {
        cout << "\n The member function Display( ) ";
        cout << "of the \"Base Class C\" is invoked \n";
    }
};

class E1 : public C // First derived class
{
public:
    void Display(void)
    {
        cout << "\n The member function Display( ) ";
        cout << "of the \"Derived Class E1\" is invoked \n";
    }
};

class E2 : public C // Second derived class
{
public:
    void Display(void)
    {
        cout << "\n The member function Display( ) ";
        cout << "of the \"Derived Class E2\" is invoked ";
    }
};
int main()
{
    C *base_ptr; // Pointer to the object of the base class

    E1 der1_obj; // Object of the first derived class E1

    base_ptr = &der1_obj;

    /* The address of the object der1_obj of the
    first derived class E1 is assigned to the
    pointer base_ptr of the base class C     */

    base_ptr->Display(); // Accessing the member function Display( )

    E2 der2_obj; // Object of the second derived class E2

    base_ptr = &der2_obj;

    /* The address of the object der2_obj of the
    second derived class E2  is assigned to the
    pointer base_ptr of the base class C */

    base_ptr->Display(); // Accessing the member function Display( )

    return 0;
}