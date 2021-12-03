// zap534_practica9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//2021/10/27
// Angel Jacinto 

#include <iostream>
#include <locale>
#include <conio.h>
using namespace std;


int main()
{
	int edades[3][2] = { {2,1}, {4,5},{8,6} };
	int filas = (sizeof(edades) / sizeof(edades[0]));
	int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));



	cout << "dijite el número de columnas " << endl;
	cin >> columnas;

	cout << "dijite el número de filas " << endl;
	cin >> filas;


	// imprimir 


	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << "dijite una edad [ " << i << "] [" << j << "]";
			cin >> edades[i][j];
		}
	}


	// matris
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout << edades[i][j];
		}
	}


}



