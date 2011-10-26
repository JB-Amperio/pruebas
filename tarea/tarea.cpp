// tarea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
#include "stdlib.h"

//The Candyman can :)  Tururururu
int main(int argc, char* argv[])
{	
	int n,y,x;
	char r;

	do{
		system("cls");
		cout<<"Número de cantidades a evaluar\n";
		cin>>n;
		y=1;
		cout<<"Entre "<<n<<" cantidades separadas con enter\n";
  		while(y<=n){
			cin>>x;
			if (x%2==0){
				cout<<"Es par\n";
			}else{
				cout<<"Es impar\n";
			}
			y++;
		}
		cout<<"Quiere volver a ejecutar el programa?(s o n)";
		cin>>r;
	}while(r=='s');
	return 0;
}
