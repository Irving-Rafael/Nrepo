//irving Rafael Ruvalcaba Hernandez
//216570079 Centro universitario de ciencias exactas e ingenierias
//Ing.en computacion
#ifndef PROGRAMA1_H_INCLUDED
#define PROGRAMA1_H_INCLUDED
#include<stdio.h>
int programa1()
{
    int n1, resultado;
    printf("Digite su monto total\n");
    scanf("%i",&n1);
    
    resultado=n1*.32;
    n1= n1-resultado;
    printf("Su monto total es:%i", n1);
    return(0);
}


#endif // PROGRAMA1_H_INCLUDED
