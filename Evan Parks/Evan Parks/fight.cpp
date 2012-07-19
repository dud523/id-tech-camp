/*#include "FIGHTER.h"
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
		cout << "Battletoad B's armor is now " << battletoadB->getArmor() << endl;
		cout<<endl;
		Sleep(1000);
		if(battletoadB->getHealth()<=0){
			system ("color 2");
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout << "A Winrar is Battletoad A." << endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			return;
		}

		//B attack A
		battletoadA -> takeDmg(battletoadB -> getAttackDmg());
		cout << "Battletoad B kicked Battletoad A in the shin" << endl;
		cout << "Battletoad A's hp is now " << battletoadA->getHealth() << endl;
		cout << "Battletoad A's armor is now " << battletoadA->getArmor() << endl;
		cout<<endl;
		Sleep(1000);
		if(battletoadA->getHealth()<=0){
			system ("color 2");
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout << "A Winrar is Battletoad B." << endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			return;
		}
	}
}
int main()
{
	Base_stats battletoad1;
	Base_stats battletoad2;
	cout << "Ready?" << endl;
	Sleep(50);
	cout << "FIGHT!" << endl;
	Battle(&battletoad1,&battletoad2);
	system("pause");
	return 0;
}*/