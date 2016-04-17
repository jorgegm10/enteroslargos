#ifndef __ENTERO_820__
#define __ENTERO_820__

#include "EnteroLargo.h"

#define EL820SIZE 8

#define I 0
#define J 2
#define K 4
#define L 0

class Entero820 {
    private:
        EnteroLargo enteros[EL820SIZE];
        int primer0;
        int segundo0;
        int tamEL;

    public:
        Entero820();
        Entero820(int posA, int posB, string entero);
        Entero820(int posA, int posB, EnteroLargo arrayEnteros[]);

        void imprimir();

        static EnteroLargo mult820Clasica(Entero820 a, Entero820 b);
        static EnteroLargo mult820NoRapida(Entero820 a, Entero820 b, int casoBase);
        static EnteroLargo mult820Karat(Entero820 a, Entero820 b, int casoBase);
};

#endif
