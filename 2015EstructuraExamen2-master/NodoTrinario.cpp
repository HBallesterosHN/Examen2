#include "NodoTrinario.h"

NodoTrinario::NodoTrinario(int num)
{
    this->num = num;
    hijo_izq = NULL;
    hijo_medio = NULL;
    hijo_der = NULL;
}

NodoTrinario::~NodoTrinario()
{
    //dtor
}
