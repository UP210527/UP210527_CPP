/* Unidad 1. Entrada de datos
   Autor: Oscar Alejandro Hernandez Gomez 
   Fecha: 21/09/2022
   Descripción: Shows how to enter data types by the user
*/

//Library for managing screen inputs and outputs
#include <iostream>
//Library for the use of printf and scanf
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//integer main function
int main()
{
    int entero;
    float flotante;
    double grande;
    char caracter;

cout << "This program shows the input of data by the user. \n";
    cout << "Enter an integer data type: ";
    cin >> entero;
    cout << "The entered data is: " << entero << endl;

    cout << "=================" << endl;

    printf("Using the printf and scanf function\n");
    printf("Enter an integer data type: ");
    scanf("%d", &entero);
    printf("The data entered is:  %i \n", entero);

    //Being a function it must return a value, in this case 0
    return 0;
}
