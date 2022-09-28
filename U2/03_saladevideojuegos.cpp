/*
date: 28/09/2022
author: Oscar Alejandro Hernandez Gomez 
email: up210527@alumnos.upa.edu.mx
Description: program that returns a price according to your age 
*/

#include <iostream>
using namespace std; 
int main(){
 int edad;
 cout<<"ingresa la edad de la persona a ingresar: ";
 cin>> edad; 
 if(edad>0 and edad< 4){
    cout<<"De acuerdo a su edad la persona entra gratis\n";
 } else if (edad>=4 and edad<=18){
    cout<<"De acuerdo a su edad la persona debe de pagar $5\n";
 }else if(edad>18){
    cout<<"De acuerdo a su edad la persona debe de pagar $10\n";
 }else{
 cout<<"Dato erroneo";
}
return 0; 
}