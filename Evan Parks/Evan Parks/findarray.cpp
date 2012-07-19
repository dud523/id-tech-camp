/*#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;
int arr[100000000];
int i;
int find;
bool searchArray (int arr[], int n, int item){
	bool Found = false;
	int index = 0;
	while (!Found&&index<n){
		if(arr[index]==item){
			Found=true;
			return Found;
		}
		else
			index++;
	}
	return Found;
}

int main(){
	
	for (int i = 0; i < 99; i++)
	{
		
		arr[i] = rand();
	}
	for (int i = 99;i >=0; i--)
	{
		cout << arr[i] << endl;
		Sleep (2);
	}
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
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	go:
	cout << "Please enter a number and this will find try and find it in the mass of random  numbers above." << endl;
	cin >> find;
	if (searchArray(arr,1000,find)){
		cout << "Yes, "<< find << " is in there." << endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
	goto go;
	}
	else{
		cout << "Nope, " << find << " isn't there." << endl;
	system("pause");
	return 0;
}
	return 0;
}*/