#include <iostream>
#include <ctime>;
using namespace std;

class Apple;


class Human
{
public:
	void TakeApple(Apple& apple);


};



class Apple
{
public:
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}
private:
	int weight;
	string color;

	friend void Human::TakeApple(Apple& apple);

};
void Human::TakeApple(Apple& apple)
{
	cout << "Collor " << apple.color << "Weight" << apple.weight << endl;
};


int main()
{
	Apple apple(200, "Red");
	Human human;
	human.TakeApple(apple);

	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
