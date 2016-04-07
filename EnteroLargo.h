#ifndef _ENTERO_LARGO_
#define _ENTERO_LARGO_
#include <list>
using namespace std;

class EnteroLargo {
    private:
        list<char> digitos;
        int longitud;
        bool signo;  // True -> positivo, False -> negativo
        
        EnteroLargo multSencilla(int a);
        void setSigno(bool sign);

    public:
        EnteroLargo(list<char> entero, bool sig);
        EnteroLargo();
        
        void imprimir();
        void desplazarEntero(int desp);
        EnteroLargo * dividirEntero();
        
        EnteroLargo suma(EnteroLargo b);
        EnteroLargo resta(EnteroLargo b);
        
        int compara(EnteroLargo b);
        
        EnteroLargo multClasica(EnteroLargo b);
        EnteroLargo multNoRapida(EnteroLargo b);
        EnteroLargo multKarat(EnteroLargo b);
        
        
};

#endif