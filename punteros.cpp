#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;


int main()
{
	int codigo=0, fila=0,columna=0,**pm_notas;
	int *pc_notas;
	string *pn_notas;
	string nombre;
	
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>fila;	
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>columna;	
	pm_notas = new  int *[fila];
	pc_notas = new int [fila];
	pn_notas = new string [fila];
	for (int i=0;i<fila;i++){
	pm_notas[i] = new int[columna]; 	
	}
	cout<<"--------------Ingrese Notas--------------"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Ingrese el codigo: ";
		cin>>pc_notas[i];
		cin.ignore();
		cout<<"Ingrese el nombre: ";
		getline(cin,pn_notas[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese la Nota "<<++ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
			ii--;
			}
			cout<<"------------------------------------"<<endl;
	}
		cout<<"--------------Mostrar Notas--------------"<<endl;
	for (int i=0;i<fila;i++){
			cout<<"Codigo: ";
			cout<<pc_notas[i]<<endl;
			cout<<"Nombre: ";
			cout<<pn_notas[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Notas "<<++ii<<" : ";
			cout<<*(*(pm_notas+i)+ii)<<endl;
			ii--;
			}
			cout<<"------------------------------------"<<endl;
	}
	// Liberar el espacio reservado en memoria
	for (int i=0;i<fila;i++){
		delete [] pm_notas[i];
	
	}
	delete [] pc_notas;
	delete [] pn_notas;
	delete [] pm_notas;

	system("PAUSE");
	return 0;
}


/* OTRA FORMA DE HACERLO
int main()
{
	int codigo=0, fila=0,columna=0,**pm_notas, **pc_notas;
	char nombres, **pn_notas;
	string nombre;
	
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>fila;	
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>columna;	
	pm_notas = new  int *[fila];
	pc_notas = new int *[codigo];
	pn_notas = new char *[nombres];
	for (int i=0;i<fila;i++){
	pc_notas[i] = new int[columna];
	pn_notas[i] = new char[columna];
	pm_notas[i] = new int[columna]; 	
	}
	cout<<"--------------Ingrese Notas--------------"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Ingrese el codigo: ";
		cin>>*(*(pc_notas+i));
		cin.ignore();
			cout<<"Ingrese el nombre: ";
			cin>>pn_notas[i];
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese la Nota "<<++ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
			ii--;
			}
			cout<<"------------------------------------"<<endl;
	}
		cout<<"--------------Mostrar Notas--------------"<<endl;
	for (int i=0;i<fila;i++){
			cout<<"Codigo: ";
			cout<<*(*(pc_notas+i))<<endl;
			cout<<"Nombre: ";
			cout<<pn_notas[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Notas "<<++ii<<" : ";
			cout<<*(*(pm_notas+i)+ii)<<endl;
			ii--;
			}
			cout<<"------------------------------------"<<endl;
	}
	// Liberar el espacio reservado en memoria
	for (int i=0;i<fila;i++){
		delete [] pm_notas[i];
		delete [] pc_notas[i];
		delete [] pn_notas[i];
	}
	
	delete [] pm_notas;

	system("PAUSE");
	return 0;
}
*/




