#include <mega164.h>
#include <stdbool.h>
#include <stdio.h>

bool verificare_joc(int tabla[3][3], int nr) {
    int i, j;
    int c = 0, k = 0, l = 0, p = 0;
    for (i = 0; i < 3; i++) {
        if (tabla[i][i] == nr) c++;
        for (j = 0; j < 3; j++) {
            if (tabla[i][j] == nr) k++;
            if (tabla[j][i] == nr) l++;
            if (i + j == 2 && tabla[i][j] == nr) p++;
        }
        if (k == 3 || l == 3) return false;
        k = 0;
        l = 0;
    }
    return !(c == 3 || p == 3);
}

bool Space(int tabla[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (tabla[i][j] == 0) return true;
        }
    }
    return false;
}

void Afisare(int tabla[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", tabla[i][j]);
        }
        printf("\n");
    }
}

 
void Transmis(int n , int *output)
{

     if(n==0)
     {
        output[0]=0;
        output[1]=0;
        output[2]=0;
     }
     
     if(n==1)
     {
        output[0]=255;
        output[1]=0;
        output[2]=0;
     }
    if(n==2)
     {
       output[0]=0;
       output[1]=255;
       output[2]=0;
     } 
     return *output;
}

/*void Delay_Elem()
{
    for(
}            */