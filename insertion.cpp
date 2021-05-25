#include<iostream>
using namespace std;

void insertionSort(int a[], int n)
{
	int j, temp ;
	for(int i=0;i<n;i++)
	{
		temp = a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
	}
	
}
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int a[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(a) / sizeof(a[0]);
 
    insertionSort(a, n);
    printArray(a, n);
    return 0;
}
