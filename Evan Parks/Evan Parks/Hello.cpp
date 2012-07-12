#include <iostream>
#include <string>
using namespace std;

string imput;

int main ()
{
	cout << "Who is best pony?" << endl;

	cin >> imput;
	if (!imput.compare("Rarity")) {
		cout << "You have great taste and should be my friend." << endl;
		system ("pause");
		return 0;
	}
	else {
		cout << "Get better taste and try again later." << endl;
		system ("pause");
		return 0;
	}
}