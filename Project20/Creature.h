#pragma once

#include <iostream>
#include <string>

enum Type
{
	None = 0,
	Bird = 1,
	Stock = 2,
	Human = 3
};

union Char
{
	float fly_speed;
	bool cf;
	int iq;
};

class Creature
{

public:

	Creature();
	Creature(int _speed, Type _race, float _fly);
	Creature(int _speed, Type _race, bool _cf);
	Creature(int _speed, Type _race, int iq);

	void print();

	void edit(int _speed, Type _race, float _fly);
	void edit(int _speed, Type _race, bool _cf);
	void edit(int _speed, Type _race, int iq);

	int Speed();
	void Speed(int _speed);

	Type Race();
	void Race(Type _race);

	Char Chara();
	void Chara(float fly);
	void Chara(bool _cf);
	void Chara(int iq);

protected:

	int speed;
	Type race;
	Char chara;

};