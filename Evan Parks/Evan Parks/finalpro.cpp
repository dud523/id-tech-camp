#include <iostream>
#include <string>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include "finalproject.h"
using namespace std;
//functions
Base_stats::Base_stats(){
	Health=55;
	MagicDmg=25;
	AttackDmg=15;
	Intellect=20;
	Strength=25;
	Charisma=10;
	Morality=0;
}
Base_stats::Base_stats(int H, int M, int C, int D, int E, int S, int Exp, int G){
	Health=H;
	MagicDmg=M;
	AttackDmg=D;
	Intellect=E;
	Strength=S;
	Charisma=C;
	Experience=Exp;
	Morality=G;
}
void Base_stats::setExp(int Exp){
	Experience=Exp;
}
void Base_stats::setHealth(int H){
	Health=H;
}
void Base_stats::setMagicDmg(int M){
	if (Intellect >= 30)
	{
		MagicDmg = rand()%35;
	}

	if (Intellect <= 29)
	{
		MagicDmg = rand()%10;
	}
	MagicDmg=M;
}
void Base_stats::setAttackDmg(int D){
	if (Strength >= 30)
	{
		AttackDmg = rand()%20;
	}
	if (Strength <= 29)
	{
		AttackDmg = rand()%10;
	}
	AttackDmg=D;
}
void Base_stats::setIntellect(int E){
	Intellect=E;
}
void Base_stats::setStrength(int S){
	Strength=S;
}
void Base_stats::setCharisma(int C){
	Charisma=C;
}
void Base_stats::setMorality(int G){
	Morality=G;
}
int Base_stats::getMorality(){
	return Morality;
}
int Base_stats::getIntellect(){
	return Intellect;
}
int Base_stats::getStrength(){
	return Strength;
}
int Base_stats::getCharisma(){
	return Charisma;
}
int Base_stats::getHealth(){
	return Health;
}
int Base_stats::getAttackDmg(){
	return AttackDmg;
}
int Base_stats::getMagicDmg(){
	return MagicDmg;
}
int Base_stats::takeDmg(INT D){
	Health = Health - D;
	return Health;
}

void printstats(Base_stats* player){

cout<<"Health: "<<player->getHealth()<<endl;
cout<<"Strength: "<<player->getStrength()<<endl;
cout<<"Intelligence: "<<player->getIntellect()<<endl;
cout<<"Charisma: "<<player->getCharisma()<<endl;

}

void stats(Base_stats* player)
{
	int heal;
	int strength;
	int cha;
	int intelligence;
	int point;
	char rpe;
	char hng;
	char ugh;
	char raw;
	point = 150;

	cout << "You have 150 points to spend." << endl;
heal:
	cout << "How many points do you want in health?" << endl;
	cin >> heal;
	if (heal >= 150)
	{
		heal = NULL;
		cout << "You can't put all your points into health!" << endl;
		goto heal;
	}
	if (heal <= 10)
	{
		cout << "Are you sure, this will make the game more difficult!" << endl;
		cin >> raw;
		switch ('raw')
		{
		case 'y':
			cout << "Okay then..." << endl;
			point = point - heal;
			goto psi;
		case 'Y':
			cout << "Okay then..." << endl;
			point = point - heal;
			goto psi;
		case 'n':
			heal = NULL;
			goto heal;
		case 'N':
			heal = NULL;
			goto heal;
		default:
			heal = NULL;
			goto heal;

		}
	}
	if (point <= 0)
	{
		heal = NULL;
		cout << "You don't have any points!" << endl;
		goto set;
	}
	else
	{
		point = point - heal;
		goto psi;
	}
psi:
	cout << "You have " << point <<" points left" << endl;
	cout << "How much do you want to put into intelligence?" << endl;
	cin >> intelligence;
	if (intelligence >= 150)
	{
		intelligence = NULL;
		cout << "You can't put all your points into intelligence!" << endl;
		goto psi;
	}
	if (intelligence <= 10)
	{
		cout << "Are you sure, this will make the game more difficult!" << endl;
		cin >> hng;
		switch ('hng')
		{
		case 'y':
			cout << "Okay then..." << endl;
			point = point - intelligence;
			goto strength;
		case 'Y':
			cout << "Okay then..." << endl;
			point = point - intelligence;
			goto strength;
		case 'n':
			intelligence = NULL;
			goto psi;
		case 'N':
			intelligence = NULL;
			goto psi;
		default:
			intelligence = NULL;
			goto psi;

		}
	}
	if (point <= 0)
	{
		intelligence = NULL;
		cout << "You don't have any points!" << endl;
		goto set;
		
	}
	else
	{
		point = point - intelligence;
		goto strength;
	}
strength:
	cout << "You have "<< point << " left to spend." << endl;
	cout << "How many points do you want in strength?" << endl;
	cin >> strength;
	if (strength >= 150)
	{
		strength = NULL;
		cout << "You can't put all your points into health!" << endl;
		goto strength;
	}
	if (strength <= 10)
	{
		cout << "Are you sure, this will make the game more difficult!" << endl;
		cin >> ugh;
		switch ('ugh')
		{
		case 'y':
			cout << "Okay then..." << endl;
			point = point - strength;
			goto cha;
		case 'Y':
			cout << "Okay then..." << endl;
			point = point - strength;
			goto cha;
		case 'n':
			strength = NULL;
			goto strength;
		case 'N':
			strength = NULL;
			goto strength;
		default:
			heal = NULL;
			goto heal;

		}
	} 
if (point <= 0)
	{
		strength = NULL;
		cout << "You don't have any points!" << endl;
		goto set;
	}
	else
	{
		point = point - strength;
		goto cha;
	}
cha:
	cout << "You have " << point << " points left" << endl;
	cout << "How much do you want to put in charisma?" << endl;
	cin >> cha;
	if (cha >= 150)
	{
		cha = NULL;
		cout << "You can't put all your points in charisma!" << endl;
		goto cha;
	}
	if (cha <= 10)
	{
		cout << "Are you sure, this will make the game more difficult!" << endl;
		cin >> rpe;
		switch ('rpe')
		{
		case 'y':
			cout << "Okay then..." << endl;
			point = point - cha;
			break;
		case 'Y':
			cout << "Okay then..." << endl;
			point = point - cha;
			break;
		case 'n':
			cha = NULL;
			goto cha;
		case 'N':
			cha = NULL;
			goto cha;
		default:
			cha = NULL;
			goto cha;

		}
	}
	if (point <= 0)
	{
		cha = NULL;
		cout << "You don't have any points!" << endl;
		goto set;
	}
	else
	{
		point = point - cha;
	}
	set:
	player->setIntellect(intelligence);
	player->setCharisma(cha);
	player->setHealth(heal);
	player->setStrength(strength);

}

Character::Character (){}
man_stats::man_stats(){
	MHP=30;
	MDM=5;
}
man_stats::man_stats(int MH, int MD){
	 MHP = MH;
	 MDM = MD;
}
void man_stats::setMHealth(int MH){
	MHP = MH;
}
void man_stats::setMDamage(int MD){
	MDM = MD;
}
int man_stats::getMHealth(){
	return MHP;
}
int man_stats::getMDamage(){
	return MDM;
}
int man_stats::takeD(INT D){
	MHP = MHP - D;
	return MHP;
}