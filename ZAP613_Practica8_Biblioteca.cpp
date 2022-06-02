// ZAP613_Practica8_Biblioteca.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <Windows.h>


int main()
{
    int x,cont,anio[5];
    std::string autor[5];
    std::string titulo[5];
    std::cout << "Bienvenido!\n";

    do
    {
        std::cout << "Crearemos una biblioteca de videojuegos\n";

        for (int x=0;x<5;x++)
        {
            std::cout << "Ingresa el titulo del juego "<<x+1<<"\n";
            std::cin.ignore();
            std::getline(std::cin, titulo[x]);

            std::cout << "Ingresa el autor del juego " << x + 1 << "\n";
            std::getline(std::cin, autor[x]);

            std::cout << "Ingresa el anio de release del juego " << x + 1 << "\n";
            std::cin >> anio[x];
           
            system("pause");
            system("CLS");
        }

        for (int x = 0; x < 5; x++)
        {
            std::cout<<"------------------------\n";
            std::cout << "Juego "<<x+1<<"\n";
            std::cout << titulo[x] <<"\n";

            std::cout << autor[x] << "\n";

            std::cout << anio[x] << "\n";
            std::cout<<"------------------------\n";
        }

        std::cout << "Si deseas repetir el programa presiona 1\nSi deseas salir presiona cualquier otro numero.\n";
        std::cin >> cont;
        
    } while (cont == 1);
}


