#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> list;
    list.push_front(1);
    list.push_front(51);//pushing the values in the list
    list.push_front(8);
    list.push_front(7);
    forward_list<int>::iterator itr; //creating a iterator
    for (itr = list.begin(); itr != list.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    list.pop_front();
    cout << "After popping front " << endl;

    for (itr = list.begin(); itr != list.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
    list.emplace_front(50);
    cout << endl;
    cout << "After emplace " << endl;
    for (itr = list.begin(); itr != list.end(); ++itr)
    {
        cout << *itr << " ";
    }
    return 0;
}