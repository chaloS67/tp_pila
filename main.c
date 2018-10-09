/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: gonzalo
 * Integrantes del Grupo:
 *      Acosta Nicolas
 *      Figueroa Matias
 *      Sampini Gonzalo
 *
 * Created on 25 de septiembre de 2018, 17:46
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "pila.h"

#define limpiar_salto_linea() while (getchar() != '\n')
#define error(x) printf("\n- ERROR -, %s\n\n", x)

int validar_menu(char texto[], int num_min, int num_max);
void pausa(void);
Dato nuevoDato();
Nodo *crearNodo(Dato valor);

/*
 * 
 */
int main(int argc, char** argv) {
    Pila *pilaCabecera = NULL;
    int opcion;
    system("clear");
    switch (argc) {
        case 1:
            do {

                if (pilaCabecera == NULL) {
                    opcion = validar_menu(  "1 Crear la Pila.\n"
                                            "0 salir\n", 0, 1);
                    if (opcion == 1) {
                        pilaCabecera = crearPila();
                    }
                } else {
                    Nodo *auxNodo;
                    Nodo auxNodoLeer;
                    char opcionChar = 'N';
                    opcion = validar_menu(  "1 esPilaVacia, cantidadElementosPila.\n"
                                            "2 apilar.\n"
                                            "3 desapilar.\n"
                                            "4 leerCima.\n"
                                            "5 eliminarPila.\n"
                                            "0 salir\n", 0, 5);
                    switch (opcion) {
                        case 1:
                            (esPilaVacia(*pilaCabecera)) ? puts("Esta vacio") : printf("Contiene %d elementos\n", cantidadElementosPila(*pilaCabecera));
                            pausa();
                            break;
                        case 2:
                            apilar(pilaCabecera, crearNodo(nuevoDato()));
                            break;
                        case 3:
                            auxNodo = desapilar(pilaCabecera);

                            printf("Nodo cima = %d\n", auxNodo->datoDelNodo.valor);
                            free(auxNodo);
                            puts("\"cimaNodo eliminado\"");
                            pausa();
                            break;
                        case 4:
                            auxNodoLeer = leerCima(pilaCabecera);
                            printf("Nodo cima = %d\n", auxNodoLeer.datoDelNodo.valor);
                            pausa();
                            break;
                        case 5:
                            eliminarPila(pilaCabecera);
                            pilaCabecera = NULL;
                            break;
                    }
                }
            } while (opcion != 0);
            break;
    }
    return (EXIT_SUCCESS);
}

Dato nuevoDato() {
    Dato dato;
    printf("Ingrese un número: ");
    scanf("%d", &dato.valor);
    return dato;
}

Nodo *crearNodo(Dato valor) {
    Nodo *nuevoNodo = malloc(sizeof (Nodo));
    nuevoNodo->datoDelNodo = valor;
    nuevoNodo->siguiente = NULL;
    return nuevoNodo;
}

int validar_menu(char texto[], int num_min, int num_max) {
    int num;
    bool encontro;
    puts("╔══════════════════════════════════════════════════════════════╗");
    puts("║                  TRABAJO PRACTICO \"PILA\"                     ║");
    puts("╠══════════════════════════════════════════════════════════════╣");
    puts("║ Creado por: Matias Figueroa, Nicolas Acosta, Gonzalo Sampini ║");
    puts("║ Materia: Estructuras de Datos y Algoritmos                   ║");
    puts("║ Profesor: Aldo Rafael Ana                                    ║");
    puts("╚══════════════════════════════════════════════════════════════╝\n");
    
    printf("%s\nIngrese un opción: ", texto);
    scanf("%d", &num);
    do {
        encontro = false;
        limpiar_salto_linea();
        if (num < num_min || num > num_max) {
            system("clear");
            printf("%s", texto);
            error("ingrese un número valida.");
            printf("Ingrese un opción: ");
            scanf("%d", &num);
        } else
            encontro = true;
    } while (encontro == false);
    system("clear");
    return num;
}

void pausa(void) {
    char i = '\0';
    puts("Presione ENTER para continuar...");
    scanf("%c", &i);
    system("clear");
}
