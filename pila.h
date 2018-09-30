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

// Precondici�n:La pila tiene que ser v�lida y el nodo tiene que ser v�lido
// Entrada: Una pila y un nodo
// Salida: Un boolean(True:El nodo fue insertado con �xito al principio de la pila/False:error en la inserci�n)
// Postcondici�n:Se agrega un nuevo nodo al inicio de la pila.
bool apilar (Pila pilaCabecera, Nodo nuevoNodo);

// Precondici�n:La pila tiene que ser v�lida 
// Entrada: Una pila
// Salida: Un nodo False:error en la insercion)
// Postcondici�n: Se obtiene una copia del nodo que esta en la cabeza de la lista
bool desapilar (Pila pilaCabecera);

// Precondici�n:La pila tiene que ser v�lida 
// Entrada: Una pila
// Salida: Un boolean (TRUE:si se pudo eliminar nodo. FALSE: Si no se pudo eliminar nodo)
// Postcondici�n:La pila sin el nodo de la cima
bool eliminarCima(Pila listaCabecera);

    


#endif /* STRUCT_H */

