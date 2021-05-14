#include <iostream>
#include<ctime>
using namespace std;

void main()
{
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	bool check;

	for (int i = 0; i < SIZE; )
	{
		check = false;
		int newValue = rand() % 10;

		for (int j = 0; j < i; j++) 
		{
			if (arr[j] == newValue) //проверяет дубликат числа
			{
				check = true;
				break;
			}
		}

		if (!check)
		{
			arr[i] = newValue; //добавляем новый элемент
			i++; //переходим на следующую ячейку
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << "\n\n";
}