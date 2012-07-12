#ifndef FIGHTER_H// just added this to prevent multiple includes!!
#define FIGHTER_H

#include <string>

using namespace std;

class Base_stats{
private:
	int Health;
	int Armor;
	int AttackDmg;
public:
	Base_stats();
	Base_stats(int H, int A, int D);
	void setHealth(int H);
	void setAttackDmg(int D);
	int getHealth();
	int getArmor();
	int getAttackDmg();
	int takeDmg(int D);
};

class Character : public Base_stats{
private:
	string name;
	//pointer to inventory list
public: 
	Character();
	Character(string name, int H, int A, int D);
	void setName(string name);
	string getName();
};
Character::Character (){}

#endif