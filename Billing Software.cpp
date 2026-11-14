#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	const int n = 100;
	string customerName;
	int volumeNo[n];
	int itemPrice[n];
	int quantity[n];
	int count = 0;
	bool choice;
	cout << setw(40) << setfill('=') << "\n";
	cout << setw(25) << setfill(' ') << "Al-Tayyaba Arts" << setw(25) << setfill(' ') << endl;
	cout << setw(40) << setfill('=') << "\n";
	cout << setw(20) << setfill(' ');
	cout << "Name:";
	cin >> customerName;
	cout << endl;

	while (count < n)
	{
		cout << "Volume No:  ";
		cin >> volumeNo[count]; 
	
		cout << "Quantity of Item:  ";
		cin >> quantity[count];

		cout << "Item Price:  ";
		cin >> itemPrice[count];

		count++;

		cout << "Enter the choice(1/0):  ";
		cin >> choice;

		cout << setw(40) << setfill('-')<<"\n";
		if (choice == 0)
		{
			break;
		}
	}
	cout << endl;
	cout << setw(40) << setfill('=') << "\n";
	cout << setw(20) << setfill(' ') << "Bill" << setw(25) << setfill(' ') << "\n";
	cout << setw(40) << setfill('=') << "\n";
	cout << "Quantity\t" << "Volume\t" << "Price\t" << "Total" << endl;
	cout << setw(40) << setfill('-') << "\n";

	int itemTotal = 0;
	int total = 0;
	for (int i = 0;i < count;i++)
	{
		itemTotal = quantity[i] * itemPrice[i];
		total += itemTotal;
		cout << quantity[i] << "\t\t" << volumeNo[i] << "\t" << itemPrice[i] << "\t" << itemTotal << "\t" << endl;
	}
	cout << setw(40) << setfill('-') << "\n";
	cout << "Grand Total" << setw(26) << setfill(' ') << total <<"\n";
	cout << setw(40) << setfill('=') << "\n";
	system("pause");
}