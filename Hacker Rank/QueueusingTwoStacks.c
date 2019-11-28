#include <stdio.h>
#include <stdlib.h>
#define MAX 100010

long int cola[MAX];
long int frente=-1;
long int contador=-1;
void ENCOLAR();
void DESENCOLAR();
void mostrar();

void ENCOLAR()
{
    
    if (frente == -1) 
    frente = 0;

    long int x;
    scanf("%ld", &x);
    contador = contador + 1;
    cola[contador] = x;    
}
void DESENCOLAR()
{
    frente = frente+1;
}

void mostrar()
{
    printf("%ld \n",cola[frente]);
}

int main()
{
    int c,i;
    long int n;
    scanf("%ld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&c);
        if(c==1)
        {
            ENCOLAR();
        }
        else if(c==2)
        {
            DESENCOLAR();
        }
        else if(c==3)
        {
         mostrar();
        }
        else
        {}
    }
}