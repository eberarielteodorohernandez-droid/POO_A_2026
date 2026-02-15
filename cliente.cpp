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
	
	cliente(string nom,string ape, string dir, int tel, string fn, string n) : persona (nom,ape,dir,tel,fn){
		nit = n ;
		
	}
	void leer(){
		cout<<"nombres"<<nom
	}
};