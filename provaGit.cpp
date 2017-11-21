#include<iostream>
using namespace std;

void incrementa(int c)
{
	for (int i = 0; i < 10; i++) {
		cout << "contatore: " << c << endl;
		c++;
	}
}

void main()
{
	int c = 0;
	incrementa(c);
	system("pause");
}