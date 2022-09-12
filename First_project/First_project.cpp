// First_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void main()
{
	/*int a = 10;
	cout << a << endl;

	cout << "Hello world!" << endl;*/


	//HW #1
	//int Var, Var2;
	//cout << "Write two numbers" << endl;
	//cin >> Var >> Var2;
	//cout << "Sum of numbers = "<< Var + Var2 << endl;
	//cout << "Product of numbers = " << Var * Var2 << endl;
	//cout << "Average number = " << (double)(Var + Var2)/2 << endl;

	//HW #2
	//int myNumber;
	//cout << "Write a number" << endl;
	//cin >> myNumber;
	//if (myNumber % 2 == 0)
	//{
	//	cout << "Your number is even" << endl;
	//}
	//else
	//{
	//	cout << "Your number is odd" << endl;
	//}




	//HW #3 simple calculator
	//int Var, Var2;
	//int res;
	//cout << "Write two numbers" << endl;
	//cin >> Var >> Var2;
	//cout << "Choos option : \n1 = Add \n2 = Subtraction \n3 = Multiplication \n4 = Division" << endl;
	//cin >> res;
	//switch (res)
	//{
	//	case 1 : cout << "\nSum of numbers = " << Var + Var2 << endl;
	//		break;
	//	case 2: cout << "\nThe difference of numbers = " << Var - Var2 << endl;
	//		break;
	//	case 3: cout << "\nProduct of numbers = " << Var * Var2 << endl;
	//		break;
	//	case 4: cout << "\nResult of division of numbers = " << (float)Var / Var2 << endl;
	//		break;

	//	default: cout << "\nSomething went wrong(" <<  endl;
	//	break;
	//}




	//HW #4 line of symbols
	//char symbol;
	//int position;
	//int amount;
	//
	//cout << "Write symbol" << endl;
	//cin >> symbol;
	//cout << "Write amount of symbols" << endl;
	//cin >> amount;
	//cout << "Choose numder of position : \n1 - horyzontal \n2 - vertycal" << endl;
	//cin >> position;

	//if (position!=1 && position!=2)
	//{
	//	cout << "Wrong type of line" << endl;
	//	return;
	//}

	//switch (position)
	//{
	//	case 1: 
	//		while (amount >= 0)
	//		{
	//			amount--;
	//			cout << symbol;
	//		}
	//	break;
	//	case 2:
	//		while (amount >= 0)
	//		{
	//			amount--;
	//			cout << symbol <<endl;
	//		}
	//		break;
	//}



	//HW #5
	int rangeStart;
	int rangeEnd;
	int result = 0;

	cout << "Write number of range start" << endl;
	cin >> rangeStart;

	cout << "Write number of range end" << endl;
	cin >> rangeEnd;

	while (rangeStart <= rangeEnd)
	{
		if (rangeStart %2 != 0)
		{
			result += rangeStart;
		}
		rangeStart++;
	}
	cout << "\nResult = " << result << endl;



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
