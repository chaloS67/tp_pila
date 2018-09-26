/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   struct.h
 * Author: desktop
 *
 * Created on 26 de septiembre de 2018, 01:36
 */

#ifndef STRUCT_H
#define STRUCT_H

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

typedef struct{
    int cantidadNodos;
    Nodo *cima;
}Pila;

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

#endif /* STRUCT_H */

