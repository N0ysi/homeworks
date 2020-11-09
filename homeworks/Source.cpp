#include <iostream>

using namespace std;

template <typename T>void printArray(T* arr, size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << ' ';
	}
}

int main()
{
	const size_t SIZE = 10;
	int arr[SIZE] { 1,2,3,4,5,6,7,8,9,10 };

	printArray(arr, SIZE);

	system("pause > nul");
}