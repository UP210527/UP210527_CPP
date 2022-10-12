/*
date: 12/10/2022
author: Oscar Alejandro Hernandez Gomez
email:up210527@alumnos.upa.edu.mx
description: program to ask a number and a limit to give the result of the multiplication
*/

#include <iostream>
using namespace std; 

int main(){
    int numero, multi, i,limite;
    cout<<"enter a number: ";
    cin>>numero; 
    cout<<"enter a limit: ";
    cin>>limite; 

    cout<<"------------------------------------------------\n";

    for(i=1; i<=limite;i++){
        multi= numero*i;
        cout<<"|\t" <<i <<"\tx\t" <<numero <<"\t=\t" <<multi <<"\t|\n";
         cout<<"------------------------------------------------\n";
    }
    return 0; 
}