/*
Date: 13/10/2022
Author: Oscar Alejandro Hernandez Gomez 
Email: up210527@alumnos.upa.edu.mx
Description:Hacer el metodo de la bisección de y=x^2 - x - 12 en un margen de 0.01 al -0.01
*/

#include <iostream>
#include <cmath>


#include <iomanip>

using namespace std;

float resolverEcuacion(float numero)
{
    return (pow(numero, 2) - numero - 12);
}


int imprimirlinea()
{
    for (int i = 0; i < 161; i++)
    {
        cout << "-";
    }
    cout << "\n";
    return 0;
}

int main()
{
    
    int interador = 1;
    int solucion = 1;
    float margen_error = 0.00001;
    float a, b, c, ya, yb, yc;

    
    cout << "Enter the value A: ";
    cin >> a;
    cout << "Enter the value B: ";
    cin >> b;

    
    imprimirlinea();
    cout << "| Interdor \t| a \t\t\t| b \t\t\t| c \t\t\t| y(a)\t\t\t| y(b)\t\t\t| y(c)\t\t\t| \n";
    imprimirlinea();

    do
    {
       
        c = (a + b) / 2;
        ya = resolverEcuacion(a);
        yb = resolverEcuacion(b);
        yc = resolverEcuacion(c);
        
        cout << "| " << interador << "\t\t| " << fixed << setprecision(8) << a << "\t\t| " << b << "\t\t| " << c << "\t\t| " << ya << "\t\t| " << yb << "\t\t| " << yc << "\t\t| \n";
        imprimirlinea();

        if ((ya * yc) < 0)
        {
            b = c;
        }
        else {
            a=c;
        }
        if (a==b){
            solucion = 0;
            break;
        }
        
        interador++;
    } while ( abs(yc)>= margen_error);

    
    if (solucion != 0)
    {
        cout << "The root is :" << c;
        cout << "\n";
    }
    else
    {
        cout << "There is no root in that range. \n";
    }
    return 0;
}