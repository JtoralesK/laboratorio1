/*Ejercicio:6) Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para
cada una de las cuatros semanas del mes. El programa debe listar la recaudación promedio por
semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación promedio
$ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
float a,b,c,d,total,s1,s2,s3,s4;
cout<<"vendido en la primera semana:";
cin>>a;
cout<<"vendido en la segunda semana:";
cin>>b;
cout<<"vendido en la tercera semana:";
cin>>c;
cout<<"vendido en la cuarta semana:";
cin>>d;
total=a+b+c+d;
s1=(a*100)/total;
s2=(b*100)/total;
s3=(c*100)/total;
s4=(d*100)/total;

cout<<"Porcentajes de ventas de cada una de las semanas "<<endl;
cout<<"primera:%"<<s1<<endl;
cout<<"segunda:%"<<s2<<endl;
cout<<"tercera:%"<<s3<<endl;
cout<<"cuarta:%"<<s4<<endl;


return 0 ;
}
