/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "pila.h"

Pila *crearPila() {
    Pila *pilaCabecera = malloc(sizeof (Pila));
    pilaCabecera->cantidadNodos = 0;
    pilaCabecera->cima = NULL;
    return pilaCabecera;
}

bool esPilaVacia(Pila pilaCabecera) {
    if (pilaCabecera.cantidadNodos == 0 && pilaCabecera.cima == NULL) {
        return true;
    } else {
        return false;
    }
}

int cantidadElementosPila(Pila pilaCabecera) {
    return pilaCabecera.cantidadNodos;
}

void apilar(Pila *pilaCabecera, Nodo *nuevoNodo) {
    if (esPilaVacia(*pilaCabecera) == true) {
        pilaCabecera->cima = nuevoNodo;
        pilaCabecera->cantidadNodos = 1;
    } else {
        
        nuevoNodo->siguiente = pilaCabecera->cima;
        pilaCabecera->cima = nuevoNodo;
        pilaCabecera->cantidadNodos++;
    }
}

Nodo *desapilar(Pila *pilaCabecera) {
    Nodo *cimaNodo = NULL;
    if (esPilaVacia(*pilaCabecera) == true) {
        return cimaNodo;
    } else {
        cimaNodo = pilaCabecera->cima;
        pilaCabecera->cima = cimaNodo->siguiente;
        pilaCabecera->cantidadNodos--;
        return cimaNodo;
    }
}

Nodo leerCima(Pila *pilaCabecera){
    Nodo *cimaNodo = NULL;
    if (esPilaVacia(*pilaCabecera) == true) {
        return *cimaNodo;
    } else {
        cimaNodo = pilaCabecera->cima;
        return *cimaNodo;
    }
}

void eliminarPila(Pila *pilaCabecera) {
    if (esPilaVacia(*pilaCabecera) == true) {
        free(pilaCabecera);
    } else {
        while (esPilaVacia(*pilaCabecera) == false) {
            Nodo *cimaNodo = desapilar(pilaCabecera);
            free(cimaNodo);
        }
        free(pilaCabecera);
    }
}