/*#include <iostream>
#include <string>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include "FIGHTER.h"
using namespace std;

Base_stats::Base_stats(){
	Health=100;
	Armor=50;
	AttackDmg=rand()%21;
}
Base_stats::Base_stats(int H, int A, int D){
	Health=H;
	Armor=A;
	AttackDmg=D;
}
void Base_stats::setHealth(int H){
	Health=H;
}
void Base_stats::setAttackDmg(int D){
	AttackDmg=D;
}
int Base_stats::getHealth(){
	return Health;
}
int Base_stats::getArmor(){
	return Armor;
}
int Base_stats::getAttackDmg(){
	return AttackDmg;
}
int Base_stats::takeDmg(INT D){
	if (Armor<=0){
		Health = Health - D;
		return Health;
	}
	else{
		Armor = Armor - D;
		return Armor, Health;
	}

}
Character::Character (){}*/