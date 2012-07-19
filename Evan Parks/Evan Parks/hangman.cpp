/*#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
//global variables
char words[11][50] = 
{
	{'f','o','o','d'},{'p','i','z','z','a'},{'p','l','a','t','y','p','u','s'},{'e','x','p','l','o','s','i','o','n'},{'f','i','g','h','t'},{'d','i','a','m','o','n','d'},{'e','n','e','m','y'},{'c','o','m','p','u','t','e','r'},{'h','i','p','p','o','p','o','t','o','m','o','n','s','t','r','o','s','e','s','q','u','i','p','e','d','a','l','i','o','p','h','o','b','i','a'},{'m','o','v','i','e'},{'t','h','e',' ','q','u','i','c','k',' ','b','r','o','w','n',' ','f','o','x',' ','j','u','m','p','s',' ','o','v','e','r',' ','t','h','e',' ','l','a','z','y',' ','d','o','g'}
};
bool charfound[50];
char play;
char input;
int incorrect;
int wordlength;
int word;
//functions
void init()
{
	incorrect = 0;
	for (int i = 0; i < 50; i++)
	{
		charfound[i] = false;
	}
	word = rand()%11;
	wordlength = 0;
	while (words[word][wordlength]!=0)
		wordlength++;
}
void getInput()
{
	cout << "Please guess a letter." << endl;
	cin >> input;
}
void processInput()
{
	bool found = false;
	for ( int i = 0; i < wordlength; i++ )
	{
		if (words[word][i] == input)
		{
			cout << "You guessed correctly!" << endl;
			charfound [i] = true;
			found = true;
		}
	}	
	if (found == false)
	{
		cout << "Nope, guess again." << endl;
		incorrect ++;

	}

}
bool checkWin()
{
	bool win = true;
	for (int i = 0; i< wordlength; i++)
	{ 
		if (charfound [i] == false)
			win = false;
	}

	return win;
}
bool checkLose()
{
	if (incorrect == 7)
	{
		return true;
	}
	return false;
}

void drawMan1()
{

}
void drawMan2()
{
	
	cout<<"			 _____  "<<endl;
	cout<<"	        | o o | "<<endl;
	cout<<"			|__u__| "<<endl;
	cout<<"				    "<<endl;
	cout<<"		            "<<endl;
	cout<<"		            "<<endl;
	cout<<"	                "<<endl;
	cout<<"		            "<<endl;

}
void drawMan3()
{

	cout<<"			 _____ "<<endl;
	cout<<"         | o o |"<<endl;
	cout<<"			|__u__|"<<endl;
	cout<<"	           |   "<<endl;
	cout<<"		       |   "<<endl;
	cout<<"	           |   "<<endl;
	cout<<"			   |   "<<endl;
	cout<<"			   |   "<<endl;
	cout<<"			   |   "<<endl;
}
void drawMan4()
{

	cout<<"		 _____   "<<endl;
	cout<<"	    | o o |  "<<endl;
	cout<<"		|__-__|  "<<endl;
	cout<<"        |     "<<endl;
	cout<<"	       |\    "<<endl;
	cout<<"	       | \   "<<endl;
	cout<<"        |  \  "<<endl;
	cout<<"        |   \ "<<endl;
	cout<<"	       |     "<<endl;
	cout<<"			     "<<endl;
	cout<<"              "<<endl;
	cout<<"		         "<<endl;
	
void drawMan5()
{
	cout<<"			      "<<endl;
	cout<<"               "<<endl;
	cout<<"	       _____   "<<endl;
	cout<<"		  | o o |  "<<endl;
	cout<<"		  |__-__|  "<<endl;
	cout<<"          |     "<<endl;
	cout<<"	        /|\    "<<endl;
	cout<<"	       / | \   "<<endl;
	cout<<"		  /  |  \  "<<endl;
	cout<<"      /   |   \ "<<endl;
	cout<<"	         |     "<<endl;
	cout<<"			       "<<endl;
	cout<<"                "<<endl;
	cout<<"		           "<<endl;

}
void drawMan6()
{
	cout<<"		            "<<endl;
	cout<<"	                "<<endl;
	cout<<"	       _____    "<<endl;
	cout<<"       | o o |   "<<endl;
	cout<<"	      |__n__|   "<<endl;
	cout<<"          |      "<<endl;
	cout<<"	        /|\     "<<endl;
	cout<<"	       / | \    "<<endl;
	cout<<"       /  |  \   "<<endl;
	cout<<"      /   |   \  "<<endl;
	cout<<"			 |      "<<endl;
	cout<<"			  \     "<<endl;
	cout<<"			   \    "<<endl;
	cout<<"			       \   "<<endl;
	cout<<"		                          \  "<<endl;
	cout<<"			                           \ "<<endl;
	cout<<"			                             "<<endl;
	cout<<"			                             "<<endl;
	cout<<"                 "<<endl;
}
void drawMan7()
{
	cout<<"			_________________________     "<<endl;
	cout<<"			|    /				   |      "<<endl;
	cout<<"			|   /				 _____    "<<endl;
	cout<<"			|  /                | x x |   "<<endl;
	cout<<"			| /		    		|__n__|   "<<endl;
	cout<<"			|/					   |      "<<endl;
	cout<<"			|                     /|\     "<<endl;
	cout<<"			|                    / | \    "<<endl;
	cout<<"			|                   /  |  \   "<<endl;
	cout<<"         |                  /   |   \  "<<endl;
	cout<<"			|                      |      "<<endl;
	cout<<"			|                      /\     "<<endl;
	cout<<"			|                     /  \    "<<endl;
	cout<<"			|                    /    \   "<<endl;
	cout<<"			|                   /      \  "<<endl;
	cout<<"			|                  /        \ "<<endl;
	cout<<"			|                             "<<endl;
	cout<<"			|                             "<<endl;
	cout<<"_____________________                  "<<endl;
}
void draw()
{
	switch(incorrect)
	{
	case 0:
		drawMan1();
		break;
	case 1:
		drawMan2();
		break;
	case 2:
		drawMan3();
		break;
	case 3:
		drawMan4();
		break;
	case 4:
		drawMan5();
		break;
	case 5:
		drawMan6();
		break;
	case 6:
		drawMan7();
		cout << "You Lose!" << endl;
		break;
	default:
		//start mayancountdown.exe
		break;
	}
	for ( int i = 0; i < wordlength; i ++)
	{
		if(charfound [i] == false)
		{
			cout << "_ ";
		}
		else 
		{
			cout << words[word][i];
		}
	}
	cout<<endl;
}
//main
int main()
{

	cout<<"  MNMNM  MMMMM                                                                     "<<endl;
	cout<<"   8MN8  ONNN    NMNON   INI   8ODZ   NMMMM  MMMMM   MMM     MMMM    NNN   MDND    "<<endl;
	cout<<"   ZMM8  IMNM    DMNMO   NMMD  MMM ONMNMMNM8 DMMMM   MMM     NMMM     MMN  NNZ     "<<endl;
	cout<<"   OMN8  INNM    NNNMZ   OMMM  NN  MNMN  NMD OMMMM  NMMM     MMMM     NMMN  M$     "<<endl;
	cout<<"   OMNMNNNNMM    N MNM   ZMMMM DM  MMN       $MNMMM MMMM    8M NM8    MMMND M$     "<<endl;
	cout<<"   ONMNNMNNMM   NN  MNZ  ZMNMMNNN  MMN INMNM $MNNNMMMMMM   OMM  MND   DN MM M$     "<<endl;
	cout<<"   ZNND   MNM   MNMMMMN  OMN NNNN  MMM  DNMM $MMDOMMOMMM   MMMMMMMM   MN MMNN$     "<<endl;
	cout<<"   ZMNN   MNM  NNI  MNM  ONN MMMM  MMM  NMMM $MM  MD  MM  IMN    MMZ  NM  MMM$     "<<endl;
	cout<<"   8NNM   MNN DMMN  DMM  MNM  MMM  8MMMMMMMM ZMM     MMM DDMMM  MMMM8 NM  DMM$     "<<endl;
	cout<<"   MMMM  MMMNN       NMM ND    OZ   DNMMMN   MMMM   MMMM                   ZOI     "<<endl;
ready:
	cout<<"Ready? Y/N"<<endl;
	cin >> play;
	switch(play)
	{
	case 'y':
		cout << "Okay! Let's go!" << endl;
		goto start;
	case 'Y':
		cout << "Okay! Let's go!" << endl;
		goto start;
	case 'n':
		cout << "Well come back later when you're ready." << endl;
		system ("pause");
		return 0;
	case 'N':
		system ("pause");
		return 0;
	default:
		goto ready;
	}

start:
	init();
	while(true)
	{
		draw();
		getInput();
		processInput();
		if (checkWin())
		{
			cout << "Yay! You won! Play again?" << endl;
			goto ready;
		}
		if (checkLose())
		{
			cout << "Too bad, try again?" << endl;
			goto ready;
		}
	}
	system ("pause");
	return 0;
}*/