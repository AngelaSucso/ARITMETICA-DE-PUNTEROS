//Implemente una función que reciba dos cadenas a y b; y copie los elementos de la cadena a para la cadena b.

#include <iostream>
#include <conio.h>
using namespace std;

char *c(char *a,char *b){
	char *temp=a; // temporal
	a=b;
	b=temp;
	return b;
}

int main(){
	char a[]="Cadena para a";
	char b[]="Cadena para b";		
	int tam = sizeof(a)/sizeof(a[0]);
	char *copia=c(a,b);
	
	for(int i=0;i<tam;i++){
		cout<<*copia++;				//Aparecera en pantalla: Cadena para a
	}
	getch();
	return 0;
}
