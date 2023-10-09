#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name = "123321";
    int len = name.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
       if (name[i] != name[len - i - 1])
       count = 1;
       break;
    }

    if (count == 0){
        cout <<"Palindrome" << endl;
    }
    else
    {
        cout << "not Palindrome" << endl;
    }
    
    
    
    
}