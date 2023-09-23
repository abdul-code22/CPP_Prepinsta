#include <iostream>
using namespace std;

int printArray(array, size, i);

int main ()
{
    int array[] = { 0, 1, 2, 3};
    int i = 0;
    int size = sizeof(array)/sizeof(array[0]);
    printArray(array, size, i);
}