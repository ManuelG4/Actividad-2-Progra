#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	cout <<"\n"<<" ------------------MENU-------------------: ";
    
    cout <<"\n"<<" 1..... CREAR ";
    cout <<"\n"<<" 2..... LEER";
    cout <<"\n"<<" 3..... ACTUALIZAR ";
    cout <<"\n"<<" 4..... BORRAR ";
    
     cout <<"\n"<<"  ";
    
    

    
    char opcion;

    cin >> opcion;

    switch(opcion)

    {
        case '1': cout <<"\n USTED ELIGIO CREAR ";
        }
    
    switch(opcion)

    {
        case '2': cout <<"\n USTED ELIGIO LEER ";
    }
    switch(opcion)

    {
		case '3': cout <<"\n USTED ELIGIO ACTUALIZAR ";
		
		}
		switch(opcion)

    {
		case '4': cout <<"\n USTED ELIGIO BORRAR ";    
	}
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar su fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//isntancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,fecha_nacimiento,telefono,nit);
	obj.mostrar();
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	}
	



    

    
