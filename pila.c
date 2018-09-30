/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <pila.h>

Pila *crearPila() {
    Pila *pilaCabecera = malloc(sizeof (Pila));
    pilaCabecera->cantidadNodos = 0;
    pilaCabecera->cima = NULL;
}

bool esPilaVacia(Pila pilaCabecera) {
    if (pilaCabecera.cantidadNodos == 0 && pilaCabecera.cima == NULL) {
        return true;
    } else {
        return false;
    }
}


bool apilar (Pila pilaCabecera,Nodo nuevoNodo){
    if (esPilaVacia (pilaCabecera)== true) {
        pilaCabecera.cantidadNodos = 1;
        pilaCabecera.cima = nuevoNodo;
    }else{
        nuevoNodo = pilaCabecera.cima;
        pilaCabecera.cima = nuevoNodo;
        pilaCabecera.cantidadNodos = pilaCabecera.cantidadNodos+1;
    }
    return (true);
    
 Nodo desapilar (Pila pilaCabecera){
       if (esPilaVacia(pilaCabecera)==true){
           desapilar = NULL;
       }else{
           desapilar = pilaCabecera.cima;
       }
       
   }
    
    
}