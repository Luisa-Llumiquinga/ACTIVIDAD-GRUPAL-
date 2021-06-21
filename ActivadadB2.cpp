#include<iostream>
using namespace std;
int main()
{
int c=0;
float matriz1[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float matriz2[10]={2.3,4.5,6.5,0.5,6.1,5.5,1.2,2.4,6.5,9.1};
float suma[10],resta[10],producto[10],division[10];

//MODIFICACION HECHA POR LUISA LLUMIQUINGA//MOSTRAR LAS MATRICES Y SUMARLAS//

cout<<"||--MATRIZ_1--||"<<endl;
for (c=0;c<10;c++){
	cout<<matriz1 [c] ;
}
cout<<endl<<endl<<"||--MATRIZ_2--||"<<endl;
for (c=0;c<10;c++){
	cout<<matriz2[c];
}
cout<<endl<<endl;
// LLENAR LA MATRIZ SUMA CON LA SUMA DE CADA UNO DE LOS ELEMENTOS DE LA MATRIZ1 Y LA MATRIZ2//

cout<<"\||--SUMA DE MATRICES 1 y 2--||"<<endl;

for (c=0;c<10;c++){
	suma[c]=matriz1[c]+matriz2[c];
}
for (c=0;c<10;c++){
	cout<<suma[c]<<" ";
	cout<<endl;
}
cout<<endl<<endl;

//LLENAR LA MATRIZ DIVISION CON LA DIVISION DE CADA UNO DE LOS ELEMENTOS DE LA MATRIZ1 Y LA MATRIZ2// 
cout << "\ || --DIVISION DE MATRICES 1 Y 2-- ||" << endl ;

for( c=0: c<10; c++)
{
	división [c] = matriz1 [c] / matriz2 [c];
}
for(c=0;c<10;c++)
{
	cout<< división [c] << "";
	cout<< endl ;
}
cout<< endl << endl ;

return 0;


}
