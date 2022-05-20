/*Ejercicio:5) Se dispone de una lista de 10 grupos de números enteros separados entre ellos por
ceros. Se pide determinar e informar:
a) Informar el promedio de cada grupo. Se informa 1 resultado por cada grupo.
b) Determinar e informar el valor mínimo de todos los grupos, indicando en que grupo se
encontró y su posición relativa en el mismo. Se informan 3 resultados al final.
c) El mayor de los promedios y a que grupo pertenecía. Se informan 2 resultados al final.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
    int i;
    int valorMinimo=0,grupoValor=0,posicion=0;
    int elMayorPromedio=0,grupoPromedio=0;
for(i=1;i<=10;i++){
    cout<<"#grupo "<<i<<endl;
    int n=1;
    int v=0,total=0;
    while(n!=0){
        cout<<"ingresar un numero:";cin>>n;
        if(n!=0){
            total=total+n;
            if(valorMinimo==0){
                valorMinimo=n;
                grupoValor=i;
                posicion=v;
            }else{
                if(n<valorMinimo){
                    valorMinimo=n;
                    grupoValor=i;
                    posicion=v;
                }
            }
            v++;

        }
    }
    float promedio= (float)total/v;
    cout<<"promedio del grupo:"<<promedio<<endl;
    if(elMayorPromedio==0){
        elMayorPromedio=promedio;
        grupoPromedio=i;
    }else{
        if(promedio>elMayorPromedio){
            elMayorPromedio=promedio;
            grupoPromedio=i;
        }
    }
}
cout<<"el valor mas chico entre los grupos:valor "<<valorMinimo<<",su grupo:"<<grupoValor<<",su posicion:"<<posicion<<endl;
cout<<"el grupo con mayor promedio:#grupo "<<grupoPromedio<<",su promedio es de:"<<elMayorPromedio<<endl;

return 0 ;
}
