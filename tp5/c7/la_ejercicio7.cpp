/*Ejercicio:7) Hacer un programa para ingresar los valores de los pesos de distintas encomiendas que
se deben enviar a distintos clientes y que finaliza cuando se ingresa un peso negativo. Se
deben agrupar las encomiendas en camiones que pueden transportar hasta 200 kilos en
total.
Ejemplo: 10, 20, 140/ 70, 100/ 40, 10, 50, 80/ 90, 30, 40/ 50, -10
Camión: 1/ 2 /3 /4/ 5
Se pide determinar e informar:
a) El número de cada camión y peso total de encomiendas. Camión 1: 170 kg, Camión 2:
170 kg, etc.
b) El número de camión que transporta mayor cantidad de encomiendas. En el ejemplo
anterior sería el Camión 3 con 4 encomiendas.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
    bool seguir = true;
    int grupo = 1;
    int cargaSiguiente=0, mayorEncomendero=0,encomiendasGenerales=0;
while(seguir==true){
    cout<<"#Camion "<<grupo<<endl;
    int peso=0,encomiendas=0,ultimaCarga=0;
    while(peso<200 && seguir==true){
        int carga;
        cout<<"ingresar carga:";cin>>carga;

        if(carga>0){
            if(cargaSiguiente>0 && encomiendas==0){
                peso=peso+cargaSiguiente;
            }
            peso=peso+carga;

            if(peso>200){
                ultimaCarga=carga;
            }
            encomiendas++;
        }else{
            seguir=false;
            if(cargaSiguiente>0 && encomiendas==0){
                peso=peso+cargaSiguiente;
            }
        }
    }
    peso=peso-ultimaCarga;
    cout<<"#Camion "<<grupo<<","<<peso<<" kg"<<endl;
    if(cargaSiguiente>0){
        encomiendas++;
    }
    if(ultimaCarga>0){
        cargaSiguiente=ultimaCarga;
        encomiendas--;

    }
    if(grupo==1){
        encomiendasGenerales=encomiendas;
        mayorEncomendero=grupo;
    }else{
        if(encomiendas>encomiendasGenerales){
        encomiendasGenerales=encomiendas;
        mayorEncomendero=grupo;
        }
    }
    grupo++;
}
cout<<"#Camion numero "<<mayorEncomendero<<" tiene el mayor numero de encomiendas, con un numero de "<< encomiendasGenerales<<"encomiendas";
return 0 ;
}
