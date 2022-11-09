 /*
date:22/09/2022
author: Oscar Alejandro Hernandez Gomez
email:Up210527@alumnos.upa.edu.mx
descriion: rent calculator program

The tax brackets for the declaration of income in a certain country are the following:

income tax rate
less than $10,000 5%
between $10,000 and $20,000 15%
between $20,000 and $35,000 20%
between $35,000 and $60,000 30%
more than $60,000 45%
Write a program that asks the user for his annual income and shows on the screen the tax rate that corresponds to him
*/

#include <iostream>
using namespace std;

int main(){
    int renta;
    float impositivo;
    cout<<"enter the value of the annual rent: ";
    cin>>renta;

    if(renta <=0){
        cout<<"unaccepted value";
    }else if( renta<10000){
        impositivo = renta*0.05;
        cout<<"a 5 percent tax is applied and his total income is: "<<impositivo+renta;
    }else if(renta >=10000 and renta<20000){
        impositivo= renta*0.15;
        cout<<"a 15 percent tax is applied and his total income is: "<<impositivo+renta;
    }else if(renta>=20000 and renta<35000){
        impositivo=renta* 0.2;
        cout<<"20 percent tax is levied on him and his total income is: "<<impositivo+renta;
    }else if(renta>=35000 and renta<60000){
        impositivo=renta*0.3;
        cout<<"a 30 percent tax is applied to him and his total income is: "<<impositivo+renta;
    }else if(renta >=60000){
        impositivo= renta*0.45;
        cout<<"45 percent tax is levied on him and his total income is: "<<impositivo+renta;
    }
    return 0;
}