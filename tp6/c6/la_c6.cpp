/*Ejercicio:6) Leer 10 números y guardarlos en un vector. Determinar e informar los dos últimos
números pares en el vector y sus respectivas posiciones en el mismo. Suponer que
habrá al menos dos números pares.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i;
int v[10];
for(i=0;i<10;i++){
   cout<<"ingresar un numero:";cin>>v[i];
}
int primero=0;
int ultimoPar=0;
int ultimoParPosicion=0;
int anteUltimoPar=0;
int anteUltimoParPosicion=0;
for(i=0;i<10;i++){
   int n;
   n=v[i];
   if((n%2)==0 && primero==0){
    ultimoPar=n;
    ultimoParPosicion=i;
    primero++;
   }else{
        if((n%2)==0 && primero>0){
            anteUltimoPar=ultimoPar;
            anteUltimoParPosicion=ultimoParPosicion;
            ultimoPar=n;
            ultimoParPosicion=i;
            primero++;
        }
   }
}
cout<<"ultimo par :"<<ultimoPar<<endl;
cout<<"posicion:"<<ultimoParPosicion<<endl;
cout<<"anteultimo par :"<<anteUltimoPar<<endl;
cout<<"posicion:"<<anteUltimoParPosicion<<endl;

return 0 ;
}
