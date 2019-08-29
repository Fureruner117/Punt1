#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(int arg, char** argv){
	int arreglo[10];
	int valor, *puntero;
	puntero=&arreglo[0];
	int mayor=INT_MIN;
	
	
	for (int i=0; i<10; i++){
		cout<<"Ingresa el valor "<<i+1<<" ";
		cin>>arreglo[i];
	}//fin for
	for(int *puntero=&arreglo[0]; puntero<=&arreglo[9]; puntero++){
		if(*puntero>mayor) mayor=*puntero;		
	}
	cout<<"el Mayor es: "<<mayor<<endl;
	system("pause");
	return 0;
}//fin main
