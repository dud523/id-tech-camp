/*#include <iostream>
#include <Windows.h>
using namespace std;

int arr[100];
int i;

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
 
      /* partition */
    /*  while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };*/
 
      /* recursion */
      /*if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main()
{
	for (int i = 0; i < 99; i++)
	{
		
		arr[i] = rand();
		
	}
	quickSort(arr,0,100);
	for (int i = 99;i >=0; i--)
	{
	cout << arr[i] << endl;
	

	}
	swagg:
	
	
	cout << arr[i] << endl; 

	system ("pause");
	return 0;

}*/