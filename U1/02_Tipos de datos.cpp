/*
Date: 18/09/22
Author: Oscar Alejandro Hernandez Gomez 
Email: up210527@alumnos.upa.edu.mx 
Description: Programa de tipo de datos 
*/

#include <iostream>
#include <stdio.h>
using namespace std; 
int main (){
    int entero = 5; 
    float flotante = 2.565465654654;
    double grande = 2.546546545464845;
    char caracter = 64; 

    cout<<"este programa muestra los tipos de datos";

    cout<<"el numero entero es: " <<entero <<"\n";
    cout<<"el tamaño del enetero es: " <<sizeof(entero) <<"byte \n";

    cout<<"el numero flotante es: " <<flotante <<"\n";
    cout<<"el tamaño del flotantene es: " <<sizeof(flotante) <<"byte \n";

    cout<<"el numer double es: " <<grande <<"\n";
    cout<<"el tamaño del double es: "<<sizeof(grande) <<"byte\n";

    cout<<"el cracter char es: " <<caracter <<"\n";
    cout<<"el tamaño del char es: " <<sizeof(caracter) <<"byte\n";

    cout<<"---------------------------------------\n";
    
    printf("usando la funcion printf\n");

    printf("el numero entero es: %i \n", entero);
    printf("el numero flotante es: %3.1f \n", flotante);
    return 0;

}