#include "Evaluador.h"

void evaluar()
{
    int infinito = 9999;
    int grafo[5][5];

    for(int col=0;col<5;col++)
        for(int fila=0;fila<5;fila++)
            if(fila==col)
                grafo[fila][col]=0;
            else
                grafo[fila][col]=infinito;

    grafo[0][1]=2;
    grafo[0][2]=6;

    grafo[1][3]=3;

    grafo[2][4]=1;

    grafo[3][4]=30;

    grafo[4][0]=20;



    double nota = 0;

    cout<<"Ejercicio esPosibleLLegar():\t\t";
    if(!esPosibleLLegar(grafo,1,2,0)
        && !esPosibleLLegar(grafo,1,2,20)
        && esPosibleLLegar(grafo,0,1,3)
        && esPosibleLLegar(grafo,0,1,2)
        && !esPosibleLLegar(grafo,0,1,1)
        && esPosibleLLegar(grafo,0,4,7)
        && !esPosibleLLegar(grafo,0,4,6)
        && !esPosibleLLegar(grafo,0,4,6)
        && !esPosibleLLegar(grafo,1,0,52)
        && esPosibleLLegar(grafo,1,0,53)
        && esPosibleLLegar(grafo,0,3,5)
        && !esPosibleLLegar(grafo,0,3,4)
        && esPosibleLLegar(grafo,3,4,30)
        && !esPosibleLLegar(grafo,3,4,29)
        )
    {
        nota+=3.75;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    agregarArista(grafo,1,0,1);
    agregarArista(grafo,4,2,2);
    agregarArista(grafo,2,1,1);
    agregarArista(grafo,4,3,5);

    cout<<"Ejercicio agregarArista():\t\t";
    if(grafo[1][0]==1
        && grafo[4][2]==2
        && grafo[2][1]==1
        && grafo[4][3]==5
        )
    {
        nota+=3.75;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    NodoTrinario* n1 = new NodoTrinario(10);
    NodoTrinario* n2 = new NodoTrinario(20);
    NodoTrinario* n3 = new NodoTrinario(30);
    NodoTrinario* n4 = new NodoTrinario(40);
    NodoTrinario* n5 = new NodoTrinario(50);
    NodoTrinario* n6 = new NodoTrinario(60);
    NodoTrinario* n7 = new NodoTrinario(70);
    NodoTrinario* n8 = new NodoTrinario(80);
    NodoTrinario* n9 = new NodoTrinario(90);
    NodoTrinario* n10 = new NodoTrinario(100);

    n1->hijo_izq = n2;
    n1->hijo_medio = n3;
    n1->hijo_der = n4;

    n3->hijo_izq = n5;
    n3->hijo_medio = n6;
    n3->hijo_der = n7;

    n4->hijo_der = n8;
    n4->hijo_izq = n9;

    n9->hijo_medio = n10;

    cout<<"Ejercicio getMayor():\t\t\t";
    if(getMayor(n3)==70
        && getMayor(n2)==20
        && getMayor(n4)==100
        )
    {
        nota+=3.75;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio buscarYReemplazarNum():\t";
    buscarYReemplazarNum(n1,60,65);
    buscarYReemplazarNum(n1,100,111);
    buscarYReemplazarNum(n3,30,33);
    if(n6->num==65
        && n10->num==111
        && n3->num==33
        )
    {
        nota+=3.75;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/15"<<endl;
}
