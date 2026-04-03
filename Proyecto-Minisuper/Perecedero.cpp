#include "Perecedero.h"

Perecedero::Perecedero(int d, int m, int a)
{
    fecha_vencimiento = new Fecha(d, m, a);
}

Perecedero::~Perecedero() {}

Fecha* Perecedero::getFecha_Vencimiento()
{
    return fecha_vencimiento;
}

void Perecedero::setFecha_Vencimiento(Fecha* FV)
{
    fecha_vencimiento = FV;
}
