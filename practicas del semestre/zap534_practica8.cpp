// zap534_practica8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//21/10/21 práctica 8. arrays 
// Angel Jacinto
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
using namespace std;

int main()
{
    string titulo[50];
    int fecha[50];
    string autor[50];




    cout << "ingresa datos de 5 juegos de mesa, " << endl;

    cout << "Titulo, Fecha, Autor" << endl;
    cout << "no mezcles palabras con números"
        << endl
        << endl;

    for (int i = 0; i < 5; i++)
    {

        cout << "posición[" << i << "]" << endl;
        cout << "nombre del juego " << endl;
        getline(cin >> ws, titulo[i]);

        cout << "fecha del juego " << endl;
        cin >> fecha[i];

        cout << "autor del juego  " << endl;
        getline(cin >> ws, autor[i]);

        cout << "------------------------------------------------" << endl;
    }


    for (int k = 0; k < 5; k++)
    {

        cout << "juego en posicion [" << k << "] titulo: " << titulo[k] << "  " << "fecha: " << fecha[k] << "  " << "autor: " << autor[k] << "  " << endl << endl << endl;



    }

    getch();
    return 0;
}



