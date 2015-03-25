#ifndef EVALUADOR_H
#define EVALUADOR_H

#include "NodoTrinario.h"
#include <iostream>

using namespace std;

void evaluar();

void agregarArista(int grafo[5][5], int inicio, int destino,int peso);
bool esPosibleLLegar(int grafo[5][5], int inicio, int destino,int distancia_maxima);
int getMayor(NodoTrinario* raiz);
void buscarYReemplazarNum(NodoTrinario* raiz, int num_buscado, int num_remplazo);

#endif // EVALUADOR_H
