#include <iostream>
#include <mysql.h>
#include <mysqld_error.h> 
#include "C:/Program Files\MySQL/MySQL Server 8.3/include/mysql.h"	       //Ruta donde se encuenta la bliblioteca mysql.h
#include "C:/Program Files/MySQL/MySQL Server 8.3/include/mysqld_error.h"  //Ruta donde se encuenta la bliblioteca mysql.h

using namespace std;

 MYSQL *objDatos;
int main() {
	
	
int id_codigo_mantenimiento;
char tipo_de_mantenimiento[100];
char fecha_mantenimiento[10];
char descripcion_mantenimiento[400];
char area_mantenimienro[200];

bool ProgramIsOpened =true;
int answer; //to keeo the program opened 

char* consult;
char* sentence;
string sentence_aux; // to add data to the table 

//---------------------------------------------------------
//---------------------------------------------------------
 
// Intentar iniciar MySQL:
  if(!(objDatos = mysql_init(0))){
      // Imposible crear el objeto objDatos
      cout << "ERROR: imposible crear el objeto objDatos." << endl;          
      return 1;
 
};
  
 if(mysql_real_connect(objDatos,"127.0.0.1", "root", "Axe$3128", "db_gsolinera", 3306, NULL, 0))
 {
 	cout<<"Conexion realizada con exito "<<endl;
 	
	
 }
 else
 {
 	cout<<"Conexion fallida \n"<<mysql_error(objDatos);
 }

while (ProgramIsOpened){
	cout<< " Ingrese el codigo del mantenimiento"<<endl;
	cin>>id_codigo_mantenimiento;
	cin.ignore(100, '\n');
	
	cout<<"Ingrese el tipo de mantenimiento que realizo: "<<endl;
	cin.getline(tipo_de_mantenimiento, 100, '\n');
	
	cout<<"Ingrese la fecha en la que se realizo el mantenimiento: "<<endl;
	cin.getline(fecha_mantenimiento, 10, '\n');
	
	cout<<"Ingrese la descripcion del mantenimiento que se realizo: "<<endl;
	cin.getline(descripcion_mantenimiento, 400, '\n');
	
	cout<<"Ingrese el area al que se realizo el mantenimiento: "<<endl;
	cin.getline(area_mantenimienro, 200, '\n');
	cout<<endl;
	
	//setting update
	 
	 sentence_aux = "INSERT INTO Tipo_gasolinera(id_codigo_mantenimiento, tipo_de_mantenimiento, fecha_mantenimiento, descripcion_mantenimiento, area_mantenimienro) VALUES('%d' , '%s' , '%s' , '%s' , '%s')";
	 sentence = new char[sentence_aux.length() + 1];
	 strcpy(sentence, sentence_aux.c_str()); // we coppy our string statement into a char
	 
	 consult= new char[strlen(sentence)+ sizeof(int) + strlen(tipo_de_mantenimiento) +strlen(fecha_mantenimiento) +strlen(descripcion_mantenimiento)+strlen(area_mantenimienro)];
	 sprintf(consult, sentence,id_codigo_mantenimiento,tipo_de_mantenimiento, fecha_mantenimiento, descripcion_mantenimiento, area_mantenimienro); // substitutes %d... into actual values
	 
	 // make our attemp 
	  if(mysql_ping(objDatos))
	  {
	  	cout<<"Imposible conectar"<<endl;
	  	cout<<mysql_error(objDatos)<<endl;
	  }
	  
	  if(mysql_query(objDatos, consult))
	  {
	  	cout<<"error "<<mysql_error(objDatos)<<endl;
	  	rewind(stdin);
	  	getchar();
	  }
	  else
	  {
	  	cout<<"La informacion de guardo correctamente"<<endl;
	  }
	  mysql_store_result(objDatos);
	  
	  cout<<endl<<" Desea ingresar mas informacion?"<<endl;
	  cout<<"1. si"<<endl;
	  cout<<"0. no"<<endl;
	  cin>>answer;
	  cin.ignore(100, '\n');
	  if (answer==0)
	  {
	  	ProgramIsOpened = false;
	  }
	 cout<<endl;
}
	return 0;
}