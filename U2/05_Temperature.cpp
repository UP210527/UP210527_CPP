/*
date: 03/10/2022
author: Oscar Alejandro Hernandez Gomez
email:up210527@alumnos.upa.edu.mx
description: program that ask the 6 temperature 
*/

#include <iostream>
using namespace std; 

int main(){
    float temperature, average, high, low, suma=0; 
    int i=0;
    while(i!=6){
        cout<<"enter a temperature: \n";
        cin>>temperature;
        suma+=temperature;
        if(i=0){
            high=temperature;
            low=temperature;
        }
        if(temperature<low){
            low=temperature;
        }else if(temperature>high){
            high=temperature;
        }
        temperature=0;
        i++;
    }
    average=suma/6;
    cout<<"the average temperature is " <<average <<"\n";
    cout<<"the highest temperature is " <<high<< "\n";
    cout<<"the lowest temperature is "  <<low<< "\n";
}