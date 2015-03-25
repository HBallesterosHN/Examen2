#ifndef NODOTRINARIO_H
#define NODOTRINARIO_H

#include <iostream>

class NodoTrinario
{
    public:
        int num;
        NodoTrinario* hijo_izq;
        NodoTrinario* hijo_medio;
        NodoTrinario* hijo_der;
        NodoTrinario(int num);
        virtual ~NodoTrinario();
    protected:
    private:
};

#endif // NODOTRINARIO_H
