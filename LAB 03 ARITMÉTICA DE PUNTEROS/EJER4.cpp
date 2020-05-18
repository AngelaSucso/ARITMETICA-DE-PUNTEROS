//Implemente una funci�n que reciba una cadena y retorne su tama�o. (Iterativa y recursiva)

#include <conio.h>
#include <bits/stdc++.h>
using namespace std;
//Funcion Iterativa
int iterativa(char *tam){
	int i=0;
	while(*(tam+i)!=0)
		i++;
	return i;
}
//Funcion recursiva
int recursiva(char *tam,int i=1){
	if (*tam==0) return i;
	return i + recursiva(++tam);
}

int main(){
	char tam[]="Ciencias de la Computacion";		// 26 de tama�o incluyendo espacios
	//Forma iterativa
	printf("%d ",iterativa(tam));	//Esto mostrar� en pantalla el tama�o: 26
	cout<<endl;
	
	//Forma recursiva
	printf("%d ",recursiva(tam)-1);	//Esto mostrar� en pantalla el tama�o: 26
	getch();
	return 0;
}
