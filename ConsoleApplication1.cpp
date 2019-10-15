#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int x;
	char select;



	do
	{
	
		cout << "enter an integer\n";
		cin >> x;

		if (x % 2 == 0)
		{
			cout << x << "is even\n";
			cout << "do you want to enter again? (y,Y/n)\n";
			cin >> select;
		}

		else
		{
			cout << x << "is odd\n";
			cout << "do you want to enter again? (y,Y/n)\n";
			cin >> select;
		}


	}while (select == 'y' || select == 'Y');

		cout << " Thank you\n";


	



}
