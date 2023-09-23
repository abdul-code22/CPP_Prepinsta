

#include <iostream>
using namespace std;
int fibonacci(int y){
	if (y <= 1) {
		return (y);
	}
	else
	return fibonacci(y-1) + fibonacci(y-2);
}
int main() {
	int n;
	cin >> n;
	cout << "fibonacci: ";
	for (int i = 0; i < n; i++)
	{
		cout << fibonacci(i) << " ";
	}
    return 0;
}