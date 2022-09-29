/*
date:22/09/2022
author: Oscar Alejandro Hernandez Gomez
email:Up210527@alumnos.upa.edu.mx
descriion: programa que calcule la renta

los tramos impositivos para la declaracion de la renta en un determinado país son los siguientes: 

renta tipo impositivo 
menos de $10,000    5%
entre $10,000 y $20,000   15%
entre $20,000 y $35,000   20%
entre $35,000 y $60,000   30%
mas de $60,000            45%
Escribir un programa que pregunte al usuario su renta anual y muestre por pantalla el tipo imnpositivo que le corresponde
*/

#include <iostream>
using namespace std;

int main(){
    int renta;
    float impositivo;
    cout<<"ingrese el valor de la renta anual: ";
    cin>>renta;

    if(renta <=0){
        cout<<"valor no aceptado";
    }else if( renta<10000){
        impositivo = renta*0.05;
        cout<<"se le aplica un 5 porciento de impuesto y su renta total es de: "<<impositivo+renta;
    }else if(renta >=10000 and renta<20000){
        impositivo= renta*0.15;
        cout<<"se le aplica un 15 porciento de impuesto y su renta total es de: "<<impositivo+renta;
    }else if(renta>=20000 and renta<35000){
        impositivo=renta* 0.2;
        cout<<"se le aplica un 20 por ciento de impuesto y su renta total es de: "<<impositivo+renta;
    }else if(renta>=35000 and renta<60000){
        impositivo=renta*0.3;
        cout<<"se le aplica un 30 por ciento de impuesto y su renta total es de: "<<impositivo+renta;
    }else if(renta >=60000){
        impositivo= renta*0.45;
        cout<<"se le aplica un 45 por ciento de impuesto y su renta total es de: "<<impositivo+renta;
    }
    return 0;
}