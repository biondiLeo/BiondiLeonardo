
#include<iostream>
using namespace std;
/*
void increamenta(int c[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "variabile: " << c[i] << endl ;
	}
}

void main()
{
	int c[10];

	cout <<"inserisci valori nell'array:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> c[i];
	}

	increamenta(c);

	system("pause");
}
*/

void increamenta(int c[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "variabile: " << c[i] << endl;
	}
}

void main()
{
	int c[]{ 1,2,3,4,5,6,7,8,9,10 };
	increamenta(c);

	system("pause");
}