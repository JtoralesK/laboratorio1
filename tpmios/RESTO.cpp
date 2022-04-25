/*Ejercicio:*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){

int cont=1;
while(cont!=0){
int a,b;
int resto;
int cociente;
cout<<"ingresar un numero:";cin>>a;
cont=a;
cout<<"ingresar por cuanto lo queres dividir:";cin>>b;
resto=a%b;
cociente= (a-resto)/b;
cout<<"cociente:"<<cociente<<",resto:"<<resto<<endl;
}

return 0 ;
}
