
/* Create a C++ Program that store temperature of Province A, Province B and Province C for a week (seven days) and display it. */
// By Lei-Ann Edang (Eng 1-12)

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	
	int TempA[7], TempB[7], TempC[7], i;
	
	cout << "Enter temperature for Province A: \n";
	
	for (i=0; i < 7; i++)
	{
	cout << "Province A, Day " << i+1 << ":";
	cin >> TempA[i];	
	}
	
	cout << endl;
	cout << "Enter temperature for Province B: \n";
	
	for (i=0; i < 7; i++)
	{
	cout << "Province B, Day " << i+1 << ":";
	cin >> TempB[i];	
	}
	
	cout << endl;
	cout << "Enter temperature for Province C: \n";
	
	for (i=0; i < 7; i++)
	{
	cout << "Province C, Day " << i+1 << ":";
	cin >> TempC[i];	
	}

	cout << endl << endl;
	cout << "Recorded Temperature for a week of Province A: \n";
	for (i=0; i < 7; i++)
	cout<< "Province A, Day " << i+1<< " = " << TempA[i] << endl;
	
	cout << endl;
	cout << "Recorded Temperature for a week of Province B: \n";
	for (i=0; i < 7; i++)
	cout<< "Province B, Day " << i+1<< " = " << TempB[i] << endl;
	
	cout << endl;
	cout << "Recorded Temperature for a week of Province C: \n";
	for (i=0; i < 7; i++)
	cout<< "Province C, Day " << i+1<< " = " << TempC[i] << endl;
	
	
	_getch();
	return 0;
}
