// zap534_practica 6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
using namespace std;

int main()
{
    int vida = 100;
    int ataque1 = 17;
    int ataque2 = 25;
    int option;


    void ataqueboladefuego();
    {
        vida - ataque1;
    }
    do
    {
        cout << "\t\t\charizard vs pikachu" << endl;
        cout << "1. bola de fuego " << endl;
        cout << "2. lanza llamas" << endl;
        cin >> option;

        switch (option)
        {
        case 1: cout << "bola de fuego" << vida - ataque1 << endl;
            system("pause"); cout << endl;
        case 2: cout << "lanza llamas" << vida - ataque2 << endl;
            system("pause"); cout << endl;



        }
    } while (vida - ataque1 );
}


