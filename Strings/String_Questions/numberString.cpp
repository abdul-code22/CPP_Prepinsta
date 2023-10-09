#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "2365";
    sort(s1.begin(), s1.end());
    reverse(s1.begin(), s1.end());
    cout << s1 << endl;
    cout << endl;

    //length of the string
    string s2 = "Abdul Fazal";
    cout<< s2.length();
    cout << endl;
    int count = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        count++;
    }
    cout<< count << endl;
    cout<< s2.size();
}