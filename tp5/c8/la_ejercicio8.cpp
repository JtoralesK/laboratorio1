/*Ejercicio:
8) Dada una lista de números compuesta por grupos donde cada grupo está separado del
siguiente por un cero, y la lista de números finaliza cuando se ingresan dos ceros
consecutivos, se pide determinar e informar:
a) La cantidad de grupos en los que se detecten un total de 4 o más números primos
consecutivos. Se informa 1 resultado al final.
b) Para cada uno de los grupos en los que se haya detectado números negativos, el mayor y
el segundo mayor de los mismos y en qué posición estaban dentro del subgrupo. En los
grupos sin negativos, informar “Grupo sin negativos”. Se informan 4 resultados por cada
grupo.
c) El mayor número primo de todos los grupos, informando además en que grupo y en qué
posición del mismo fue detectado. Se informan 3 resultados al final.
Ejemplo de una posible lista: 5, 4, 3, 0, 18, -5, 20, 0, 7, 11, 25, 4, 0, 0.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
    int ultimo=1,i=1;
    bool seguir=false;
    int gruposCon4NumerosPrimos=0;
    int primoMayor=0, primoMayorGrupo=0, primoMayorPosicion=0;
while(seguir==false){
        cout<<"#Grupo " <<i<<endl;
    int n=1,v=1,cantPrimos=0,vn=0,vp=0;
    int menorGrande=0,posicionPri=0,segundoMenorGrande=0,posicionSe=0;
    while(n!=0){
        cout<<"ingresar un numero:";cin>>n;

        if(ultimo==0 && n==0){
            seguir=true;
        }else{
            if(n!=0){
                int x=0,divs=0;
                bool already=true;
                while(already==true){
                    if(n>0){
                        x++;
                        already= x<n && divs<=2;
                    }else{
                     x--;
                     already= x>n && divs<=2;
                    }
                    int resto = (n%x)==0;
                    if(resto){
                        divs++;
                    }
                }
                if(divs<=2){
                    cantPrimos++;
                    if(vp==0 && primoMayor==0){
                        primoMayor=n;
                        primoMayorGrupo=i;
                        primoMayorPosicion=v;
                    }else{
                        if(n>primoMayor){
                        primoMayor=n;
                        primoMayorGrupo=i;
                        primoMayorPosicion=v;
                        }
                    }
                }else{
                    cantPrimos=0;
                }

                if(cantPrimos>=4){
                    gruposCon4NumerosPrimos++;
                    cantPrimos=0;
                }

                if(n<0){
                    if(vn==0){
                        menorGrande=n;
                        posicionPri=v;
                    }else{
                        if(n>menorGrande){
                            segundoMenorGrande=menorGrande;
                            posicionSe=v-1;
                            menorGrande=n;
                            posicionPri=v;
                        }
                        if(n<menorGrande && segundoMenorGrande==0){
                            segundoMenorGrande=n;
                            posicionSe=v;
                        }
                    }
                    vn++;
                }

                v++;

            }

        ultimo=n;

        }
    }
    if(seguir==false){
        if(menorGrande==0 && segundoMenorGrande==0){
            cout<<"en este grupo no hay numeros negativos"<<endl;
        }else{
            if(menorGrande!=0){
                cout<<"negativo mas grande:"<<menorGrande<<endl;
                cout<<"posicion:"<<posicionPri<<endl;
            }
            if(segundoMenorGrande!=0){
                cout<<" SEGUNDO negativo mas grande:"<<segundoMenorGrande<<endl;
                cout<<"posicion:"<<posicionSe<<endl;
            }
        }
    }
    i++;
}

cout<<"hay "<<gruposCon4NumerosPrimos<<" grupos con 4 numeros primos consecutivos"<<endl;
cout<<"primo mayor:"<<primoMayor<<endl;
cout<<"grupo "<< primoMayorGrupo<<endl;
cout<< "posicion "<< primoMayorPosicion<<endl;
return 0 ;
}
