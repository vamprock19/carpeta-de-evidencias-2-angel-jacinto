// zap534_practica5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// angel jacinto
// 2021 10 05

#include <iostream>
using namespace std;
string correo = "zap534@amerike.edu.mx";
string contraseña = "amerike200";
string correoin;
string contraseñain;

int main()
{
    cout << "ingresa tu correo electronico" << endl;
    cin >> correoin;
    if (correo == correoin)
    {
        cout << "ingresa contraseña" << endl;
        cin >> contraseñain;
        if (contraseña == contraseñain)
        {
            cout << "Bienvenido" << endl;
        }
        else
        {
            cout << "contraseña incorrecta" << endl;
        }

    }
    else
    {
        cout << "correo no encontrado" << endl;
    }


}
   


