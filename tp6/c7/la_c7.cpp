/*Ejercicio:7) Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0, 1, 0,
1, 0, 1, 0, 1, 0. Luego mostrar los números por pantalla. EL USUARIO NO
INGRESA NINGUN VALOR EN ESTE PROGRAMA.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i;
int v[10];
bool bandera = true;

for(i=0;i<10;i++){
    if(bandera){
        int n=1;
        v[i]=n;

    }else{
     int n=0;
     v[i]=n;

    }
    bandera= !(bandera);


}
for(i=0;i<10;i++){

cout<<v[i]<<endl;
}
return 0 ;
}
