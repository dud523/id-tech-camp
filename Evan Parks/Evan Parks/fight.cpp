#include "FIGHTER.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void Battle(Base_stats* battletoadA, Base_stats* battletoadB){ 
	//etc A
	//etc b
	while (true ){
		//A attack B
		battletoadB -> takeDmg(battletoadA->getAttackDmg());
		cout << "Battletoad A slapped Battletoad B in the face" << endl;
		cout << "Battletoad B's hp is now " << battletoadB->getHealth() << endl;
		Sleep(800);
		if(battletoadB->getHealth()<=0){
			system ("color 4");
			cout << "A Winrar is Battletoad A." << endl;
			return;
		}

		//B attack A
		battletoadA -> takeDmg(battletoadB -> getAttackDmg());
		cout << "Battletoad B kicked Battletoad A in the shin" << endl;
		cout << "Battletoad A's hp is now " << battletoadA->getHealth()<< endl;
		Sleep(800);
		if(battletoadA->getHealth()<=0){
			system ("color 4");
			cout << "A Winrar is Battletoad B." << endl;
			return;
		}
	}
}
int main()
{
	Character battletoad1;
	Character battletoad2;
	cout << "Ready?" << endl;
	Sleep(50);
	cout << "FIGHT!" << endl;
	Battle(&battletoad1,&battletoad2);
	system("pause");
	return 0;
}