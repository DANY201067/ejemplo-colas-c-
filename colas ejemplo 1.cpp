#include <iostream>
#include <conio.h>

using namespace std;
  void insertar(void);
  void extraer(void);
  void visualizar(void);
      struct cola{
	  char nombre[20];
	  struct cola *sig;
    }*CAB=NULL,*AUX=NULL,*FIN=NULL;
int main() { 
	char opc;
	do{ 
		system("color 09");
	cout<<"******MENU DE OPCIONES********"<<endl;
	cout<<"1.- Insertar"<<endl;
	cout<<"2.- Extraer"<<endl;
    cout<<"3.- Visualizar la cola"<<endl;
    cout<<"4.- Salir"<<endl;
	cout<<"\n INGRESE OPCION: ";
	cin>>opc;
    switch(opc){
		case '1': insertar( ); 
		cout<<"\n\tCola correctamente ingresado...\n\n";
		break;
        case '2': extraer( ); 
		cout<<"\n\tCola eliminada...\n\n";
		break;
        case '3': visualizar( );
        }system("pause");  system("cls");
    }while (opc!='4');
return 0;
}
void insertar(void){
	AUX=new cola;
    cout<<"Nombre: ";
    cin>>AUX->nombre;
    AUX->sig=NULL;
    if (FIN==NULL)
	FIN=CAB=AUX;
    else{
		FIN->sig=AUX;
        FIN=AUX;
       }
    }
void extraer(void){
	if (CAB==NULL) return;
	AUX=CAB;
	CAB=CAB->sig;
	free(AUX);
	if (CAB==NULL){
		FIN=AUX=NULL;
	}
}
void visualizar(void)
{
	if (CAB==NULL) return;
	AUX=CAB;
	while (AUX!=NULL)
	{
		cout<<"nombre:"<<AUX->nombre<<endl;
		AUX=AUX->sig;
	}
	getch();
}
