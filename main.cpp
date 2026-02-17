#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	cout<<"ingresar NIT: ";
	cin>>nit;
	cout<<"ingresar Nombres: ";
	cin>>nombres;
	cout<<"ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"ingresar Direccion: ";
	cin>>direccion;
	cout<<"ingresar Telefono: ";
	cin>>telefono;
	cout<<"ingresar Fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	//instancia de un objeto
	cliente obj = cliente(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
	obj.mostrar();
	
	/*cout<<"Ingresar NIT: ";
	cin>>nit;
	obj.setNit(nit);
	cout<<"Datos del Cliente: "<<obj.getNit();
	obj.mostrar();
	*/
	
	/*
	cliente obj = cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.setFechaNacimiento(fecha_nacimiento);
	obj.mostrar();
	*/
	
}