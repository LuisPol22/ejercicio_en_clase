#include <iostream>
#include <string.h>
using namespace std;
class Persona{

	protected : string nombres, apellidos, direccion,fnacimiento;
				int telefono;

	protected:
		Persona(){
			
		}
			Persona(string nom, string ape, string dir,string fnac, int tel){
				nombres=nom;
				apellidos=ape;
				direccion=dir;
				fnacimiento=fnac;
				telefono-tel;
			
		}


	void mostrar();
 };
 
