#include "Controladora.h"

Controladora::Controladora()
{
	supercito = new Minisuper;
	op = 0;
}

Controladora::~Controladora()
{
	
}

void Controladora::controlPrincipal()
{
	do {
		op = Interfaz::menuPrincipal();
		switch (op) {
			case 1: mantenimiento(); break;
			case 2: ventas(); break;
			case 3: reportes(); break;
			case 4: Interfaz::salir(); break;
		};
	} while (op != 4);
}

void Controladora::mantenimiento()
{
	do {
		op = Interfaz::menuMantenimiento();
		switch (op) {
			case 1: mantenimientoFacturas(); break;
			case 2: mantenimientoProductos(); break;
			case 3: Interfaz::salir(); break;
		};
	} while (op != 3);
}

void Controladora::ventas()
{
	string respuesta;
	do {
		op = Interfaz::menuVentas();
		switch (op) {
			case 1:  
				do {
					Interfaz::ingresarFactura(*supercito, op);
					cout << "Desea ingresar otra factura (si/no): ";
					cin >> respuesta;

				} while (respuesta == "si" || respuesta == "Si");  
				
				break;
			case 2: Interfaz::salir(); break;
		};
	} while (op != 2);
}

void Controladora::reportes()
{
	do {
		op = Interfaz::menuReportes();
		switch (op) {
		case 1:
			Interfaz::reporteTodos(*supercito);
			break;
		case 2:
			op = Interfaz::menuIngresarProducto();
			switch (op)
			{
				case 1:
					Interfaz::reporteConservas(*supercito);
					break;
				case 2:
					Interfaz::reporteAbarrotes(*supercito);
					break;
				case 3:
					Interfaz::reporteEmbutidos(*supercito);
					break;
				default:
					break;
			}
			break;
			case 3:
				Interfaz::reporteMinimoExistencia(*supercito);
				break;
			case 4:
				Interfaz::reporteFacturasCliente(*supercito);
				break;
			case 5:
				Interfaz::reporteCincoMejoresClientes(*supercito);
				break;
			case 6: Interfaz::salir(); break;
		};
	} while (op != 6);
}

void Controladora::mantenimientoFacturas()
{
	int num = 0;
	do {
		op = Interfaz::menuMantenimientoFacturas();
		switch (op) {
			case 1: 

				cout << "Ingrese el numero de la factura a eliminar: ";
				cin >> num;
				Interfaz::eliminarFacturas(*supercito, num);

				break;
			case 2:      
				Interfaz::modificarFactura(*supercito);
				break;
			case 3: Interfaz::salir(); break;
		};
	} while (op != 3);
}

void Controladora::mantenimientoProductos()
{
	string respuesta,cod;
	do {
		op = Interfaz::menuMantenimientoProductos();
		switch (op) {
			case 1:

				do {
					op = Interfaz::menuIngresarProducto();
					Interfaz::ingresarProductos(*supercito, op);
					cout << "Desea ingresar otro producto (si/no): ";
					cin >> respuesta;

				} while (respuesta == "si" || respuesta == "Si");

				break;
			case 2:

				cout << "Ingrese el codigo del producto a eliminar: ";
				cin >> cod;
				Interfaz::eliminarProductos(*supercito,cod);

				break;
			case 3:      
				
				Interfaz::modificarProducto(*supercito);
				
				break;
			case 4: Interfaz::salir(); break;
		};
	} while (op != 4);
}
