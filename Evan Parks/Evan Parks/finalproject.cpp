#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "finalproject.h"
using namespace std;
//variables
/*
<b>hello</b> -->make it bold
<i>hello </i> -->italic
<u>hello</u> -->underline
*/
char input1;
string name;
string gender;
char input2;
string input3;
bool clairv (false); 
bool telek (false);
bool pyrok (false);
string oops;
string pyro1;
Base_stats player;
man_stats man2;
string pyrodecision1;
//battle functions
void BattleMan1(Base_stats* player, man_stats* man)
{
	int fight11;
	cout<< "The man's health is " << man->getMHealth() <<endl;
	cout<< "Your health is " << player->getHealth() <<endl;
	cout<<"1. Punch\n\n2. Power\n\n3. Run Away\n\n";
	cin >> fight11;
	if (fight11 == 1)
	{
		int punch11;
		punch11 = player->getAttackDmg();
		int rollp11;
		rollp11 = rand()%21;
		if (rollp11<=10)
		{
			cout<<"You swing, but miss."<<endl;
			goto fight12;
		}
		if (rollp11>=11)
		{
			cout<<"Your fist gave his face a not-so-friendly kiss"<<endl;
			man->setMHealth(man->takeD(punch11) - man->getMHealth()); 
			goto fight12;
			
		}
	}
	if (fight11 == 2)
	{
		
		int magic11;
		magic11 = player->getMagicDmg();
		int rollm11;
		rollm11 = rand()%31;
		if (rollm11<=20)
		{
			cout<<"You try to fry him, but you just can't <i> fire </i>\n";
			goto fight12;
		}
		if (rollm11>=21)
		{
			cout<<"You launch a fire ball right at him."<<endl;
			man->setMHealth(man->takeD(magic11) - man->getMHealth());
			goto fight12;
		}
	}
	fight12:
	//int fight12;
	cout<<"The rest of the fight will be included int the full version!"<<endl;
}
//main
int main()
{        
title:
	cout << "	 		    ! A P O C A L Y P S E ! \n		   	      ## the life after \n\n\n		                 *the demo*\n\n\n\n\n";
input1:
	cout << "[S]tart \n\n[I]nstructions \n\n[B]ackstory \n\n";
	Beep(rand(),rand());
	cin >> input1;
	switch(input1)
	{
	case 's':
		cout<<endl;
		cout<<"Alright! Let's go! \nLoading";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".\n";
		goto roomwake;
	case 'S':
		cout<<endl;
		cout<<"Alright! Let's go! \n Loading";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		Sleep(500);
		cout << ".";
		goto roomwake;
	case 'I':
		cout << "In this world, you'll need to be able to think, fight, and survive.\nTo do this, you'll need to know how to fight.\nWhen you encounter enemies, it will either be random or you caused it through   various speech options.\nYou will be able to choose between a melee attack, a ranged attack(your power), or running away.\nYou'll also need to learn special commands to view    your stats(stats) and the help screen that pulls up helpful hints  and commands(help).\nAll yes or no questions should be responded with 'y' or 'n'.\nTo interact with a person, you would generally type in talk, fight, give, etc. and their name(assuming you know their name, if not just say man, woman, boy, or girl) ex. talk_man\nOne last thing you'll need to remember is you should use underscores'_' as      spaces (when needed)"<<endl;
		system("pause");
		system("cls");
		goto title;
	case 'i':
		cout << "In this world, you'll need to be able to think, fight, and survive.\nTo do this, you'll need to know how to fight.\nWhen you encounter enemies, it will either be random or you caused it through   various speech options.\nYou will be able to choose between a melee attack, a ranged attack(your power), or running away.\nYou'll also need to learn special commands to view   your inventory(inv), check your stats(stats), and there is also a help screen that pulls up helpful hints  and commands(help).\nOne last thing you'll need to remember is you should use underscores'_' as      spaces (when needed)"<<endl;
		system("pause");
		system("cls");
		goto title;
	case 'b':
		cout << "It is the year 2371.\nTechnology had reached a new high.\nAlmost everyone had a Bio-Tech Chip of some sort.\nBio-Tech Chips are little computers inplanted into the body.\nIt was revolutionary, you could be connected to the Internet from anywhere!\nBut it's pros came with cons too.\nThe chips unveiled a hidden potential in humans.\nThere were three different types of powers, telekinesis, pyrokinesis, and       clairvoyance.\nBeing who the humans are, they immediately used it for war.\nThe world leaders were slaughtered, and the planet began it's long spiral into  chaos.\nThis is the world you live in, the life after.";
		Sleep(10000);
		cout<<" .";
		Sleep(1000);
		cout<<" .\n";
		system("pause");
		system("cls");
		goto title;
	case 'B':
		cout << "It is the year 2371.\nTechnology had reached a new high.\nAlmost everyone had a Bio-Tech Chip of some sort.\nBio-Tech Chips are little computers inplanted into the body.\nIt was revolutionary, you could be connected to the Internet from anywhere!\nBut it's pros came with cons too.\nThe chips unveiled a hidden potential in humans.\nThere were three different types of powers, telekinesis, pyrokinesis, and       clairvoyance.\nBeing who the humans are, they immediately used it for war.\nThe world leaders were slaughtered, and the planet began it's long spiral into  chaos.\nThis is the world you live in, the life after.";
		Sleep(500);
		cout<<" .";
		Sleep(500);
		cout<<" .\n";
		system("pause");
		system("cls");
		goto title;
	default:
		"Please choose one.\n\n";
		goto input1;
	}
roomwake:

	cout << "You wake up, your head aching horribly.\nYou need to remember, what's your name?" << endl;
	cin >> name;
	cout << "Yeah, " << name << ", that sound right. But are you male or female?" << endl;
	cin >> gender;
	cout << "Is this correct?\n" << name << endl << gender << endl;
rite:
	cin >> input2;
	switch(input2)
	{
	case 'y':
		goto roomwake2;
	case 'Y':
		goto roomwake2;
	case 'n':
		cout << "You think there was something fishy about it, what was really was your name?" << endl;
		cin >> name;
		cout << "And, what was your gender?" << endl;
		cin >> gender;
		cout << "Now is this correct?\n" << name << endl << gender << endl;
		goto rite;
	case 'N':
		cout << "You think there was something fishy about it, what was really was your name?" << endl;
		cin >> name;
		cout << "And, what was your gender?" << endl;
		cin >> gender;
		cout << "Now is this correct?\n" << name << endl <<  gender << endl;
		goto rite;
	}
roomwake2:
	cout << "Now that we've gotten that cleared up, you need to put some points into your\nstats!" << endl;
	//stats


	stats(&player);
	//give power
	//quickcheck:
	if (player.getIntellect() > player.getStrength(), player.getIntellect() > player.getCharisma())
	{
		cout << "A vison appears of several shocked people gathered around you in a circle. You have you have the power of\nClairvoyance!" << endl;
		clairv = true;
	}
	if (player.getStrength() > player.getIntellect(), player.getStrength() > player.getCharisma())
	{
		cout << "A flame dances before your eyes. You have the power of\nPyrokinesis!" << endl;
		pyrok = true;
	}
	if (player.getCharisma() > player.getStrength(), player.getCharisma() > player.getIntellect())
	{
		cout << "The side table next to you floats around the room. You have the power of\nTelekinesis!" << endl;
		telek = true;
	}
pyrostory:
	cout <<"\n\n\n";
	cout << "Your head feels a little more cleared after all that, you realize there\nis another person in the room with you." << endl;
	cout << "She looks worried." << endl;

pyro1:
	cout << "What do you do?" << endl;
	cin >> pyro1;
	if (pyro1 == "look")
	{
		cout << "It looks as if you're in a pre-war 22nd century style bed, and it's pretty comfy. The rest of the room looks worn-down with no noticable details except for the person in the chair next to your bed and a goat by the door."<<endl;
		pyro1 = "";
		goto pyro1;
	}
	if (pyro1 == "punch_goat")
	{
		cout<< "The goat was suffeciently taught a lesson. How dare it stare at you like that.  The lady looks surprised though." <<endl;
		cout<< "You got +1 strength." << endl;
		player.setStrength(player.getStrength()+1);
		goto pyro1;
	}
	if (pyro1=="ask_about_goat")
	{
		cout<<"What goat?"<<endl;
		goto pyro1;
	}
	if (pyro1=="ask_girl_about_goat")
	{
		cout<<"What goat?"<<endl;
		goto pyro1;
	}
	if (pyro1=="ask_woman_about_goat")
	{
		cout<<"What goat?"<<endl;
		goto pyro1;
	}
	if (pyro1 == "talk_woman")
	{
		cout<<"You turn to the lady and let out a friendly hello, which is returned with suprise and a shaky 'H-hello'"<<endl;
		
		cout<<"You ask her why you are in a bed, and she told you she was a nurse, and she found you by the road a few months ago beaten to a bloody pulp. You've been here recovering since then." << endl;
		goto pyro1;
	}
	if (pyro1 == "talk_lady")
	{
		cout<<"You turn to the lady and let out a friendly hello, which is returned with suprise and a shaky 'H-hello'"<<endl;
		cout<<"You ask her why you are in a bed, and she told you she was a nurse, and she found you by the road a few months ago beaten to a bloody pulp. You've been here recovering since then." << endl;
		goto pyro1;
	}
	if (pyro1 == "talk_girl")
	{
		cout<<"You turn to the lady and let out a friendly hello, which is returned with suprise and a shaky 'H-hello'"<<endl;
		cout<<"You ask her why you are in a bed, and she told you she was a nurse, and she found you by the road a few months ago beaten to a bloody pulp. You've been here recovering since then." << endl;
		goto pyro1;
	}
	if (pyro1 == "stand_up")
	{
		if (player.getStrength()<=20)
		{
		cout<<"You move to stand up, but the lady stops you, saying you need to take it slowly."<<endl;
		goto pyro1;
		}
		if (player.getStrength()>=21)
		{
			cout<<"You stand up from the bed and the lady looks even more worried (if thats even possible). You hobble out the door"<<endl;
			goto pyrotowns;
		}
	}
		if (pyro1 == "leave")
	{
		if (player.getStrength()<=20)
		{
		cout<<"You move to stand up, but the lady stops you, saying you need to take it slowly."<<endl;
		goto pyro1;
		}
		if (player.getStrength()>=21)
		{
			cout<<"You stand up from the bed and the lady looks even more worried (if thats even possible). You hobble out the door."<<endl;
			goto pyrotowns;
		}
	}
	if (pyro1== "stats")
	{
		printstats(&player);
		goto pyro1;
	}
	else 
	{
		cout<<"Invalid statement"<<endl;
		goto pyro1;
	}
pyrotowns:
	int goclark;
	cout<<"W E L C O M E   T O   N E W   C L A R K S B U R G H\n\n\n\n";
	cout<<"You walk outside and the sun glares in your eyes, but when you regain sight, you can see the town."<<endl;
	cout<<"You look around, you see three main areas of the town. the Town Center, the Shopping Distict, and the Bio-Tech building"<<endl;
	cout<<"There seems to be some large commotion going on in the Town Center."<<endl;
	cout<<"Where will you go? 1. the Town Center 2. the Shopping Distict 3. the Bio-Tech building"<<endl;
	cin>>goclark;
	if (goclark == 1)
	{
		
		cout<<"You head over to the crowd in the Town Center, there is a man wailing on a teenage boy, a guard is holding back a woman who is in tears, presumably the boy's mother"<<endl;
		cout<<"\n\n! MORAL DECISION !\n\n";
		cout<<"Will you walk away, help the man, or help the boy?"<<endl;
		cin >> pyrodecision1;
		if(pyrodecision1=="help_boy")
		{
			if (rand()%21 >= 5)
			{
				int fight1;
				cout<<"You push your way through the crowd to the boy, when you reach them however the boy was beaten to death."<<endl;
				cout<<"The crowd disperses, and all thats left in the Center is you, the man and the corpse."<<endl;
				cout<<"The man look very angry."<<endl;
				cout<<"'What do you want, kid?'\n\n";
				choices:
				cout<<"1. Why did you kill that boy?!\n\n2.Your death.\n\n3. Nothing";
				cin>>fight1;
				if (fight1== 1)
				{
					cout<<"THE REST OF THIS WILL BE COMPLETED IN THE FULL VERSION."<<endl;
					system("pause");
					return 0;
				}
				if (fight1 == 2)
				{
					cout<< BattleMan1 << endl;
					system("pause");
					return 0;
				}
				if (fight1 == 3)
				{

				}
				else
				{
					cout<<"Invalid answer."<<endl;
					goto choices;
				}
			}
		}
	}
	if (goclark == 2)
	{
		cout<<"TO BE COMPLETED IN THE FULL VERSION."<<endl;
	system("pause");
	return 0;
	}
	if (goclark == 3)
	{
		cout<<"TO BE COMPLETED IN THE FULL VERSION."<<endl;
	system("pause");
	return 0;
	}
	
telestory:
	cout <<"\n\n\n";
	cout << "Your head feels a little more cleared after all that, you realize there\nis another person in the room with you." << endl;
	if (gender == "male")
	{
		cout << "She looks worried." << endl;
	}
	if (gender == "Male")
	{
		cout << "She looks worried."<< endl;
	}
	if (gender == "female")
	{
		cout << "He looks worried."<< endl;
	}
	if (gender == "Female")
	{ 
		cout << "He Looks worried." << endl;
	}
	else 
	{
		cout << "They look worried." << endl;
	}
	cout << "What do you do?" << endl;
	cout << "MORE WILL BE AVALABLE IN FULL VERSION" << endl;
	system("pause");
	return 0;
clairstory:
	cout <<"\n\n\n";
	cout << "Your head feels a little more cleared after all that, you realize there\nis another person in the room with you." << endl;
	if (gender == "male")
	{
		cout << "She looks worried." << endl;
	}
	if (gender == "Male")
	{
		cout << "She looks worried."<< endl;
	}
	if (gender == "female")
	{
		cout << "He looks worried."<< endl;
	}
	if (gender == "Female")
	{ 
		cout << "He Looks worried." << endl;
	}
	else 
	{
		cout << "They look worried." << endl;
	}
	cout << "What do you do?" << endl;
	cout << "MORE WILL BE AVALABLE IN FULL VERSION" << endl;
	system("pause");
	return 0;
}