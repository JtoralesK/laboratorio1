/*Ejercicio:17) Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas
por un alumno y luego emitir un solo cartel de acuerdo a las siguientes condiciones:
- “Promociona”, si obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int nota1,nota2,nota3,nota4;
cout<<"ingresar primera nota:";
cin>>nota1;
cout<<"ingresar segunda nota:";
cin>>nota2;
cout<<"ingresar tercera nota:";
cin>>nota3;
cout<<"ingresar cuarta nota:";
cin>>nota4;
int condicion1ToFinal = nota1>=4 && nota2>=4 && nota3>=4 ;
int condicion2ToFinal = nota2>=4 && nota3>=4 && nota4>=4 ;
int condicion3ToFinal = nota3>=4 && nota4>=4 && nota1>=4 ;
int condicion4ToFinal = nota4>=4 && nota1>=4 && nota2>=4 ;

if(nota1<4 && nota2<4 && nota3<4 && nota4<4){
    cout<<"Usted recursa la materia"<<endl;

}
if(nota1>=4 || nota2>=4 || nota3>=4 || nota4>=4){

    if(nota1>=7 && nota2>=7 && nota3>=7 && nota4>=7){
    cout<<"Usted promociona la materia"<<endl;

    }else{
        if(condicion1ToFinal||condicion2ToFinal||condicion3ToFinal||condicion4ToFinal){
        cout<<"Usted va a final"<<endl;

        }else{
        cout<<"Usted puede recuperar parciales"<<endl;

        }
    }
}


return 0 ;
}
