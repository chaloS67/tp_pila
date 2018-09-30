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
    
 bool desapilar (Pila pilaCabecera){
     Nodo auxNodo;
       if (esPilaVacia(pilaCabecera)==true){
           desapilar=false;
           
       }else{
           auxNodo = pilaCabecera.cima;
           auxNodo = auxNodo.siguiente;
           free (pilaCabecera.cima);
           pilaCabecera.cima = auxNodo;
       }
       
   }
    
    
}