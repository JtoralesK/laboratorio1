/*Ejercicio:5) Leer 10 números y guardarlos en un vector. Determinar e informar cual es el menor
de los impares y el mayor de los pares. Suponer que habrá al menos un número par
y uno impar*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i;
int vPares[10];
int vImpares[10];
int cPar=0, cimp=0;
int total=0;
for(i=0;i<10;i++){
    int n;
    cout<<"ingresar un numero:";cin>>n;
    int resto = (n%2)==0;
   if(resto){
    vPares[cPar]=n;
    cPar++;
   }else{
    vImpares[cimp]=n;
    cimp++;
   }
}
int menorImpar=0;
int mayorPares=0;

for(i=0;i<cimp;i++){
    int n= vImpares[i];
  if(menorImpar==0){
    menorImpar=n;
  }else{
    if(n<menorImpar){
        menorImpar=n;
    }
  }
}

for(i=0;i<cPar;i++){
    int n= vPares[i];
  if(mayorPares==0){
    mayorPares=n;
  }else{
    if(n>mayorPares){
        mayorPares=n;
    }
  }
}
cout<<"menor impar:"<<menorImpar<<endl;
cout<<"mayor par:"<<mayorPares<<endl;

return 0 ;
}
