#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> myMap;
    myMap.insert(pair<string, int>("apple", 3));//method 1
    myMap.insert(make_pair("banana", 2));//method 2
    myMap.insert({"orange", 1});//method 3

    cout<< "Size of the Map is " << myMap.size() << endl;
    map<string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); ++it)
    {
        cout << it->first << " => " << it->second << endl;
    }

    // myMap.find("apple");
    return 0;
}