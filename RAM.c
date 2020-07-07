#include "RAM.h"

/** \brief Recorre las RAM y las muestra.
 *
 * \param int i;
 * \param
 * \return No devuelve nada.
 *
 */
void mostrarRAM(eRAM arrayRams[], int tamram)
{
    printf("\nMemorias RAM\n\n");
    printf("ID      GB\n");
    printf("-----------\n");

    for(int i=0; i<tamram; i++)
    {
        printf("%d       %d\n", arrayRams[i].id, arrayRams[i].gb);
    }
}


