/*
Date: 18/09/22
Author: Oscar Alejandro Hernandez Gomez 
Email: up210527@alumnos.upa.edu.mx 
Description: data types program
*/

#include <iostream>
#include <stdio.h>
using namespace std; 
int main (){
    int entero = 5; 
    float flotante = 2.565465654654;
    double grande = 2.546546545464845;
    char caracter = 64; 

    cout<<"this program displays the data types";

    cout<<"the whole number is: " <<entero <<"\n";
    cout<<"the size of the integer is: " <<sizeof(entero) <<"byte \n";

    cout<<"the floating number is: " <<flotante <<"\n";
    cout<<"the float size is: " <<sizeof(flotante) <<"byte \n";

    cout<<"the number double is: " <<grande <<"\n";
    cout<<"the double size is: "<<sizeof(grande) <<"byte\n";

    cout<<"el cracter char es: " <<caracter <<"\n";
    cout<<"the char size is: " <<sizeof(caracter) <<"byte\n";

    cout<<"---------------------------------------\n";
    
    printf("usando la funcion printf\n");

    printf("the whole number is: %i \n", entero);
    printf("the floating number is: %3.1f \n", flotante);
    return 0;

}