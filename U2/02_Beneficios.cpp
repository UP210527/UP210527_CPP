/*
date: 26/09/22
author:  Oscar Alejandro Hernandez Gomez 
email:Up210427
description: programa que otorga un bono de acuerdo a su calificacion final
*/

#include <iostream>
using namespace std;
int main(){
    
    double calf;
    double bono=2400; 
    
    cout<<"ingresar la calificacion anual\n 0.0, 0.4, 0.6: ";
    cin>> calf;
    
    if( calf==0.0){
        cout<<"De acuerdo a tu calificacion tu bono es de: "<<bono*0.0;
        cout<<"\nRENDIMIENTO INACEPTABLE\n";
    }else if (calf==0.4) {
        cout<<"de acuerdo a tu calificacion tu bono es de:  "<<(bono*0.4);
        cout<<"\nRENDIMIENTO ACEPTABLE\n"; 
    }else if(calf>=0.6){
        cout<<"de acuerdo a tu calificaion tu bono es de: "<<bono*calf;
        cout<<"\nRENDIMIENTO MERITORIO\n";
    }else{
        cout<<"El valor es incorrecto\n";
    }
    return 0; 

}