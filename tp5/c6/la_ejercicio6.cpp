/*Ejercicio:6) Hacer un programa para ingresar por teclado 5 grupos compuestos por números
ordenados de menor a mayor. El final de cada grupo se detecta al ingresar un número
menor a su anterior.
Se debe obtener y emitir:
a) Para cada uno de los grupos la cantidad de números primos que lo componen. Se informa
1 resultado por cada grupo.
b) El menor número par de cada uno de los grupos. Se informa 1 resultado por cada grupo.
c) El anteúltimo y último número positivo de cada uno de los grupos. Se informan 2
resultados por cada grupo.
Ejemplo de cómo se conforman los grupos:
-20, -5, 8, 2, 20, 35, 42, 12, 22, 23, 7, 12, 18, 23, 80, 12, 24, 36, -5
Grupo 1 Grupo 2 Grupo 3 Grupo 4 Grupo 5
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i;
for(i=1;i<=5;i++){
    cout<<"#grupo "<<i<<endl;
    bool seguir = true;
    int ultimoNumero=0;
    int numerosPrimos=0;
    int ultimoPar=0;
    int v=0;
    int vPar=0;
    int ulti=0,ante=0,vPos=0;
    while(seguir==true){
        int divisores=0;
        int n;
        cout<<"ingresar un numero:";cin>>n;
        if(v==0){
            ultimoNumero=n;
        }else{
            if(n>=ultimoNumero){
                ultimoNumero=n;
            }else{
                seguir=false;
            }
        }
        if(seguir==true){
            v++;
            bool cond=true;
            int x = 0;
            while(cond==true){
            if(n>0){
            x++;
            cond = x<n && divisores<=2;
            }else{
                x--;
                cond = x>n && divisores<=2;

            }
            bool divisor = (n%x)==0;
            if(divisor){
                divisores++;
                }
            }
            if(divisores<=2){
                numerosPrimos++;
            }
            int par = (n%2)==0;
            if(par){
                if(vPar==0){
                    ultimoPar=n;

                }else{
                    if(n<ultimoPar){
                    ultimoPar=n;
                    }
                }
                vPar++;
            }
             if(n>0){
                if(vPos==0){
                    ulti=n;
                    ante=n;

                }else{
                   ante=ulti;
                   ulti=n;
                }
                vPos++;
            }

        }
    }
    cout<<"este grupo tiene "<<numerosPrimos<<" numeros primos"<<endl;
    cout<<"numero par mas chico "<<ultimoPar<<endl;
    cout<<"el ultimo numero positivo: "<<ulti<<endl;
    cout<<"el ANTEultimo numero positivo: "<<ante<<endl;




}

return 0 ;
}
