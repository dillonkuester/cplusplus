#include <iostream>
#include <conio.h>

using namespace std;

//passing pointers
double FindAvg(int iArr[], int size)
//or double FindAvg(int iArr[], int size) //both work

//he wont ask us to pass pointers 2d arrays

{
	int total = 0;

	for (int i = 0; i < size; i++)
	{
		total += iArr[i];
	}
	return total / (double)size;

}

int main()
{

	cout << "enter 5 integers: " << endl;
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	cout << "The avg is: " << FindAvg(arr, 5);
	cout << endl << "----------------" << endl;

	int arr2d[][4] =
	{
		{ 23, 34, 54, 65 },
		{ 12, 2, 23, 53 }
	};

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr2d[y][x];
			if (x < 3) cout << ", ";
		}

		cout << endl;
	}

	//hard code 2 arrays in, array 1, array2, store the sum in the 3rd array.
	//all will be smae size of 2 x 3
	//the sum of each component will 
	//put commas or spaces

	_getch();
	return 0;
}