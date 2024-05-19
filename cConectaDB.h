#include <iostream>
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h"
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysqld_error.h"

using namespace std;
class cConectaDB{
	
//Metodos
public:
void  conecta_base_datos(MYSQL *objDatos);
};


void cConectaDB::conecta_base_datos (MYSQL *objDatos){

if (mysql_real_connect(objDatos, "127.0.0.1", "root", "Axe$3128", "db_gasolinera", 3306, NULL,0)){
	cout<< "conexion exitosa a la base de datos\n";
}
else{
	cout<< "Error al conectarse a la base de datos\n"<<mysql_error(objDatos);
	
}
}
