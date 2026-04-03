#include "Interfaz.h"
#include "Excepcion.h"

int Interfaz::menuPrincipal()
{
	Interfaz::limpiar();
	try {
		cout << endl;
		cout << "---------M I N I S U P E R---------" << endl << endl;

		cout << "-----------------------------------" << endl;
		cout << "      1-  Mantenimiento       " << endl;
		cout << "      2-  Ventas              " << endl;
		cout << "      3-  Reportes            " << endl;
		cout << "      4-  Salir               " << endl;
		cout << "----------------------------------" << endl << endl;

		cout << "   Digite la opcion: ";
		return Interfaz::revizarValor(1,4);
	}
	catch (excepcionRango* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
	catch (excepcionValor* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
}

int Interfaz::menuMantenimiento()
{
	Interfaz::limpiar();
	try {
		cout << endl << endl;
		cout << "     1-  Facturas          " << endl;
		cout << "     2-  Productos         " << endl;
		cout << "     3-  Salir             " << endl << endl;

		cout << "   Digite la opcion: ";
		return Interfaz::revizarValor(1,3);
	}
	catch (excepcionRango* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
	catch (excepcionValor* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
}

int Interfaz::menuVentas()
{
	Interfaz::limpiar();
	try {
		cout << endl << endl;
		cout << "     1-  Crear Factura        " << endl;
		cout << "     2-  Salir                " << endl << endl;

		cout << "   Digite la opcion: ";
		return Interfaz::revizarValor(1, 2);
	}
	catch (excepcionRango* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
	catch (excepcionValor* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
}

int Interfaz::menuReportes()
{
	Interfaz::limpiar();
	try {
		cout << endl << endl;
		cout << "     1-  Reportar todos los productos del minisuper.                                     " << endl;
		cout << "     2-  Reportar solo los productos de una determinada categoria.                       " << endl;
		cout << "     3-  Reportar los productos que estan por debajo del minimo de su existencia.        " << endl;
		cout << "     4-  Reportar las facturas de un determinado cliente por su cedula.                  " << endl;
		cout << "     5-  Reportar las cedulas de los 5 mejores clientes que compran el minisuper.        " << endl;
		cout << "     6-  Salir             " << endl << endl;

		cout << "   Digite la opcion: ";
		return Interfaz::revizarValor(1,6);
	}
	catch (excepcionRango* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
	catch (excepcionValor* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
}

int Interfaz::menuMantenimientoFacturas()
{
	Interfaz::limpiar();
	try {
		cout << endl << endl;
		cout << "     1-  Eliminar factura            " << endl;
		cout << "     2-  Actualizar factura          " << endl;
		cout << "     3-  Salir                       " << endl << endl;

		cout << "   Digite la opcion: ";
		return Interfaz::revizarValor(1,3);
	}
	catch (excepcionRango* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
	catch (excepcionValor* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
}

int Interfaz::menuMantenimientoProductos()
{
	Interfaz::limpiar();
	try {
		cout << endl << endl;
		cout << "     1-  Ingresar producto           " << endl;
		cout << "     2-  Eliminar producto           " << endl;
		cout << "     3-  Modificar producto          " << endl;
		cout << "     4-  Salir                       " << endl << endl;

		cout << "   Digite la opcion: ";
		return Interfaz::revizarValor(1,4);
	}
	catch (excepcionRango* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
	catch (excepcionValor* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
}

//---------------------------------------------
//Ingresar Productos

int Interfaz::menuIngresarProducto()
{
	Interfaz::limpiar();
	try {
		cout << endl << endl;
		cout << "     1-  Tipo Conserva               " << endl;
		cout << "     2-  Tipo Abarrote               " << endl;
		cout << "     3-  Tipo Embutido               " << endl;
		cout << "     4-  Salir                       " << endl << endl;

		cout << "   Digite la opcion: ";
		return Interfaz::revizarValor(1, 4);
	}
	catch (excepcionRango* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
	catch (excepcionValor* e) {
		Interfaz::limpiar();
		cout << e->toString() << endl;
		Interfaz::pausar();
	}
}

void Interfaz::ingresarProductos(Minisuper& minisup, int op)
{
	string codigo, nombreComercial, descripcion,categoria;
	double precioCosto;
	int existencia, limite;
	//fecha
	int dia, mes, anio;
	cout << "Ingrese el codigo del producto..." << endl;
	cin >> codigo;
	cout << "Verificando si existe un producto con el codigo ingresado...." << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Porfavor ingrese los datos solicitados..." << endl;
	if (minisup.getListaProductos()->buscaProducto(codigo) == nullptr) {
		cout << "Ingrese el Codigo del producto: "; cin >> codigo;
		cout << "Ingrese el Nombre Comercial del producto: "; cin >> nombreComercial;
		cout << "Ingrese la Descripcion del producto: "; cin >> descripcion;
		cout << "Ingrese el Precio Costo del producto: "; cin >> precioCosto;
		cout << "Ingrese la Categoria del producto: "; cin >> categoria;
		cout << "Ingrese la Existencia del producto: "; cin >> existencia;
		cout << "Ingrese el Limite del producto: "; cin >> limite;
		cout << "---------------------------------------------" << endl;
		cout << "Digite la Fecha de Ingreso del producto...." << endl;
		cout << "Dia: "; cin >> dia;
		cout << "Mes: "; cin >> mes;
		cout << "Anio:"; cin >> anio;
		Fecha* fec = new Fecha(dia, mes, anio);
		if (op == 1) {
		cout << "---------------------------------------------" << endl;
		Producto* prodConserva = new ProdConserva(codigo, nombreComercial, descripcion, precioCosto, categoria, existencia, limite, dia, mes, anio, true);
		minisup.getListaProductos()->agregar(prodConserva);
		cout << "Se a creado un producto de tipo conserva" << endl;
		}
		if (op == 2) {
			double peso;
			string empresaNombre;
			int Vdia, Vmes, Vanio;
			cout << "Ingresar el Peso del producto: "; cin >> peso;
			cout << "Ingresar el Nombre de la Emprea del producto: "; cin >> empresaNombre;
			cout << "---------------------------------------------" << endl;
			cout << "Digite la Fecha de Vencimiento del producto...." << endl;
			cout << "Dia: "; cin >> Vdia;
			cout << "Mes: "; cin >> Vmes;
			cout << "Anio:"; cin >> Vanio;
			Producto* prodAbarrote = new Abarrote(codigo, nombreComercial, descripcion, precioCosto, categoria, existencia, limite, dia, mes, anio, true, peso, Vdia, Vmes, Vanio, empresaNombre);
			minisup.getListaProductos()->agregar(prodAbarrote);
			cout << "Se a creado un producto de tipo abarrote" << endl;
		}
		if (op == 3) {
			double peso;
			string nombreAnimal, parteDelAnimal, marca;
			int Vdia, Vmes, Vanio;
			cout << "Ingresar el Peso del producto: "; cin >> peso;
			cout << "Ingresar el Nombre Del Animal del Producto: "; cin >> nombreAnimal;
			cout << "Ingresar la Parte Del Animal del Producto: "; cin >> nombreAnimal;
			cout << "Ingresar la marca del Producto: "; cin >> nombreAnimal;
			cout << "---------------------------------------------" << endl;
			cout << "Digite la Fecha de Vencimiento del producto...." << endl;
			cout << "Dia: "; cin >> Vdia;
			cout << "Mes: "; cin >> Vmes;
			cout << "Anio:"; cin >> Vanio;
			Producto* prodEmbutido = new Embutido(codigo, nombreComercial, descripcion, precioCosto, categoria, existencia, limite, dia, mes, anio, true, peso, Vdia, Vmes, Vanio,nombreAnimal,parteDelAnimal,marca,true);
			minisup.getListaProductos()->agregar(prodEmbutido);
			cout << "Se a creado un producto de tipo embutido" << endl;


		}
	}
	else {
		cout << "[ERROR]";
	}
}

void Interfaz::ingresarFactura(Minisuper& minisup, int op)
{
	string cedCliente, nombreCliente;
	int cantProductos, numeroFactura;
	int dA, mA, aA;
	Compra* aux = nullptr;
	double pagoAux = 0;
	double pagoIva = 0;
	double pagoTotal = 0;

	cout << "Ingrese el numero de factura..." << endl;
	cin >> numeroFactura;
	cout << "Verificando si existe una factura con el numero ingresado...." << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Porfavor ingrese los datos solicitados..." << endl;
	if (minisup.getListaFacturas()->buscaFactura(numeroFactura) == nullptr) {
		cout << "Ingrese la cedula del cliente: "; cin >> cedCliente;
		cout << "Ingrese el nombre del cliente: "; cin >> nombreCliente;
		cout << "ingrese el numero de factura: "; cin >> numeroFactura;
		cout << "ingrese la cantidad de productos comprados: "; cin >> cantProductos;
		cout << "--------------------------------------------------------------" << endl;
		cout << "Ingrese la fecha actual: " << endl;
		cout << "Dia: "; cin >> dA;
		cout << "Mes: "; cin >> mA;
		cout << "Anio:"; cin >> aA;
		cout << "--------------------------------------------------------------" << endl;
		minisup.getListaProductos()->toString();
		string codigo;
		cout << "Ingrese el codigo del producto que quiera asociar a su factura:"; cin >> codigo;
		Producto* producto = minisup.getListaProductos()->buscaProducto(codigo);
		if (producto != nullptr) {
			Compra* carrito = new Carrito();
			if (producto->getCategoria() == "Conserva" || "conserva") {
				ProdConserva* conserva = dynamic_cast<ProdConserva*>(producto);
				DecoProdConserva* decoConserv = new DecoProdConserva(carrito, conserva);
				aux = decoConserv;
			}
			if (producto->getCategoria() == "Abarrote" || "abarrote") {
				Abarrote* abarrote = dynamic_cast<Abarrote*>(producto);
				DecoAbarrote* decoAbar = new DecoAbarrote(carrito, abarrote);
				aux = decoAbar;
			}
			if (producto->getCategoria() == "Embutido" || "embutido") {
				Embutido* embutido = dynamic_cast<Embutido*>(producto);
				DecoEmbutido* decoEmbu = new DecoEmbutido(carrito, embutido);
				aux = decoEmbu;
			}
			int can;
			cout << "Ingrese la cantidad de productos que desea asociar a su factura" << endl;
			cin >> can;
			for (int i = 1; i < can; i++) {
				string codigo;
				minisup.getListaProductos()->toString();
				cout << "Ingrese el codigo del producto que quiera asociar a su factura:"; cin >> codigo;
				Producto* producto = minisup.getListaProductos()->buscaProducto(codigo);
				if (producto != nullptr) {
					Compra* carrito = new Carrito();
					if (producto->getCategoria() == "Conserva" || "conserva") {
						ProdConserva* conserva = dynamic_cast<ProdConserva*>(producto);
						DecoProdConserva* decoConserv = new DecoProdConserva(carrito, conserva);
						aux = decoConserv;
					}
					if (producto->getCategoria() == "Abarrote" || "abarrote") {
						Abarrote* abarrote = dynamic_cast<Abarrote*>(producto);
						DecoAbarrote* decoAbar = new DecoAbarrote(carrito, abarrote);
						aux = decoAbar;
					}
					if (producto->getCategoria() == "Embutido" || "embutido") {
						Embutido* embutido = dynamic_cast<Embutido*>(producto);
						DecoEmbutido* decoEmbu = new DecoEmbutido(carrito, embutido);
						aux = decoEmbu;
					}
				}
				else {
					cout << "[ERROR]" << endl;
				}

			}
			DecoAbstracto* productoscarrito = dynamic_cast<DecoAbstracto*>(aux);
			pagoAux = (minisup.getListaProductos()->buscaProducto(codigo)->getPrecioCosto() * can);
			pagoIva = pagoAux * 0.13;
			pagoTotal = pagoAux + pagoIva;
			Factura* fact = new Factura(numeroFactura, cedCliente, nombreCliente, cantProductos, dA, mA, aA, productoscarrito);
			fact->setIVA(pagoIva);
			fact->setTotalPagar(pagoTotal);
			minisup.ingresarFactura(fact);
			cout << "Se a ingresado una factura correctamente" << endl;
		}
	}
}

void Interfaz::eliminarProductos(Minisuper& minisup, string cod)
{
	minisup.getListaProductos()->eliminarProducto(cod);
}

void Interfaz::eliminarFacturas(Minisuper& minisup, int num)
{
	minisup.getListaFacturas()->eliminarFactura(num);
}

void Interfaz::modificarProducto(Minisuper& minisup)
{
	string codigo;
	double nuevocosto;
	int nuevaexistencia;
	cout << "Ingrese el codigo del producto..." << endl;
	cin >> codigo;
	cout << "Verificando si existe un producto con el codigo ingresado...." << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Porfavor ingrese los datos solicitados..." << endl;
	if (minisup.getListaProductos()->buscaProducto(codigo)!=nullptr) {
		cout << "Ingrese la nuevo precio costo del producto: "; cin >> nuevocosto;
		cout << "Ingrese la nueva existencia de productos: "; cin >> nuevaexistencia;
		minisup.getListaProductos()->modificarProducto(codigo, nuevocosto, nuevaexistencia);
	}
	else {
		cout << "[ERROR]";
	}
}

void Interfaz::modificarFactura(Minisuper& minisup)
{
	string cedCliente, nombreCliente;
	int cantProductos, numeroFactura;
	int dA, mA, aA;
	string codigo;
	Compra* aux=nullptr;
	double pagoAux = 0;
	double pagoIva = 0;
	double pagoTotal = 0;

	cout << "Ingrese el numero de factura..." << endl;
	cin >> numeroFactura;
	cout << "Verificando si existe una factura con el numero ingresado...." << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Porfavor ingrese los datos solicitados..." << endl;
	if (minisup.getListaFacturas()->buscaFactura(numeroFactura) != nullptr) {
		cout << "Ingrese la nueva cedula del cliente: "; cin >> cedCliente;
		cout << "Ingrese el nuevo nombre del cliente: "; cin >> nombreCliente;
		cout << "ingrese el nuevo numero de factura: "; cin >> numeroFactura;
		cout << "ingrese la nueva cantidad de productos comprados: "; cin >> cantProductos;
		cout << "--------------------------------------------------------------" << endl;
		cout << "Ingrese la nueva fecha actual: " << endl;
		cout << "Dia: "; cin >> dA;
		cout << "Mes: "; cin >> mA;
		cout << "Anio:"; cin >> aA;
		cout << "--------------------------------------------------------------" << endl;
		minisup.getListaProductos()->toString();
		cout << "Ingrese el codigo del producto que quiera asociar a su factura:"; cin >> codigo;
		Producto* producto = minisup.getListaProductos()->buscaProducto(codigo);
		if (producto != nullptr) {
			Carrito* carrito = new Carrito();
			if (producto->getCategoria() == "Conserva" || "conserva") {
				ProdConserva* conserva = dynamic_cast<ProdConserva*>(producto);
				DecoProdConserva* decoConserv = new DecoProdConserva(carrito, conserva);
				aux = decoConserv;
			}
			if (producto->getCategoria() == "Abarrote" || "abarrote") {
				Abarrote* abarrote = dynamic_cast<Abarrote*>(producto);
				DecoAbarrote* decoAbar = new DecoAbarrote(carrito, abarrote);
				aux = decoAbar;
			}
			if (producto->getCategoria() == "Embutido" || "embutido") {
				Embutido* embutido = dynamic_cast<Embutido*>(producto);
				DecoEmbutido* decoEmbu = new DecoEmbutido(carrito, embutido);
				aux = decoEmbu;
			}
			int can;
			cout << "Ingrese la cantidad de productos que desea asociar a su nueva factura" << endl;
			cin >> can;
			for (int i = 1; i < can; i++) {
				minisup.getListaProductos()->toString();
				cout << "Ingrese el codigo del producto que quiera asociar a su factura:"; cin >> codigo;
				Producto* producto = minisup.getListaProductos()->buscaProducto(codigo);
				if (producto != nullptr) {
					Carrito* carrito = new Carrito();
					if (producto->getCategoria() == "Conserva" || "conserva") {
						ProdConserva* conserva = dynamic_cast<ProdConserva*>(producto);
						DecoProdConserva* decoConserv = new DecoProdConserva(carrito, conserva);
						aux = decoConserv;
					}
					if (producto->getCategoria() == "Abarrote" || "abarrote") {
						Abarrote* abarrote = dynamic_cast<Abarrote*>(producto);
						DecoAbarrote* decoAbar = new DecoAbarrote(carrito, abarrote);
						aux = decoAbar;
					}
					if (producto->getCategoria() == "Embutido" || "embutido") {
						Embutido* embutido = dynamic_cast<Embutido*>(producto);
						DecoEmbutido* decoEmbu = new DecoEmbutido(carrito, embutido);
						aux = decoEmbu;
					}
				}
				else {
					cout << "[ERROR]" << endl;
				}

			}
			DecoAbstracto* productoscarrito = dynamic_cast<DecoAbstracto*>(aux);
			pagoAux = (minisup.getListaProductos()->buscaProducto(codigo)->getPrecioCosto() * can);
			pagoIva = pagoAux * 0.13;
			pagoTotal = pagoAux + pagoIva;
			Factura* fact = new Factura(numeroFactura, cedCliente, nombreCliente, cantProductos, dA, mA, aA, productoscarrito);
			fact->setIVA(pagoIva);
			fact->setTotalPagar(pagoTotal);
			minisup.ingresarFactura(fact);
			cout << "Se a modificado una factura correctamente" << endl;
		}
		else {
			cout << "[ERROR]" << endl;
		}
	}
}

void Interfaz::reporteTodos(Minisuper& minisup)
{
	minisup.getListaProductos()->toString();
}

void Interfaz::reporteEmbutidos(Minisuper& minisup)
{
	minisup.getListaProductos()->imprimeSoloEmbutidos();
}

void Interfaz::reporteAbarrotes(Minisuper& minisup)
{
	minisup.getListaProductos()->imprimeSoloAbarrote();
}

void Interfaz::reporteConservas(Minisuper& minisup)
{
	minisup.getListaProductos()->imprimeSoloProdConserva();
}

void Interfaz::reporteMinimoExistencia(Minisuper& minisup)
{
	minisup.getListaProductos()->minimoExistencia();
}

void Interfaz::reporteFacturasCliente(Minisuper& minisup)
{
	string ced;
	cout << "Dijite la cedula del cliente: ";
	cin >> ced;
	minisup.getListaFacturas()->facturasCliente(ced);
}

void Interfaz::reporteCincoMejoresClientes(Minisuper& minisup)
{
	minisup.getListaFacturas()->cincoMejoresClientes();
}

int Interfaz::revizarValor(int min, int max)
{
	int op = 0;
	if (cin >> op) {
		if (op < min) throw new excepcionRangoInferior();
		if (op > max) throw new excepcionRangoSuperior();
	}
	else {
		cin.clear();
		cin.ignore(255, '\n');
		throw new excepcionValor();
	}
	return op;
}

string Interfaz::revizarCategProduc()
{
	string cat;
	cin >> cat;
	if
		(
		cat != "conserva" && cat != "Conserva" && cat != "conservas" && cat != "Conservas" &&
		cat != "abarrote" && cat != "Abarrote" && cat != "abarrotes" && cat != "Abarrotes" &&
		cat != "embutido" && cat != "Embutido" && cat != "embutidos" && cat != "Embutidos"
		)
	{
		throw new excepcionProducto();
	}
	return cat;
}

void Interfaz::limpiar()
{
	system("cls");
}

void Interfaz::pausar()
{
	system("pause");
}

void Interfaz::salir()
{
    Interfaz::limpiar();
    cout << "Saliendo..." << endl;
	Interfaz::pausar();
}

