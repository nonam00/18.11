#include "Creature.h"
#include <vector>

void print_array(Creature* array)
{
	for (int i = 0; i < 10; i++)
		array[i].print();
	std::cout << std::endl;
}

void find_speed(Creature* array, int speed)
{
	std::vector<Creature> checks;
	for (int i = 0; i < 10; i++)
		if (array[i].Speed() == speed)
			checks.push_back(array[i]);
	if (checks.empty())
		std::cout << "Not found" << std::endl;
	else
	{
		for (auto item : checks)
			item.print();
		std::cout << std::endl;
	}
}

void find_race(Creature* array, Type _race)
{
	std::vector<Creature> checks;
	for (int i = 0; i < 10; i++)
		if (array[i].Race() == _race)
			checks.push_back(array[i]);
	if (checks.empty())
		std::cout << "Not found" << std::endl;
	else
	{
		for (auto item : checks)
			item.print();
		std::cout << std::endl;
	}
}

void find_iq(Creature* array, int _iq)
{
	std::vector<Creature> checks;
	for (int i = 0; i < 10; i++)
		if (array[i].Race() == Human && array[i].Chara().iq==_iq)
			checks.push_back(array[i]);
	if (checks.empty())
		std::cout << "Not found" << std::endl;
	else
	{
		for (auto item : checks)
			item.print();
		std::cout << std::endl;
	}
}

void find_iq(Creature* array, bool cf)
{
	std::vector<Creature> checks;
	for (int i = 0; i < 10; i++)
		if (array[i].Race() == Stock && array[i].Chara().cf == cf)
			checks.push_back(array[i]);
	if (checks.empty())
		std::cout << "Not found" << std::endl;
	else
	{
		for (auto item : checks)
			item.print();
		std::cout << std::endl;
	}
}

void find_fly_speed(Creature* array, float speed)
{
	std::vector<Creature> checks;
	for (int i = 0; i < 10; i++)
		if (array[i].Race() == Bird && array[i].Chara().fly_speed == speed)
			checks.push_back(array[i]);
	if (checks.empty())
		std::cout << "Not found" << std::endl;
	else
	{
		for (auto item : checks)
			item.print();
		std::cout << std::endl;
	}
}

int main()
{
	/*Creature man(10, Human, 20);
	Creature biggest_bird(20, Bird, 40.0f);
	Creature stock(30, Stock, 1);
	man.print();
	biggest_bird.print();
	stock.print();*/
	Creature* array = new Creature[10];
	print_array(array);
	array[2].Race(Human);
	array[0].Race(Stock);
	print_array(array);
	array[1].edit(10, Human, 100);
	print_array(array);
	find_iq(array, 100);
	return 0;
}