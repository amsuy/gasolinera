#include <iostream>
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysql.h"	       //Ruta donde se encuenta la bliblioteca mysql.h
#include "C:/Program Files/MySQL/MySQL Server 8.0/include/mysqld_error.h"  //Ruta donde se encuenta la bliblioteca mysql.h
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
using namespace std;

 class data{

public:

//------------------AREA DE ADMINISTRADOR------------------

// clave administrador por defecto
void verificadoradministrador() {
    	string meic;
    	string user;
    	int pass;
    	system("cls");
        	cout << "\n ---VERIFICACION DE INGRESO---" << endl;
        cout << "Ingresa Tu Usuario" << endl;
        cin >> user;
        cout << "Ingresa Tu Password" << endl;
        cin >> pass;

        if (user == meic || pass == 1234) {
            cout << "\n Bienvenido Administrador" << endl;
            system("pause");
            system("cls");
        
        }else{
        	cout<<"ACCESO DENEGADO"<<endl;
        	system("pause");
        	system("cls");
        	menu_auxiliar_admin();
		}
			
}

// menu de administrador   
void menuadministrador(){
	setlocale(LC_ALL, "");
	char continuar = 's';
	do {
		system("cls");// solo funciona en windows
		setlocale(LC_ALL, "");
        int menuadmin;
        cout<<"\n-------------------------------------"<<endl;
        cout<<"1) Crear Usuario a Consultas"<< endl;
        cout<<"2) Consultar Usuarios de Consultas"<< endl;
        cout<<"3) Borrar Usuario de Consultas"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"4) Crear Usuario a Ventas"<<endl;
        cout<<"5) Consultar Usuario de Ventas"<<endl;
        cout<<"6) Borrar Usuario de Ventas"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"7) Crear Usuario a Mantenimiento"<<endl;
        cout<<"8) Consultar Usuario de Mantenimiento"<<endl;
        cout<<"9) Borrar Usuario de Mantenimiento"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"10) Crear Usuario a Pedido"<<endl;
        cout<<"11) Consultar Usuario de Pedido"<<endl;
        cout<<"12) Borrar Usuario de Pedido"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"13) Crear Usuario a Abastecimiento"<<endl;
        cout<<"14) Consultar Usuario de Abastecimiento"<<endl;
        cout<<"15) Borrar Usuario de Abastecimiento"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"16) Salir del Menu de Administrador"<<endl;
        cout<<"17) Salir del Sistema"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<< "Elije una Opcion: ";
        cin>>menuadmin;
        switch (menuadmin) {
        case 1:
        system("cls");// solo funciona en windows
        crear_usuario_consulta();
        cout << "" << endl;
        break;
        //-----------------
        case 2:
        system("cls");// solo funciona en windows
        consultar_usuarios_area_consultas();
        cout<<""<<endl;
        break;
        //-----------------
        case 3:
        system("cls");// solo funciona en windows
        borrar_usuario_consultas();
		cout<<""<<endl;	
        break;
        //-----------------
        case 4:
        system("cls");// solo funciona en windows
        crear_usuario_ventas();
		cout<<""<<endl;	
        break;
        //-----------------
        case 5:
        system("cls");// solo funciona en windows
        consultar_usuarios_area_ventas();
		cout<<""<<endl;	
        break;
        //-----------------
        case 6:
        system("cls");// solo funciona en windows
        borrar_usuario_ventas();
		cout<<""<<endl;	
        break;
        //-----------------
        case 7:
        system("cls");// solo funciona en windows
        crear_usuario_mantenimiento();
        break;
        //-----------------
        case 8:
        system("cls");// solo funciona en windows
        consultar_usuarios_area_mantenimiento();
        break;
        //-----------------
        case 9:
        system("cls");// solo funciona en windows
        borrar_usuario_mantenimiento();	
        break;
        //-----------------
        case 10:
        system("cls");// solo funciona en windows
        crear_usuario_pedido();
        break;
        //-----------------
        case 11:
        system("cls");// solo funciona en windows
        consultar_usuarios_area_pedido();
        break;
        //-----------------
        case 12:
        system("cls");// solo funciona en windows
        borrar_usuario_pedido();
        break;
        //-----------------
        case 13:
        system("cls");// solo funciona en windows
        crear_usuario_abas();
        break;
        //-----------------
        case 14:
        system("cls");// solo funciona en windows
        consultar_usuarios_area_abas();	
        break;
        //-----------------
        case 15:
        system("cls");// solo funciona en windows
        borrar_usuario_abas();
        break;
        //-----------------
        case 16:
        return;	
        break;
        //-----------------
        case 17:
        cout<<"\n---ADIOS---"<<endl;
        exit(0);
        break;
        //-----------------
        default:
        cout << "Opcion Invalida" << endl;
        exit(0);
        }
        cout << "\n Deseas Volver al Menu de Admistrador (S/N)" << endl;
        cin >> continuar;
        if (continuar == 's' || continuar == 'S') {
        cout << "Volviendo al Menu de Administrador" << endl;
        system("pause");
        } else{
        cout << "Gracias pot utilizar nuestro sistema" << endl;
        exit(0);
        }
        system("cls");// solo funciona en windows
        } while (true);
}	

void Datomenu(){
	do{
		int opc;
		system("cls");
		cout<<"1) Ingresar Datos\n";
		cout<<"2) Consultar Datos\n";
		cout<<"3) Borrar Datos\n";
		cout<<"4) Salir\n";
		cout<<"Ingresa la opcion a Realizar"<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				cout<< "Aun no hay nada para realizar";
				break;
			case 2:
				cout<< "Aun no hay nada para realizar";
				break;
			case 3:
				cout<< "Aun no hay nada para realizar";
				break;
			case 4:
				return;
		}
	}while(true);
}	

void ReporteDato(){
	do{
		int opc;
		system("cls");
		cout<<"1) Existencia de Combustible ID\n";
		cout<<"2) Pedido y Ventas ID\n";
		cout<<"3) Kardex (Filtro por fecha  y ID combustible)\n";
		cout<<"4) Suministro y Distribuciion en Contenedores\n";
		cout<<"5) Filtrar por ID de contenedor y Rango de fechas\n";
		cout<<"6) Salir\n";
		cout<<"Ingrese la opcion a Realizar"<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				Datomenu();
				break;
			case 2:
				Datomenu();
				break;
			case 3:
				Datomenu();
				break;
			case 4:
				Datomenu();
				break;
			case 5:
				Datomenu();
				break;
			case 6:
				return;
		}
	}while(true);
	
}
	
// MENU AUXILIAR DE ADMISTRADOR
void menu_auxiliar_admin(){	
MYSQL *objDatos;
setlocale(LC_ALL, "");
char continuar = 's';
if(!(objDatos = mysql_init(0))) {
      // Imposible crear el objeto objDatos
      cout << "ERROR: imposible crear el objeto objDatos." << endl;          
      exit(1);

};
  
 if(mysql_real_connect(objDatos,"127.0.0.1", "root", "Axe$3128", "db_gasolinera", 3306, NULL, 0))
 {
 	cout<<"\n -----GASOLINERA UMG-----"<<endl;
	
 }
 else
 {
 	cout<<"Conexion fallida \n"<<mysql_error(objDatos);
 }
    do {
        int opcion;
        cout<<"***Bienvenidos***"<< endl;
        cout<<"1) Administrador"<< endl;
        cout<<"2) Consultas"<< endl;
        cout<<"3) Ventas"<< endl;
        cout<<"4) Mantenimiento"<<endl;
        cout<<"5) Pedido"<<endl;
        cout<<"6) Abastecimiento"<<endl;
        cout<<"7) Salir del Sistema"<< endl;
        cout<<"Elije una Opcion: ";
        cin>> opcion;

        switch (opcion) {
        case 1:
            verificadoradministrador();
            cout<<""<<endl;
            menuadministrador();
            break;
        //----------------------
			case 2:
            iniciar_sesion_consulta();
            cout << "" << endl;
            menu_area_consultas();
            break;
        //----------------------
        case 3:
        	iniciar_sesion_ventas();
        	cout << "" << endl;
            menu_area_ventas();
            break;
        //----------------------
        case 4:
        	iniciar_sesion_mantenimiento();
            cout << "" << endl;
            menu_area_mantenimineto();
            break;
        //----------------------
        case 5:
          iniciar_sesion_pedido();
          cout << "" << endl;
          menu_area_pedido(); 
          break;
        //----------------------
        case 6:
          iniciar_sesion_abas();
          cout << "" << endl;
          menu_area_abastecimiento();
	      break;	
        //----------------------
        case 7:
            cout << "\n Gracias por utilizar nuestro sistema" << endl;
            cout << "Hasta Luego" << endl;
            exit(0);
        default:
            cout << "\n Opcion Incorrecta" << endl;
            break;
        }
        cout << "\n Deseas Volver al Menu Principal (S/N)" << endl;
        cin >> continuar;
        if (continuar == 's' || continuar == 'S') {
            cout << "Volviendo al Menu Principal" << endl;
            system("pause");
        } else {
            cout << "Gracias por utilizar nuestro sistema" << endl;
            exit(0);
        }
        system("cls");
    } while (true);		
}	
	
		
	
//--------------------------AREA DE CONSULTAS--------------------------

// verificar si un usuario ya existe en consultas
    bool usuario_existe_consulta(string usuario) {
        ifstream archivo("usuariosconsulta.txt");
        string usuarioGuardado, contrasenaGuardada;
        while (archivo >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario == usuarioGuardado) {
                archivo.close();
                return true;
            }
        }
        archivo.close();
        return false;
    }

// creador de usuario y contrase+地 de consultas
    void crear_usuario_consulta() {
        string usuario, contrasena;
        cout << "Ingrese el nombre de usuario: ";
        cin >> usuario;

        if (usuario_existe_consulta(usuario)) {
            cout << "El usuario ya existe." << endl;
            return;
        }

        cout << "Ingrese la contrase+地: ";
        cin >> contrasena;

        ofstream archivo("usuariosconsulta.txt", ios::app);
        archivo << usuario << " " << contrasena << endl;
        archivo.close();

        cout << "Usuario y password creado exitosamente." << endl;
    }

    // Iniciar sesion de Consultas
    void iniciar_sesion_consulta() {
    string usuario, contrasena;
    cout << "Ingrese el nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese la contrase?a: ";
    cin >> contrasena;

    ifstream archivo("usuariosconsulta.txt");
    string usuarioGuardado, contrasenaGuardada;
    bool encontrado = false;
    while(archivo >> usuarioGuardado >> contrasenaGuardada) {
        if (usuario == usuarioGuardado && contrasena == contrasenaGuardada) {
            encontrado = true;
            cout << "\n檨ienvenido " << usuario << "!" << endl;
            break; // Salir del bucle una vez que se haya encontrado una coincidencia
        }
    }
    archivo.close();

    if (!encontrado) {
        cout << "\nNombre de usuario o contrase?a incorrectos." << endl;
        system("pause");
        system("cls");
        menu_auxiliar_admin();
    }
    }

// Consultador de usuario del area de consultas
void consultar_usuarios_area_consultas(){
        ifstream archivo("usuariosconsulta.txt");
        string usuario, contrasena;
        cout << "Usuarios registrados:" << endl;
        while (archivo >> usuario >> contrasena) {
            cout << "Usuario: " << usuario << ", Contrase+地: " << contrasena << endl;
        }
        archivo.close();
    }
    
// funcion para borrar usuarios para el area de consultas    
 void borrar_usuario_consultas() {
        string usuario;
        cout << "Ingrese el nombre de usuario a borrar: ";
        cin >> usuario;

        ifstream archivoEntrada("usuariosconsulta.txt");
        ofstream archivoSalida("temp.txt");

        string usuarioGuardado, contrasenaGuardada;
        bool encontrado = false;
        while (archivoEntrada >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario != usuarioGuardado) {
                archivoSalida << usuarioGuardado << " " << contrasenaGuardada << endl;
            } else {
                encontrado = true;
            }
        }
        archivoEntrada.close();
        archivoSalida.close();

        remove("usuariosconsulta.txt");
        rename("temp.txt", "usuariosconsulta.txt");

        if (encontrado) {
            cout << "Usuario borrado correctamente." << endl;
        } else {
            cout << "El usuario no existe." << endl;
        }
    }

// menu de area de consultas
void menu_area_consultas(){
	cout<<"\n AUN NO ESTA DISPONIBLE ESTE MENU"<<endl;
	cout<<"TEN PACIENCIA, PROXIMANETE ESTARA DISPONIBLE"<<endl;
}


//-------------------------AREA DE MANTENIMIENTO-------------------------

// menu de area de matenimiento
void menu_area_mantenimineto(){
	cout<<"\n AUN NO ESTA DISPONIBLE ESTE MENU"<<endl;
	cout<<"TEN PACIENCIA, PROXIMANETE ESTARA DISPONIBLE"<<endl;
}

// verificar si un usuario ya existe en el area de mantenimiento
    bool usuario_existe_mantenimiento(string usuario) {
        ifstream archivo("usuariosmatenimiento.txt");
        string usuarioGuardado, contrasenaGuardada;
        while (archivo >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario == usuarioGuardado) {
                archivo.close();
                return true;
            }
        }
        archivo.close();
        return false;
    }

// creador de usuario y contrase+地 de area de mantenimiento
    void crear_usuario_mantenimiento() {
        string usuario, contrasena;
        cout << "Ingrese el nombre de usuario: ";
        cin >> usuario;

        if (usuario_existe_mantenimiento(usuario)) {
            cout << "El usuario ya existe." << endl;
            return;
        }

        cout << "Ingrese la contrase+地: ";
        cin >> contrasena;

        ofstream archivo("usuariosmantenimiento.txt", ios::app);
        archivo << usuario << " " << contrasena << endl;
        archivo.close();

        cout << "Usuario y password creado exitosamente." << endl;
    }

    // Iniciar sesion del area de mantenimiento
    void iniciar_sesion_mantenimiento() {
        string usuario, contrasena;
    cout << "Ingrese el nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese la contrase?a: ";
    cin >> contrasena;

    ifstream archivo("usuariosmantenimiento.txt");
    string usuarioGuardado, contrasenaGuardada;
    bool encontrado = false;
    while(archivo >> usuarioGuardado >> contrasenaGuardada) {
        if (usuario == usuarioGuardado && contrasena == contrasenaGuardada) {
            encontrado = true;
            cout << "\n檨ienvenido " << usuario << "!" << endl;
            break; // Salir del bucle una vez que se haya encontrado una coincidencia
        }
    }
    archivo.close();

    if (!encontrado) {
        cout << "\nNombre de usuario o contrase?a incorrectos." << endl;
        system("pause");
        system("cls");
        menu_auxiliar_admin();
    }
    }

// Consultador de usuario del area de mantenimiento
void consultar_usuarios_area_mantenimiento(){
        ifstream archivo("usuariosmantenimiento.txt");
        string usuario, contrasena;
        cout << "Usuarios registrados:" << endl;
        while (archivo >> usuario >> contrasena) {
            cout << "Usuario: " << usuario << ", Contrase+地: " << contrasena << endl;
        }
        archivo.close();
    }
    
// funcion para borrar usuarios para el area de mantenimiento  
 void borrar_usuario_mantenimiento() {
        string usuario;
        cout << "Ingrese el nombre de usuario a borrar: ";
        cin >> usuario;

        ifstream archivoEntrada("usuariosmantenimiento.txt");
        ofstream archivoSalida("temp.txt");

        string usuarioGuardado, contrasenaGuardada;
        bool encontrado = false;
        while (archivoEntrada >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario != usuarioGuardado) {
                archivoSalida << usuarioGuardado << " " << contrasenaGuardada << endl;
            } else {
                encontrado = true;
            }
        }
        archivoEntrada.close();
        archivoSalida.close();

        remove("usuariosmantenimiento.txt");
        rename("temp.txt", "usuariosmantenimiento.txt");

        if (encontrado) {
            cout << "Usuario borrado correctamente." << endl;
        } else {
            cout << "El usuario no existe." << endl;
        }
    }

//-------------------------AREA DE PEDIDO-------------------------

// menu de area de pedido
void menu_area_pedido(){
	cout<<"\n AUN NO ESTA DISPONIBLE ESTE MENU"<<endl;
	cout<<"TEN PACIENCIA, PROXIMANETE ESTARA DISPONIBLE"<<endl;
}

// verificar si un usuario ya existe en el area de pedido 
    bool usuario_existe_pedido(string usuario) {
        ifstream archivo("usuariospedido.txt");
        string usuarioGuardado, contrasenaGuardada;
        while (archivo >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario == usuarioGuardado) {
                archivo.close();
                return true;
            }
        }
        archivo.close();
        return false;
    }

// creador de usuario y contrase+地 de area de pedido 
    void crear_usuario_pedido() {
        string usuario, contrasena;
        cout << "Ingrese el nombre de usuario: ";
        cin >> usuario;

        if (usuario_existe_pedido(usuario)) {
            cout << "El usuario ya existe." << endl;
            return;
        }

        cout << "Ingrese la contrase+地: ";
        cin >> contrasena;

        ofstream archivo("usuariospedido.txt", ios::app);
        archivo << usuario << " " << contrasena << endl;
        archivo.close();

        cout << "Usuario y password creado exitosamente." << endl;
    }

    // Iniciar sesion del area de pedido
void iniciar_sesion_pedido() {
    string usuario, contrasena;
    cout << "Ingrese el nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese la contrase?a: ";
    cin >> contrasena;

    ifstream archivo("usuariospedido.txt");
    string usuarioGuardado, contrasenaGuardada;
    bool encontrado = false;
    while(archivo >> usuarioGuardado >> contrasenaGuardada) {
        if (usuario == usuarioGuardado && contrasena == contrasenaGuardada) {
            encontrado = true;
            cout << "\n檨ienvenido " << usuario << "!" << endl;
            break; // Salir del bucle una vez que se haya encontrado una coincidencia
        }
    }
    archivo.close();

    if (!encontrado) {
        cout << "\nNombre de usuario o contrase?a incorrectos." << endl;
        system("pause");
        system("cls");
        menu_auxiliar_admin();
    }
}

// Consultador de usuario del area de pedido
void consultar_usuarios_area_pedido(){
        ifstream archivo("usuariospedido.txt");
        string usuario, contrasena;
        cout << "Usuarios registrados:" << endl;
        while (archivo >> usuario >> contrasena) {
            cout << "Usuario: " << usuario << ", Contrase+地: " << contrasena << endl;
        }
        archivo.close();
    }
    
// funcion para borrar usuarios para el area de pedido  
 void borrar_usuario_pedido() {
        string usuario;
        cout << "Ingrese el nombre de usuario a borrar: ";
        cin >> usuario;

        ifstream archivoEntrada("usuariospedido.txt");
        ofstream archivoSalida("temp.txt");

        string usuarioGuardado, contrasenaGuardada;
        bool encontrado = false;
        while (archivoEntrada >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario != usuarioGuardado) {
                archivoSalida << usuarioGuardado << " " << contrasenaGuardada << endl;
            } else {
                encontrado = true;
            }
        }
        archivoEntrada.close();
        archivoSalida.close();

        remove("usuariospedido.txt");
        rename("temp.txt", "usuariospedido.txt");

        if (encontrado) {
            cout << "Usuario borrado correctamente." << endl;
        } else {
            cout << "El usuario no existe." << endl;
        }
    }

//------------------------------AREA DE VENTAS------------------------------

// menu de area de ventas
void menu_area_ventas(){
	cout<<"\n AUN NO ESTA DISPONIBLE ESTE MENU"<<endl;
	cout<<"TEN PACIENCIA, PROXIMANETE ESTARA DISPONIBLE"<<endl;
}

// verificar si un usuario ya existe en el area de ventas
    bool usuario_existe_ventas(string usuario) {
        ifstream archivo("usuariosventas.txt");
        string usuarioGuardado, contrasenaGuardada;
        while (archivo >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario == usuarioGuardado) {
                archivo.close();
                return true;
            }
        }
        archivo.close();
        return false;
    }

// creador de usuario y contrase+地 de area de ventas
    void crear_usuario_ventas() {
        string usuario, contrasena;
        cout << "Ingrese el nombre de usuario: ";
        cin >> usuario;

        if (usuario_existe_ventas(usuario)) {
            cout << "El usuario ya existe." << endl;
            return;
        }

        cout << "Ingrese la contrase+地: ";
        cin >> contrasena;

        ofstream archivo("usuariosventas.txt", ios::app);
        archivo << usuario << " " << contrasena << endl;
        archivo.close();

        cout << "Usuario y password creado exitosamente." << endl;
    }

    // Iniciar sesion del area de ventas
    void iniciar_sesion_ventas() {
    string usuario, contrasena;
    cout << "Ingrese el nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese la contrase?a: ";
    cin >> contrasena;

    ifstream archivo("usuariosventas.txt");
    string usuarioGuardado, contrasenaGuardada;
    bool encontrado = false;
    while(archivo >> usuarioGuardado >> contrasenaGuardada) {
        if (usuario == usuarioGuardado && contrasena == contrasenaGuardada) {
            encontrado = true;
            cout << "\n檨ienvenido " << usuario << "!" << endl;
            break; // Salir del bucle una vez que se haya encontrado una coincidencia
        }
    }
    archivo.close();

    if (!encontrado) {
        cout << "\nNombre de usuario o contrase?a incorrectos." << endl;
        system("pause");
        system("cls");
        menu_auxiliar_admin();
    }
}

// Consultador de usuario del area de ventas
void consultar_usuarios_area_ventas(){
        ifstream archivo("usuariosventas.txt");
        string usuario, contrasena;
        cout << "Usuarios registrados:" << endl;
        while (archivo >> usuario >> contrasena) {
            cout << "Usuario: " << usuario << ", Contrase+地: " << contrasena << endl;
        }
        archivo.close();
    }
    
// funcion para borrar usuarios para el area de ventas 
 void borrar_usuario_ventas() {
        string usuario;
        cout << "Ingrese el nombre de usuario a borrar: ";
        cin >> usuario;

        ifstream archivoEntrada("usuariosventas.txt");
        ofstream archivoSalida("temp.txt");

        string usuarioGuardado, contrasenaGuardada;
        bool encontrado = false;
        while (archivoEntrada >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario != usuarioGuardado) {
                archivoSalida << usuarioGuardado << " " << contrasenaGuardada << endl;
            } else {
                encontrado = true;
            }
        }
        archivoEntrada.close();
        archivoSalida.close();

        remove("usuariosventas.txt");
        rename("temp.txt", "usuariosventas.txt");

        if (encontrado) {
            cout << "Usuario borrado correctamente." << endl;
        } else {
            cout << "El usuario no existe." << endl;
        }
    }

//-------------------------AREA DE ABASTECIMIENTO-------------------------

// menu de area de abastecimiento
void menu_area_abastecimiento(){
	int opcion;
	do{
		system("cls");
		cout<<"\n MENU ABASTECIMIENTO"<<endl;
		cout<<" 1) Tipo de Combustible\n";
		cout<<" 2) Contenedores, Unidades de Medida\n";
		cout<<" 3) ID Cliente\n";
		cout<<" 4) ID Proveedores\n";
		cout<<" 5) Pedidos y ventas\n";
		cout<<" 6) Suministro y Distribucione en contenedores (Kardex)\n";
		cout<<" 7) REPORTES\n";
		cout<<" 8) Salir"<<endl;
		cout<<"Ingrese la opcion a realizar"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:
				Datomenu();
				break;
			case 2:
				Datomenu();
				break;
			case 3:
				Datomenu();
				break;
			case 4:
				Datomenu();
				break;
			case 5:
				Datomenu();
				break;
			case 6:
				Datomenu();
				break;
			case 7:
				ReporteDato();
				break;
			case 8:
				return;
		}
	}while(true);
}

// verificar si un usuario ya existe en el area de abastecimiento
    bool usuario_existe_abas(string usuario) {
        ifstream archivo("usuariosabas.txt");
        string usuarioGuardado, contrasenaGuardada;
        while (archivo >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario == usuarioGuardado) {
                archivo.close();
                return true;
            }
        }
        archivo.close();
        return false;
    }

// creador de usuario y contrase+地 de area de abastecimiento
    void crear_usuario_abas() {
        string usuario, contrasena;
        cout << "Ingrese el nombre de usuario: ";
        cin >> usuario;

        if (usuario_existe_abas(usuario)) {
            cout << "El usuario ya existe." << endl;
            return;
        }

        cout << "Ingrese la contrase+地: ";
        cin >> contrasena;

        ofstream archivo("usuariosabas.txt", ios::app);
        archivo << usuario << " " << contrasena << endl;
        archivo.close();

        cout << "Usuario y password creado exitosamente." << endl;
    }

    // Iniciar sesion del area de abastecimiento
void iniciar_sesion_abas() {
    string usuario, contrasena;
    cout << "Ingrese el nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese la contrase?a: ";
    cin >> contrasena;

    ifstream archivo("usuariosabas.txt");
    string usuarioGuardado, contrasenaGuardada;
    bool encontrado = false;
    while(archivo >> usuarioGuardado >> contrasenaGuardada) {
        if (usuario == usuarioGuardado && contrasena == contrasenaGuardada) {
            encontrado = true;
            cout << "\n檨ienvenido " << usuario << "!" << endl;
            break; // Salir del bucle una vez que se haya encontrado una coincidencia
        }
    }
    archivo.close();

    if (!encontrado) {
        cout << "\nNombre de usuario o contrase?a incorrectos." << endl;
        system("pause");
        system("cls");
        menu_auxiliar_admin();
    }
}

// Consultador de usuario del area de abastecimiento
void consultar_usuarios_area_abas(){
        ifstream archivo("usuariosabas.txt");
        string usuario, contrasena;
        cout << "Usuarios registrados:" << endl;
        while (archivo >> usuario >> contrasena) {
            cout << "Usuario: " << usuario << ", Contrase+地: " << contrasena << endl;
        }
        archivo.close();
    }
    
// funcion para borrar usuarios para el area de abastecimiento
 void borrar_usuario_abas() {
        string usuario;
        cout << "Ingrese el nombre de usuario a borrar: ";
        cin >> usuario;

        ifstream archivoEntrada("usuariosabas.txt");
        ofstream archivoSalida("temp.txt");

        string usuarioGuardado, contrasenaGuardada;
        bool encontrado = false;
        while (archivoEntrada >> usuarioGuardado >> contrasenaGuardada) {
            if (usuario != usuarioGuardado) {
                archivoSalida << usuarioGuardado << " " << contrasenaGuardada << endl;
            } else {
                encontrado = true;
            }
        }
        archivoEntrada.close();
        archivoSalida.close();

        remove("usuariosabas.txt");
        rename("temp.txt", "usuariosabas.txt");

        if (encontrado) {
            cout << "Usuario borrado correctamente." << endl;
        } else {
            cout << "El usuario no existe." << endl;
        }
    }	
};

//------------------------FUNCION PRINCIPAL------------------------
 
int main() {
	
data base;
char continuar = 's';

do {
	MYSQL *objDatos;
	setlocale(LC_ALL, "");
// Intentar iniciar MySQL:
  if(!(objDatos = mysql_init(0))) {
      // Imposible crear el objeto objDatos
      cout << "ERROR: imposible crear el objeto objDatos." << endl;          
      return 1;

};
  
 if(mysql_real_connect(objDatos,"127.0.0.1", "root", "Axe$3128", "db_gasolinera", 3306, NULL, 0))
 {
 	cout<<"\n ----- GASOLINERA -----"<<endl;
	
 }
 else
 {
 	cout<<"Conexion fallida \n"<<mysql_error(objDatos);
 }
 
        int opcion;
        cout<<"***Bienvenidos***"<< endl;
        cout<<"1) Administrador"<< endl;
        cout<<"2) Consultas"<< endl;
        cout<<"3) Ventas"<< endl;
        cout<<"4) Mantenimiento"<<endl;
        cout<<"5) Pedido"<<endl;
        cout<<"6) Abastecimiento"<<endl;
        cout<<"7) Salir del Sistema"<< endl;
        cout<<"Elije una Opcion: ";
        cin>> opcion;

        switch (opcion) {
        case 1:
            base.verificadoradministrador();
            cout<<""<<endl;
            base.menuadministrador();
            break;
        //----------------------
			case 2:
            base.iniciar_sesion_consulta();
            cout << "" << endl;
            base.menu_area_consultas();
            break;
        //----------------------
        case 3:
        	base.iniciar_sesion_ventas();
        	cout << "" << endl;
            base.menu_area_ventas();
            break;
        //----------------------
        case 4:
        	base.iniciar_sesion_mantenimiento();
            cout << "" << endl;
            base.menu_area_mantenimineto();
            break;
        //----------------------
        case 5:
          base.iniciar_sesion_pedido();
          cout << "" << endl;
          base.menu_area_pedido(); 
          break;
        //----------------------
        case 6:
          base.iniciar_sesion_abas();
          cout << "" << endl;
          base.menu_area_abastecimiento();
	      break;	
        //----------------------
        case 7:
            cout << "\n Gracias por utilizar nuestro sistema" << endl;
            cout << "Hasta Luego" << endl;
            return 0;
        default:
            cout << "\n Opcion Incorrecta" << endl;
            break;
        }
        cout << "\n Deseas Volver al Menu Principal (S/N)" << endl;
        cin >> continuar;
        if (continuar == 's' || continuar == 'S') {
            cout << "Volviendo al Menu Principal" << endl;
            system("pause");
        } else {
            cout << "Gracias por utilizar nuestro sistema" << endl;
            return 0;
        }
        system("cls");
    } while (true);
	return 0;
}

