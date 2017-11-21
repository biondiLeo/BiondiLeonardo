/**
@author leonardo biondi
@version 1.0.0
@date 20/11/2017
*/
#include<iostream>
using namespace std;

/**
La funzione incrementa e stampa una variabile contatore
@param int c --> contatore
@return la stampa dei valori fino a 10 del contatore
*/
void incrementa(int c)
{
	for (int i = 0; i < 10; i++) {
		cout << "contatore: " << c << endl;
		c++;
	}
}

/**
Main dove viene richiamata la funzione incrementa()
*/
void main()
{
	int c = 0;
	incrementa(c);
	system("pause");
}