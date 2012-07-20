#ifndef character
#define character

#include <string>

using namespace std;

class Base_stats{
private:
	int Health;
	int AttackDmg;
	int MagicDmg;
	int Strength;
	int Charisma;
	int Intellect;
	int Experience;
	int Morality;
public:
	Base_stats();
	Base_stats(int H, int M, int C, int D, int E, int S, int Exp, int G);
	void setHealth(int H);
	void setAttackDmg(int D);
	void setMagicDmg(int M);
	void setCharisma(int C);
	void setIntellect(int E);
	void setStrength(int S);
	void setExp(int Exp);
	void setMorality(int G);
	int getMorality();
	int getStrength();
	int getCharisma();
	int getIntellect();
	int getHealth();
	int getAttackDmg();
	int getMagicDmg();
	int takeDmg(int D);
};

class Character : public Base_stats{
private:
	string name;
	//pointer to inventory list
public: 
	Character();
	Character(string name, int H, int M, int D, int E, int C, int S, int Exp, int G);
	void setName(string name);
	string getName();
};

void stats(Base_stats* player);
void printstats(Base_stats* player);

class man_stats{
private:
	int MHP;
	int MDM;
public:
	man_stats();
	man_stats(int MH, int MD);
	void setMHealth(int MH);
	void setMDamage(int MD);
	int getMHealth();
	int getMDamage();
	int takeD(int D);
};
#endif