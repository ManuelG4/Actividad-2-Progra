#include "Empleado.cpp"
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
       

    
    
	string puesto,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono,codigo_empleado;
	
	cout<<"Ingresar Puesto: ";
	cin>>puesto;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar sus Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar su Direccion: ";
	cin>>direccion;
	cout<<"Ingrese su Codigo de empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingresar su fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//isntancia de un objeto
	Empleado obj = Empleado(nombres,apellidos,direccion,fecha_nacimiento,telefono,puesto,codigo_empleado);
	obj.mostrar();
	
	cout<<"Ingrese puesto: ";
	cin>>puesto;
	obj.setPuesto(puesto);
	obj.mostrar();
	}
