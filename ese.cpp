#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int x = 0,y=0, a;

	a = ++x + ++y + ++x + ++y;
	cout << "Pre Increment Operation";

	// Value of a will change
	cout << "\na = " << a;

	// Value of x change before execution of a=++x;
	cout << "\nx = " << x;
	cout << "\ny = " << y;

	return 0;
}