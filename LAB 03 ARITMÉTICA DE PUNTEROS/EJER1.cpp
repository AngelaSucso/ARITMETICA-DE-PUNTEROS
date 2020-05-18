//Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.

#include <iostream>
#include <conio.h>
using namespace std;

//Forma Iterativa
int I(int *ptr,int n){
	int suma=0;
	for(int i=0;i<n;i++){
		suma=suma + *ptr++;
	}
	return suma;
}

//Forma Recursiva
int R(int *ptr,int n){
	if(n==1) return *ptr;
	return *(ptr) + R(++ptr,--n);
}

int main(){
	int array[]={2,4,6,8,10};							//2+4+6+8+10=30
	int *ptr=array,n=sizeof(array)/sizeof(array[0]);
	
	//Forma Iterativa
	cout<<"El resultado iteritivo es: "<<I(ptr,n);
	cout<<"\n";
	
	//Forma Recursiva
	cout<<"El resultado recursivo es: "<<R(ptr,n);
	getch();
	return 0;
}
