#include <iostream>
#include<ctime>
using namespace std;

void main()
{
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	bool already;

	for (int i = 0; i < SIZE; )
	{
		already = false;
		int newValue = rand() % 10;

		for (int j = 0; j < i; j++) //��������� �������� �����
		{
			if (arr[j] == newValue) 
			{
				already = true;
				break;
			}
		}

		if (!already)
		{
			arr[i] = newValue; //��������� ����� �������
			i++; //��������� �� ��������� ������
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << "\n\n";
}