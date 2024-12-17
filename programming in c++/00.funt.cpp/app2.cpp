// C++ program to illustrate the pass by value 
#include <iostream> 
using namespace std; 

// function to swap variables 
void swap(int a, int b) 
{ 
	int temp = a; 
	a = b; 
	b = temp; 
} 
int main() 
{ 
	int x = 5; 
	int y = 10; 

	cout << "Before Swapping:\n"; 
	cout << "x = " << x << ", y = " << y << endl; 

	// Call the 'swap' function with pass-by-value 
	// parameters 
	swap(x, y); 

	// Print the values of 'x' and 'y' after the 
	// (ineffective) swap The values remain unchanged 
	// because the function works on copies. 
	cout << "After Swapping:\n"; 
	cout << "x = " << x << ", y = " << y << endl; 

	return 0; 
}