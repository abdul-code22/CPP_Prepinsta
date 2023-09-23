// Write a C++ program to define an abstract class in polymorphism by declaring a virtual function in the
// base class and a different version in the derived class.

#include <bits/stdc++.h>
using namespace std;

class Post // An abstract class
{
protected:
    char Name[30];

public:
    virtual void wishes() = 0; // A pure virtual function
};

class Holiday : public Post
{
public:
    Holiday(char r[])
    {
        strcpy(Name, r);
    }
    void wishes() // implementation of function in sub class
    {
        cout << "Dear " << Name << endl;
        cout << "Season's Greetings!\n\n";
    }
};

class Birthday : public Post
{
private:
    int age;

public:
    Birthday(char r[], int years)
    {
        strcpy(Name, r);
        age = years;
    }
    void wishes() // Implementation of function in sub class
    {
        cout << "Dear " << Name << ",\n";
        cout << "Happy " << age << "th"
             << " Birthday\n\n";
    }
};

class Diwali : public Post
{
private:
    int colors;

public:
    Diwali(char r[], int c)
    {
        strcpy(Name, r);
        colors = c;
    }
    void wishes() // Implementation of function in subclass
    {
        cout << "Dear " << Name << ",\n";
        cout << " Happy Diwali and lots of lights in your life\n";
        for (int j = 0; j < colors; j++)
            cout << "*";
        cout << "\n\n";
    }
};

int main()
{
    Holiday Diwa("Codez");
    Diwa.wishes();
    Birthday bd("CodezClub", 24);
    bd.wishes();
    Diwali Diwali("Max", 8);
    Diwali.wishes();
    return 0;
}