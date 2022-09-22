// First_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>;
using namespace std;

// Factorial
//int Fact(int N)
//{
//	if (N == 0) return 0;
//	if (N == 1) return 1;
//	return N * Fact(N - 1);
//}


// Work with pointers
//void Foo(int *pa)
//{
//	(*pa)++;
//}


// Function wich aaccepts diferent type of variables
//template <typename T>
//void Foo(T &a, T &b)
//{
//	T res = a;
//	a = b;
//	b = res;
//}

int main()
{
	// Factorial
	// 
	//cout << "Factorial = " << Fact(5) << endl;



	// Work with dynamic array
	// 
	//int size = 5;
	//int *arr = new int[size];

	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = rand() % 10;
	//	cout << arr[i] << "\t";
	//	cout << arr + i << endl;
	//}
	//delete [] arr;




	// Work with two-dimensional array
	int rows;
	int columns;
	cout << "Write rows count" << endl;
	cin >> rows;
	cout << "Write colums count" << endl;
	cin >> columns;
	// creating two-dimensional array 
	int **arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[columns];
	}
	// fulling array
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arr[i][j] = rand() % 20;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	// clear all of that
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;










	// Function wich aaccepts diferent type of variables
	// 
	//double a = 2.7;
	//double b = 5.4;
	//cout << a << endl;
	//cout << b << endl;
	//Foo(a, b);
	//cout << a << endl;
	//cout << b << endl;



	/*int a = 10;
	cout << a << endl;

	cout << "Hello world!" << endl;*/


	//HW #1
	// 
	//int Var, Var2;
	//cout << "Write two numbers" << endl;
	//cin >> Var >> Var2;
	//cout << "Sum of numbers = "<< Var + Var2 << endl;
	//cout << "Product of numbers = " << Var * Var2 << endl;
	//cout << "Average number = " << (double)(Var + Var2)/2 << endl;

	//HW #2
	// 
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
	// 
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
	// 
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
	// 
	//int rangeStart;
	//int rangeEnd;
	//int result = 0;

	//cout << "Write number of range start" << endl;
	//cin >> rangeStart;

	//cout << "Write number of range end" << endl;
	//cin >> rangeEnd;

	//while (rangeStart <= rangeEnd)
	//{
	//	if (rangeStart %2 != 0)
	//	{
	//		result += rangeStart;
	//	}
	//	rangeStart++;
	//}
	//cout << "\nResult = " << result << endl;


	//Try continue
	// 
	//for (size_t i = 1; i < 5; i++)
	//{
	//	if (i == 2)
	//	{
	//		continue;
	//	}
	//	cout << "#" << i << endl;
	//}


	//HW #6
	// 
	//int count = 10;
	//for (int i = 1; i < count; i++)
	//{
	//	for (int j = 0; j < count-1; j++)
	//	{
	//		cout << " ";
	//	}
	//
	//	for (int j = 5; j > 0; j--)
	//	{
	//		cout << "*";
	//	}

	//	cout << "\n";
	//}



	// Try array
	// 
	//int arr[7]{};
	//cout << sizeof(arr)/sizeof(arr[0]) << endl;
	//cout << arr[0] << endl;





	// HW #7 working with array
	//srand((unsigned int)time(NULL));
	//int const SIZE = 10;
	//int MyArray[SIZE]{};
	//bool exist;

	//for (int i = 0; i < SIZE;)
	//{
	//	exist = false;
	//	int newValue = rand() % 20;
	//	//make checks of all elements of array
	//	for (int j = 0; j < i; j++)
	//	{
	//		if (MyArray[j] == newValue)
	//		{
	//			exist = true;
	//			break;
	//		}
	//	}

	//	if (exist==false)
	//	{
	//		MyArray[i] = newValue;
	//		i++;
	//	}
	//}
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << MyArray[i] << endl;
	//}

	//int min = MyArray[0];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (MyArray[i] < min)
	//	{
	//		min = MyArray[i];
	//		
	//	}
	//	// << min << endl;
	//}
	//cout << "Min value in array = "<< min << endl;


	
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
