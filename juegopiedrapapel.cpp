#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int jugador,empate, computadora, victorias = 0;

    srand(time(0));

    while (true)
    {
        cout << "Ingresa alguna (0 - piedra, 1 - papel, 2 - tijera, 3 - exit): ";
        cin >> jugador;

        if (jugador < 0 || jugador > 2)
        {
            cout << "Movimiento invalido, intentalo de nuevo" << endl;
            continue;
        }

        if (jugador == 3)
        {
            cout << "Gracias por jugar " << endl;
            break;
        }

        computadora = rand() % 3;

        cout << "Jugador: " << jugador << endl;
        cout << "Computadora: " << computadora << endl;

        if (jugador == computadora)
        {
            cout << "empate" << endl;
        }
        else if ((jugador == 0 && computadora == 2) ||
                 (jugador == 1 && computadora == 0) ||
                 (jugador == 2 && computadora == 1))
        {
            cout << "Victorias del jugador " << endl;
            victorias++;
        }
        else
        {
            cout << "Victoria de la computadora " << endl;
        }
    }

    cout << "victoria del jugador: " << victorias << endl;

    return 0;
}