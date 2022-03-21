/*Ejercicio:5) Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de
las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará
e informará A: 50%, B: 12,50% y C: 37,50%.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
float a,b,c,total,pa,pb,pc;
cout<<"Ingresar la cantidad de alfajores vendidos de a:";
cin>>a;
cout<<"Ingresar la cantidad de alfajores vendidos de b:";
cin>>b;
cout<<"Ingresar la cantidad de alfajores vendidos de c:";
cin>>c;
total=a+b+c;
pa=(a*100)/total;
pb=(b*100)/total;
pc=(c*100)/total;
cout<<"Porcentajes de ventas de cada una de ellas "<<endl;
cout<<"a:%"<<pa<<endl;
cout<<"b:%"<<pb<<endl;
cout<<"c:%"<<pc<<endl;

return 0 ;
}
