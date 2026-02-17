# include "persona.cpp"
# include <iostream>
using namespace std; 

class cliente : persona{
	//atributos
	private :
		string nit;
	//constructor
	public : 
	cliente (){
	}
	
	cliente(string nom,string ape,string dir,int tel,string fn,string n) : persona (nom,ape,dir,tel,fn){
		nit = n ;
		
	}
	//metodos
	//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}
	void setFechaNacimiento(string fn){fecha_nacimiento = fn;}
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFechaNacimiento(){return fecha_nacimiento;}
	//metodos
	void mostrar(){
		cout <<"__________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
		
		
	}
};