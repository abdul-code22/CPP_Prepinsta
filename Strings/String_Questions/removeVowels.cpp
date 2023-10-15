#include <bits/stdc++.h>
using namespace std;

string remVowel(string str)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < str.length(); i++)
    {
        if (find(vowels.begin(), vowels.end(), str[i]) != vowels.end())
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return str;
}

int main()
{
    string st = "Prepinsta";
    cout << remVowel(st) << endl;
    return 0;
}

// basic implementation
/*int main ()
{
    string st  = "Prepinsta";
    int len  = st.length();

    for (int i = 0; i < len; i++)
    {
        if (st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U' || st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
        {
            for (int j = i; j < len; j++)
            {
                st[j] = st[j+1];
            }
            i--;
            len--;
        }

    }
    cout << st << endl;

}*/