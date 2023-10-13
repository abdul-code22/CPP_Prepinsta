#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1.compare(s2) == 0){
        cout << "Anagrams" << endl;
    }
    else
    cout << "Not Anagrams" << endl;

}