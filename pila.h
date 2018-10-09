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

//Precondici�n: Memoria disponible
//Entrada:
//Salida: Una pila
//Postcondici�n: Se crea una pila en memoria
Pila *crearPila();

// Precondici�n:La pila tiene que ser v�lida
// Entrada:Una pila
// Salida:Un boolean(True:Est� vac�a/False:Contiene uno o m�s nodos)
// Postcondici�n:Se determina si la pila est� vac�a o no
bool esPilaVacia(Pila pilaCabecera);

// Precondici�n:La pila tiene que ser v�lida
// Entrada:Una pila
// Salida:Un integer
// Postcondici�n:la cantidad elementos de la pila
int cantidadElementosPila(Pila pilaCabecera);

// Precondici�n:La pila y el nodo tiene que ser v�lidos
// Entrada:Una pila
// Salida:
// Postcondici�n:Se guarda el nodo en la pila
void apilar(Pila *pilaCabecera, Nodo *nuevoNodo);

// Precondici�n:La pila tiene que ser v�lida
// Entrada:Una pila
// Salida:Un nodo
// Postcondici�n:Se devuelve la copia de un nodo y decrementa el contador de la pila
Nodo *desapilar(Pila *pilaCabecera);

// Precondici�n:La pila tiene que ser v�lida 
// Entrada: Una pila
// Salida: Una copia de la cima de la pila
// Postcondici�n:Hace una copia de tipo Nodo de el nodo de la cima de la pila
Nodo leerCima(Pila *pilaCabecera);

// Precondici�n:La pila tiene que ser v�lida 
// Entrada: Una pila
// Salida: 
// Postcondici�n:Mientras que la pila no este vacia elimina la cima hasta dejarla vacia
void eliminarPila(Pila *pilaCabecera);

#endif /* PILA_H */

