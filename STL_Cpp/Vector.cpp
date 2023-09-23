#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v1;
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    cout << "before pop"<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] <<" ";
    }
    cout << endl;
    cout << "after pop"<<endl;
    v1.pop_back();
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] <<" ";
    }
    
    return 0;
}