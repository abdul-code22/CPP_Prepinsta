#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string s1 = "Prep";
    string s2 = s1.substr(1, s1.length());
    //s1.append(s1);
    //s1.append(s2);
    
    //s1 = s1 + " " + s2; //s2.append

    // cout << s1<<" " <<endl;
    // cout << s2<<" " <<endl;
    cout <<s1.find("Pr");

}