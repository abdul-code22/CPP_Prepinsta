#include <iostream>
#include <cmath>
using namespace std;
int order(int n)
{
    int len = 0;
    while (n!=0) {
    {
        len++;
        n /= 10;
    }    
    }
    return len;
}

int arm(int n, int len){
    int armNum = 0, remainder = 0, temp = n;
     while (temp!=0)
    {
        remainder = (temp % 10);
        remainder *= pow(remainder,len-1);
        armNum = armNum + remainder;
        temp /= 10;
        cout<< "inside funtion " << armNum<<endl;
    }
    return armNum;
}
int main ()
{
    int n, len;
    cin>>n;

    len = order(n);
    cout<< "After funtion " << arm(n, len)<<endl;
    if(arm(n, len)==n)
    cout<<"Armstrong"<<endl;
    else
    cout <<"NOT Armstrong"<<endl;
}
/*{
    int n, len=0;
    cin>>n;
    int temp = n;
    int armNum = 0, remainder = 0;

    //calulate the digits in the number
    while (temp!=0)
    {
        len++;
        temp /= 10;
    }
    temp = n;
    //calculate the resultant sum of the digits
    while (temp!=0)
    {
        remainder = (temp % 10);
        remainder *= pow(remainder,len-1);
        armNum = armNum + remainder;
        temp /= 10;
    }
    //checks for armstrong numbers
    cout << armNum << endl;
    if (armNum == n)
    {
        cout << "Armstrong Number" << endl;
    }
    else
        cout << "NOT Armstrong Number" << endl;
    
}*/