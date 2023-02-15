#include "Creature.h"

Creature::Creature() : speed{ 0 }, race{ None }
{
	chara.iq = 0;
	chara.fly_speed = 0;
	chara.cf = 0;
}

Creature::Creature(int _speed, Type _race, float _fly) : speed{ _speed }, race{ _race }
{
	chara.fly_speed = _fly;
}

Creature::Creature(int _speed, Type _race, bool _cf) : speed{ _speed }, race{ _race }
{
	chara.cf = _cf;
}

Creature::Creature(int _speed, Type _race, int iq) : speed{ _speed }, race{ _race }
{
	chara.iq = iq;
}

void Creature::print()
{
	if (race == None)
		std::cout << "None" << std::endl;
	else
	{
		std::cout << "speed: " << speed << " race: ";
		switch (race)
		{
		case Bird:
			std::cout << "Bird  flight speed: " << chara.fly_speed << std::endl;
			break;
		case Stock:
			std::cout << "Stock  cloven-footed: ";
			if (chara.cf)
				std::cout << "yes";
			else
				std::cout << "no";
			std::cout << std::endl;
			break;
		case Human:
			std::cout << "Human  IQ: " << chara.iq << std::endl;
			break;
		default:
			break;
		}
	}
}

void Creature::edit(int _speed, Type _race, float _fly)
{
	speed = _speed;
	race = _race;
	chara.fly_speed = _fly;
}

void Creature::edit(int _speed, Type _race, bool _cf)
{
	speed = _speed;
	race = _race;
	chara.cf = _cf;
}

void Creature::edit(int _speed, Type _race, int iq)
{
	speed = _speed;
	race = _race;
	chara.iq = iq;
}

int Creature::Speed() { return speed; }

void Creature::Speed(int _speed)
{
	speed = _speed;
}

Type Creature::Race() { return race; }

void Creature::Race(Type _race)
{
	race = _race;
}

Char Creature::Chara()
{
	return chara;
}

void Creature::Chara(float fly)
{
	chara.fly_speed = fly;
}

void Creature::Chara(bool _cf)
{
	chara.cf = _cf;
}

void Creature::Chara(int iq)
{
	chara.iq = iq;
}
