#include "Categoria.h"

double Categoria::porceGanancia(string catS)
{
	int catI = 0;

	if (catS == "conserva" || catS == "Conserva" || catS == "conservas" || catS == "Conservas") catI = 1;
	if (catS == "abarrote" || catS == "Abarrote" || catS == "abarrotes" || catS == "Abarrotes") catI = 2;
	if (catS == "embutido" || catS == "Embutido" || catS == "embutidos" || catS == "Embutidos") catI = 3;

	switch (catI)
	{
	case 1:
		return 0.15;
		break;
	case 2:
		return 0.20;
		break;
	case 3:
		return 0.30;
		break;

	default:
		return 0;
		break;
	}
}