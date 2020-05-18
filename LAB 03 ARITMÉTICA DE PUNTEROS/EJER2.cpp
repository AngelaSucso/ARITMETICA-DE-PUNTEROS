//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).

#include <iostream>
#include <conio.h>
using namespace std;
//Funcion iterativa
int *iter(int *array,int n){
	int *e1=new int[n];
	for(int i=0;i<n;i++){
		*(e1+i)=*(array+n-i-1);
	}
	return e1;
}
//Funcion recursiva
void recur(int *array,int n,int *e2,int j){	
	if(n!=0){
		*e2++=*(array+n-1);
		recur(array,n-1,e2,j+1);
	}
	else
		*(e2+j)=*(array+n);
}

int main(){
	int array[]={2,4,6,8,10}; 
	int n=sizeof(array)/sizeof(array[0]);
	
	//Forma iterativa
	int *e1=iter(array,n);
	cout<<"La forma iterativa es: ";
	for(int i=0;i<n;i++){
		cout<<*(e1+i)<<" ";
	}
	//Forma recursiva
	cout<<"\n";
	int e2[n],j=0;
	recur(array,n,e2,j);
	cout<<"La forma recursiva es: ";
	for(int i=0;i<n;i++){
		cout<<*(e2+i)<<" ";
	}
	getch();	
	return 0;
}
