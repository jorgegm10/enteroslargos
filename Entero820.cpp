#include "Entero820.h"
#include <iostream>
using namespace std;

Entero820::Entero820(){
    primer0=0;
    segundo0=0;
}


Entero820::Entero820(int posA, int posB, EnteroLargo arrayEnteros[]){
    primer0=posA;
    segundo0=posB;
    
    // Sabemos que es siempre de 8
    for (int i = 0; i < ELSIZE; i++) {
        enteros[ELSIZE-1-i]=arrayEnteros[i];
    }
}


void Entero820::imprimir() {
    for (int i = 0; i < ELSIZE; i++) {
        enteros[i].imprimir();
    }
}

EnteroLargo Entero820::mult820Clasica(Entero820 b){
    EnteroLargo resultado;
    
    for (int i = 0; i < ELSIZE; i++) {
        EnteroLargo parcial;
        
       if (i == b.primer0 || i == b.segundo0) {
              continue;  
        }
        
        for (int j = 0; j < ELSIZE; j++) {
            
             if (j == primer0 || j == segundo0) {
              continue;  
            }
        
            EnteroLargo mult = b.enteros[i].multClasica(enteros[j]);
            mult.desplazarEntero(j*ELSIZE);
            parcial = parcial.suma(mult);
        }
        
        parcial.desplazarEntero(i*ELSIZE);
        resultado = resultado.suma(parcial);
    }
    
    return resultado;
}

EnteroLargo Entero820::mult820NoRapida(Entero820 b){
    EnteroLargo resultado;
    
    for (int i = 0; i < ELSIZE; i++) {
        EnteroLargo parcial;
        
       if (i == b.primer0 || i == b.segundo0) {
              continue;  
        }
        
        for (int j = 0; j < ELSIZE; j++) {
            
             if (j == primer0 || j == segundo0) {
              continue;  
            }
        
            EnteroLargo mult = b.enteros[i].multNoRapida(enteros[j]);
            mult.desplazarEntero(j*ELSIZE);
            parcial = parcial.suma(mult);
        }
        
        parcial.desplazarEntero(i*ELSIZE);
        resultado = resultado.suma(parcial);
    }
    
    return resultado;
}

EnteroLargo Entero820::mult820Karat(Entero820 b){
    EnteroLargo resultado;
    
    for (int i = 0; i < ELSIZE; i++) {
        EnteroLargo parcial;
        
       if (i == b.primer0 || i == b.segundo0) {
              continue;  
        }
        
        for (int j = 0; j < ELSIZE; j++) {
            
             if (j == primer0 || j == segundo0) {
              continue;  
            }
        
            EnteroLargo mult = b.enteros[i].multKarat(enteros[j]);
            mult.desplazarEntero(j*ELSIZE);
            parcial = parcial.suma(mult);
        }
        
        parcial.desplazarEntero(i*ELSIZE);
        resultado = resultado.suma(parcial);
    }
    
    return resultado;
}