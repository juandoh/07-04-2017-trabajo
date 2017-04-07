#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
//#include "fileutil.h"

/* funcion para devolver un error en caso de que ocurra*/
void error(const char *s){
/*perror() devuelve una cadena s y el error*/
perror(s);
exit(EXIT_FAILURE);
}

/*Para iniciar lista
void iniciarLista()
{
    typedef struct lista {
        char nombreArchivo[30];
        struct lista *siguiente;
        };

        struct lista *primero, *ultimo;

    primero = (struct lista *)NULL;
    ultimo = (struct lista *)NULL;
    //primero = NULL;
    //ultimo = NULL;
}*/

/* funcion para calcular el tamanno del archivo*/
int filesize(char *filename)
{
/* Definicion e inicializacion de variables*/
        FILE *fp;
        int count = 0;

        // Se abre el archivo y se contara caracter por caracter el numero
        // de bytes del archivo
        fp = fopen(filename,"r");
        if (fp == NULL) {
                perror("filesize - No se pudo abrir archivo\n");
                return -1;
        }
        while (fgetc(fp) != EOF) {
                count++;
        }
        fclose(fp);
        return count;
}

void tot(int tam)
{
    //printf("hola");
    int *can = 0;
    can = &tam;
}


/*funcion para listar los acrchivos de un directorio*/
int fileList(char *dir)
{
    DIR *mydir;
    struct dirent *myfile;
    struct stat buffer;
    mydir = opendir(dir);
    int prueba = 0;
    int numfiles = 0;
    //iniciarLista();

    /*Se mira que no haya eeros*/
    if (dir == NULL)
        error("No se puedo abrir el directorio");

    while((myfile = readdir(mydir)) != NULL)
    {
        stat(myfile->d_name,&buffer);
        if(!S_ISDIR(buffer.st_mode)) {
            prueba += filesize(myfile->d_name);
            ++numfiles;
        }
    }
    closedir(mydir);
    //printf("cantidad:---%i\n", prueba);
    return prueba;
    //total(numfiles);
}

/*
void guardaArchivo(char *cadena)
{
    struct lista *nuevo;

    /*Se reserva memoria para el nuevo elemento
    nuevo = (struct lista *) malloc (sizeof(struct lista));
    if (nuevo==NULL) printf("No hay memoria disponible!\n");

    nuevo->nombreArchivo = cadena;

    /*En el campo siguiente va ser NULL por ser el ultimo elemento
    nuevo->siguiente = NULL;*/

    /*Ahora ingresamos el nuevo dato en la lista, en la ultima posicion*/
    /*Primero comprobamos si esta vacia la lista*/
    /*if(primero==NULL)
        {
            primero = nuevo;
            ultimo = nuevo;
        }
        else{
            /* El que hasta ahora era el ultimo tiene que apuntar al nuevo*/
/*            ultimo->siguiente = nuevo;*/

            /*Hacemos que el nuevo sea ahora el ultimo */
 /*           ultimo = nuevo;
        }

}*/
/*
void mostrar lista()
{
    /*Se usara para recorrer la lista*/
/*    struct lista *auxiliar;
    int i=0;
    auxiliar = primero;
    while(auxiliar!=NULL){
        printf("%i. %s\n", auxiliar->nombreArchivo, i);
        auxiliar = auxiliar->siguiente;
        i++;
    }
    if(i==0) printf("\nLa lista esta vacia!\n");
}*/

