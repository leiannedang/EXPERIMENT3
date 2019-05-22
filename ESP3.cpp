
/* Create a C++ program which prints the letters in a char array in reverse order and shows the size of the array. */
// By Lei-Ann Edang (Eng 1-12)

#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()

{
	char A[26];
	int i;

	cout << "Enter a string: ";
	cin.get (A, 26);
	
	cout << "Array Size: " << strlen(A) << endl;
	cout << "Reverse Order: ";
	
	for (i=strlen(A)-1; i>=0; i--)
	cout << A[i];
	
	_getch();
	return 0;
	
}
