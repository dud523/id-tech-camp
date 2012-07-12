
/*#include "petclass.h"
using namespace std;

string pn;
string ps;
int pa;
int pw;
string pg;
int notagain;

int main()
{
	system("color 2");
	Pet pone(pn, ps, pa, pw, pg);
	cout << "Thank you for using this E-Adopt A Pony Center" << endl;
ono:
	cout << "Would you prefer a colt or a mare?" << endl;
	cin >> pg;
	pone.setGender(pg);
	cout << "Would you ike a pegusus, a unicorn, or an earth pony?" << endl;
	cin >> ps;
	pone.setSpecies(ps);
	cout << "How much would you like your pony to weigh?" << endl;
	cin >> pw;
	pone.setWeight(pw);
	cout << "How old do you want your pony to be?" << endl;
	cin >> pa;
	pone.setAge(pa);
	cout << "Please enter a name for your new pony." << endl;
	cin >> pn;
	pone.setName(pn);

	cout << "Is this information correct? If yes then hit 1, if no, hit 2." << endl;
	Sleep(1000);
	cout << "Name: " << pone.getName() << endl;
	Sleep(1000);
	cout << "Gender: " << pone.getGender() << endl;
	Sleep(1000);
	cout << "Species: " << pone.getSpecies() << endl;
	Sleep (1000);
	cout << "Weight: " << pone.getWeight() << " lbs." << endl;
	Sleep(1000);
	cout << "Age: " << pone.getAge() << endl;
	Sleep(1000);
tryagain:
	cin >> notagain;
	switch (notagain){
	case 1:
		goto yey;
	case 2:
		goto ono;
	default:
		cout << "Please enter '1' or '2'." << endl;
		goto tryagain;
	}
yey:
	cout << "Please check the drop bin for your new pony pal." << endl;
	cout << "Have a nice day" << endl;
	system("pause");
	return 0;

}*/