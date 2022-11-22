// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Classes and objects in c++
//f9 shortcut key to run
#include <iostream>

#include<string>
using namespace std;

int main()
{
	const int n = 6;
	int array[n] = { 12,15,6,35,8,27 };

	int start = 0;
	int end = n - 1;
	while (start < end) {
		swap(array[start], array[end]);
		start++;
		end--;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "array index  " << i << " value is : " << array[i] << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
