#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int check = n;
    int reverse = 0, remainder = 0;

    while (n!=0)
    {
        remainder = n % 10;
        reverse = reverse*10 + remainder;
        n /= 10;
    }
    cout << reverse << endl;
    // cout << n << endl;

    if (reverse==check)
    {
        cout<<"Palindrome";
    }
    else
    cout << "NOT palindrome";
}

// My method 
/*#include <bits/stdc++.h>
using namespace std;  
int main() {  
  int k;  
  cout<<"Enter an integer value";  
  cin>>k;  
  stringstream ss;  
  ss<<k;  
  string s;  
  ss>>s;  
  cout<<"\n"<<"An integer value is : "<<k<<"\n";  
  cout<<"String representation of an integer value is : "<<s<<endl;   
  

    string str = "geeksforgeeks";
 
    // Reverse str[begin..end]
    reverse(s.begin(), s.end());
 
    cout << s;
    return 0;

} */