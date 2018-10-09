/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   pila.h
 * Author: desktop
 *
 * Created on 30 de septiembre de 2018, 10:17
 */

#ifndef PILA_H
#define PILA_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int valor;
} Dato;

typedef struct {
    Dato datoDelNodo;
    struct Nodo *siguiente;
} Nodo;

typedef struct {
    int cantidadNodos;
    Nodo *cima;
} Pila;

//Precondición: Memoria disponible
//Entrada:
//Salida: Una pila
//Postcondición: Se crea una pila en memoria
Pila *crearPila();

// Precondición:La pila tiene que ser válida
// Entrada:Una pila
// Salida:Un boolean(True:Está vacía/False:Contiene uno o más nodos)
// Postcondición:Se determina si la pila está vacía o no
bool esPilaVacia(Pila pilaCabecera);

// Precondición:La pila tiene que ser válida
// Entrada:Una pila
// Salida:Un integer
// Postcondición:la cantidad elementos de la pila
int cantidadElementosPila(Pila pilaCabecera);

// Precondición:La pila y el nodo tiene que ser válidos
// Entrada:Una pila
// Salida:
// Postcondición:Se guarda el nodo en la pila
void apilar(Pila *pilaCabecera, Nodo *nuevoNodo);

// Precondición:La pila tiene que ser válida
// Entrada:Una pila
// Salida:Un nodo
// Postcondición:Se devuelve la copia de un nodo y decrementa el contador de la pila
Nodo *desapilar(Pila *pilaCabecera);

// Precondición:La pila tiene que ser válida 
// Entrada: Una pila
// Salida: Una copia de la cima de la pila
// Postcondición:Hace una copia de tipo Nodo de el nodo de la cima de la pila
Nodo leerCima(Pila *pilaCabecera);

// Precondición:La pila tiene que ser válida 
// Entrada: Una pila
// Salida: 
// Postcondición:Mientras que la pila no este vacia elimina la cima hasta dejarla vacia
void eliminarPila(Pila *pilaCabecera);

#endif /* PILA_H */

