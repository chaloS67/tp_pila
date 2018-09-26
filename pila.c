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