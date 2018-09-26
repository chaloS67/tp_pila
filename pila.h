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

#endif /* STRUCT_H */

