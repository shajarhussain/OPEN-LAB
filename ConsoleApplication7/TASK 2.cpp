#include<iostream>
using namespace std;
int main()
{
	int selection;
	cout << "If you want to find prime numbers in a given range enter (1)" << endl;
	cout << "If you wanmt to check if a specific number is prime enter (2)" << endl;
	cin >> selection;
	if (selection == 1)
	{
		int limit, cont = 0, n;
		cout << "Enter the range limit";
		cin >> limit;
		for (int i = 1; i <= limit; i++)
		{
			for (int j = 1; j < i; j++)
			{
				if (i % j == 0)
				{
					cont++;
				}
			}
			if (cont == 1)
			{
				cout << i << " ";
				cont = 0;
			}
			cont = 0;
		}
	}
	else if (selection == 2)
	{
		int number, cont = 0;
		cout << "Input the number: ";
		cin >> number;

		for (int i = 1; i < number; i++)
		{
			if (number % i == 0)
				cont++;
		}

		if (cont == 1)
			cout << "It is a prime number.";
		else
			cout << "It is not a prime number.";
	}
	else
		cout << "Enter valid number.";
}