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


};
