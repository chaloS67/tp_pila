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

// Precondición:La pila tiene que ser válida y el nodo tiene que ser válido
// Entrada: Una pila y un nodo
// Salida: Un boolean(True:El nodo fue insertado con éxito al principio de la pila/False:error en la inserción)
// Postcondición:Se agrega un nuevo nodo al inicio de la pila.
bool apilar (Pila pilaCabecera, Nodo nuevoNodo);

// Precondición:La pila tiene que ser válida 
// Entrada: Una pila
// Salida: Un nodo False:error en la insercion)
// Postcondición: Se obtiene una copia del nodo que esta en la cabeza de la lista
bool desapilar (Pila pilaCabecera);

// Precondición:La pila tiene que ser válida 
// Entrada: Una pila
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
// Postcondición:La pila sin el nodo de la cima
bool eliminarCima(Pila listaCabecera);

    


#endif /* STRUCT_H */

