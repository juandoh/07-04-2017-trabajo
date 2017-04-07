#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fileutil.h"
//#include <fileutil.h>

int main(int argc, char *argv[])
{
   int num = 0;
   if (argc !=2)
   {
       error("Uso: ./directorio_2<ruta>\n");
   }

   //iniciarLista();

    printf("Estudiante_1: 201630494\n");
    printf("Estudiante_2: 201625930\n");
    num = fileList(argv[1]);
    //printf("Total archivos: %d\n", num);
    //printf("Total bytes: %d\n", num);


    return EXIT_SUCCESS;
}
