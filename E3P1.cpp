
/*  Create a C++ program to show the smallest and largest integer, the total, and the average of an array that take 10 elements only. */
// By Lei-Ann Edang (Eng 1-12)

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	
	int A[10], Total = 0, H, L, i;
	double Ave;
	
	cout << "Enter 10 integers: ";
	
	for (i=0; i < 10; i++)
	
	{
		cin >> A[i];
		Total += A[i];
	}
	
	Ave = Total/10.0;
	cout << "Total is " << Total << endl;
	cout << "Average is " << Ave << endl;
	
	H = A[0]; 
	L = A[0];
	
	for (i=1; i < 10; i++)
	
	{
	
		if (A[i] >= H)
		H = A[i];
		
		if (A[i] <= L)
		L = A[i];
	}
	
	cout << "Highest Element is " << H << endl;
	cout << "Lowest Element is " << L << endl;
	
	_getch();
	return 0;
}
