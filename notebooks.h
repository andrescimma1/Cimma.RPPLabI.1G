#ifndef NOTEBOOKS_H_INCLUDED
#define NOTEBOOKS_H_INCLUDED


#include "marcas.h"
#include "tipos.h"
#include "clientes.h"
#include "RAM.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    int id;
    char modelo[20];
    int idMarca;
    int idTipo;
    int precio;
    int ocupado;
    int idCliente;
    int idRAM;
}eNotebook;

void inicializarNotebooks(eNotebook arrayNotebooks[], int tamnot);
int buscarLibre(eNotebook arrayNotebooks[], int tamnot);
void listarNotebook(eNotebook pNotebook, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void ordenarPorMarcaYprecio(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip);
int listarNotebooks(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
int generarId(eNotebook arrayNotebooks[], int tamnot);
void altaNotebook(eNotebook arrayNotebooks[], int tamnot, eMarca arrayMarcas[], int tammar, eTipo arrayTipos[], int tamtip, eCliente arrayClientes[], int tamcli);
int menu();
void modificarNotebook(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
int submenu();
void bajaNotebook(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void mostrarNotebooksPorTipoSeleccionado(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void mostrarNotebooksPorMarcaSeleccionada(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void informarLaOLasNotebooksMasBaratas(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void separarPorMarca(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void mostrarNotebooksPorTipoYMarca(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void mostrarLaOLasMarcasMasElegidas(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar);

void mostrarNotebooksPorRamSeleccionada(eNotebook arrayNotebooks[], int tamnot, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void informarLaOLasNotebooksMasCaras(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void separarPorRAM(eNotebook arrayNotebooks[], int len, eMarca arrayMarcas[], int lenmar, eTipo arrayTipos[], int lentip, eCliente arrayClientes[], int tamcli, eRAM arrayRams[], int tamram);
void mostrarLaOLasRamMasElegidas(eNotebook arrayNotebooks[], int len, eRAM arrayRams[], int tamram);
void ordenarPorRAM(eRAM arrayRams[], int tamram, eNotebook arrayNotebooks[], int tamnot);



#endif // NOTEBOOKS_H_INCLUDED
