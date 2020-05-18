//Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.

#include <conio.h>
#include <iostream>
#define MAX 18
using namespace std;

void c(char *a,char *b){
	int i=0,j=0;
	while(*(a+i)!= 0 || *(b+j)!= 0){
		if(*(a+i)!= 0) i++;
		if(*(b+j)!= 0) j++;
	}
	
	for(int c=0;c<i;c++){
		*(b+j)=*(a+c);
		j++;
	}
}

int main(){
	char a[]="Cadena a";
	char b[MAX]="Cadena b ";
	c(a,b);
	
	cout<<b<<"\n"; //Aparecera en pantalla: Cadena b Cadena a
	getch();
	return 0;
}
