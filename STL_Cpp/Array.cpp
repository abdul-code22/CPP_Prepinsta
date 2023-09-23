#include <iostream>
#include <array>

using namespace std;
int main()
{

    array<int, 5> arr; // array stl

    cout << "Input:" <<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout << "Output:" <<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout << arr.size() << endl;
    cout << arr.front() << endl;

    return 0;
}