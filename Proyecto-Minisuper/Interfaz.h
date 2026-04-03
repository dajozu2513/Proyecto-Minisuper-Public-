#pragma once
#include <iostream>
#include <sstream>
#include "Minisuper.h"
using namespace std;

class Interfaz {
public:

	//Menu principal
	static int menuPrincipal();

	//Menus Primarios
	static int menuMantenimiento();
	static int menuVentas();
	static int menuReportes();

	//Menus Mantenimineto
	static int menuMantenimientoFacturas();
	static int menuMantenimientoProductos();

	//Ingresar
	static int menuIngresarProducto();
	static void ingresarProductos(Minisuper& minisup, int);
	static void ingresarFactura(Minisuper& minisup, int);

	//Eliminar
	static void eliminarProductos(Minisuper& minisup, string);
	static void eliminarFacturas(Minisuper& minisup, int);
	//Modificar
	static void modificarProducto(Minisuper& minisup);
	static void modificarFactura(Minisuper& minisup);
	//Reporte
	static void reporteTodos(Minisuper& minisup);
	static void reporteEmbutidos(Minisuper& minisup);
	static void reporteAbarrotes(Minisuper& minisup);
	static void reporteConservas(Minisuper& minisup);
	static void reporteMinimoExistencia(Minisuper& minisup);
	static void reporteFacturasCliente(Minisuper& minisup);
	static void reporteCincoMejoresClientes(Minisuper& minisup);

	//Extras
	static int revizarValor(int,int);
	static string revizarCategProduc();
	static void limpiar();
	static void pausar();
	static void salir();

};