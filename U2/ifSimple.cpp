/* Unidad 2. Uso del si
   Autor: Oscar Alejandro Hernandez Gomez 
   Fecha: 22/09/2022
   Descripción: Muestra el uso del if simple
*/

// Libreria para manejo de entradas y salida de pantalla
#include <iostream>


// Uso del espacio de nombres para evitar el std::
using namespace std;

// Funcion principal de tipo entero
int main ()
{
   int numero ;
   int dato = 1 ;
 

   cout << " Ingresa un numero entero: " ;
   cin >> numero;
   if (numero == dato){
    cout << " El número es igual a dato \n";
   }
   
   if (numero != dato){
      cout << "el numero es diferente a dato\n";
   }
   if (numero<dato){
      cout<<"el numero es menor a dato\n";
   }
   if (numero>dato){
      cout<< "el numero es mayor a dato\n";
   }
   if (numero<=dato){
      cout<<"el numero es menor o igual a dato\n";
   }
   if (numero>=dato){
      cout<<"el numero es mayor o igual a dato\n";
   }
   return 0;
}