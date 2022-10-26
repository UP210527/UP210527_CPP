/* 
date: 26/10/22
author: Oscar Alejandro hernandez gomez 
email: UP210527
description: programa que pide una cantidad y desgloza el cambio en billetes y en monedas 
*/


#include <iostream>
using namespace std; 

void obtener monedas(int);
void obtener cambio(int);
void imprimir cambio();

int quinientos = 0, docientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0;

int main(){
  
    int dinero;
    string tipo;

    cout << "Enter the money: ";
    cin >> dinero;
    cout << "Enter type change whit coin or total:";
    cin >> tipo;

    obtenerCambio(dinero, tipo);
    imprimirCambio(tipo);
    return 0;
}


