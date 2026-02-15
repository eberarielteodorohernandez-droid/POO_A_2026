# include <iostream>
using namespace std; 


class persona{
//Atributos
protected :
	string nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
//Constructores
	persona(){
	}
		persona(string nom, string ape, string dir, int tel, string fn){
			nombres = nom;
			apellidos= ape;
			direccion= dir;
			telefono = tel;
			fecha_nacimiento = fn;	
		}
//Metodo CRUD	
	void crear();
	void leer();
	void actualizar();
	void borrar();
};

