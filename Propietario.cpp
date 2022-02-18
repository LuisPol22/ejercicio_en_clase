#include<iostream>
#include "Propietario.cpp"

using namespace std;

class propietario:Persona {
	
	private: string nit;
	
	
	public:
		propietario(){
			
		}
		
		propietario(string nom, string ape, string dir,string fnac, int tel,string n,int cui): Persona(nom,ape,dir,fnac,tel){
			nit = n;
			cui = c
		}
		

	//get mostrar
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFnacimineto(){return fnacimiento;}
	int getTelefono(){return telefono;}
	
		
	//metodos	
		
	void mostrar (){
		cout<<"___________"<<endl;
		cout<<nit<<";"<<cui<<";"<<nombres<<";"<<apellidos<<";"<<direccion<<fnacimiento<<";"<<";"<<telefono<<endl;
	}
};

