#include<iostream>
using namespace std;

pair<int, int> matrixSearch(int arr[][10] ,int x, int y, int key){
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (arr[i][j] == key)
            {
                return make_pair(i, j);
            }
            
        }
        
    }
    return make_pair(-1, -1);
    
}

int main ()
{   int r, c ,key;
    cin>>r>>c;
    int arr[10][10];
    cout << "Matrix: "<< endl;

    //input matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }   
    }
    cout << "Key:" << endl;
    cin>>key;

    //funtion call for matrix
    pair<int, int> p = matrixSearch(arr, r, c, key);
    cout << p.first <<" " << p.second << endl;

    return 0;
}