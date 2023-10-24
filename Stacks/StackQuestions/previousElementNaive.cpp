#include <iostream>
using namespace std;

int main()
{
    int arr[] = {19, 27, 36, 54, 45, 36, 7};

    for (int i = 0; i < 7; i++)
    {
        bool flag = false;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[i])
            {
                cout << arr[j] << " ";
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << "- ";
    }
}