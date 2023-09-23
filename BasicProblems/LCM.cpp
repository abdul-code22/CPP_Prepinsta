#include <iostream>
using namespace std;
//Method 1 and 2 for LCM
//also LCM = (m*n)/HCF formula
/*int main()
{
    int m,n,LCM;
    cin >> m >> n;
    int max = m>n?m:n;
    for (int i = max; i < m*n; i+=max /*i++ bhi kar sakte the but faltu iterartion hoge, multiple of max_value interval//)
    {
       if (i%m==0 && i%n==0)
       {
            LCM = i;
            break;
       }
       
    }
    cout << LCM << endl;
    return 0;
}*/

//Method 3 without the use of i iterartion basically without for loop, instead we use while loop with max as the interation value

int main ()
{
    int m,n,max,LCM;
    cin>>m >> n;
    max = m?m:n;
    while (true)
    {
        if (max%m == 0 && max%n == 0)
        {
            LCM = max;
            break;
        }
        max++;
    }
    cout << LCM << endl;
}