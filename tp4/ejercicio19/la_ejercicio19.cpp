/*Ejercicio:19) Se define a un n�mero como primo cuando tiene solamente dos divisores: el n�mero 1
y el n�mero en s� mismo. Todo n�mero que tenga otros divisores adicionales al 1 y al
n�mero en s� mismo, son n�meros No Primos.
Ejemplo 1: 2, 7, 11, 13 son n�meros primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Favor de no confundir n�mero primo con n�mero impar. Son dos conceptos
diferentes. El 9 no es primo. El 13 si es primo. Sin embargo, ambos son impares.
Hacer un programa para ingresar un n�mero y luego informar con un cartel aclaratorio si el
mismo es un n�mero primo o es n�mero no primo.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ingresar un numero:";cin>>n;
    int div=0,i=1;

        while(div<=2 && i<(n+1)){
                cout<<div<<endl;
                int res=n%i;
                if(res==0){
                    div++;
                }
            i++;
        }
        cout<<div<<endl;

        if(div>2){
        cout<<"es compuesto";

        }else{
        cout<<"es primo";

        }


return 0 ;
}
