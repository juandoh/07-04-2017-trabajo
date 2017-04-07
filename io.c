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

   num = fileList(argv[1]);
   //iniciarLista();
   /* int n=0;
    char p[50];
    printf("Por favor digite la ruta del directorio:\n");
    scanf("%s", p);

    n = filesize(p);
    printf("%i\n", n);*/

    printf("Estudiante_1: 201630494\n");
    printf("Estudiante_2: 201625930\n");
    printf("Total archivos: %d\n", num);
    printf("Total bytes: %d\n", num);


    return EXIT_SUCCESS;
}
