#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int poten_10(int exp){
    int temp = exp;
    int resul = 1;
    while(temp > 1){
        resul *= 10;
        temp--;
    }
    return resul;
    // done - do not edit
}
int array_into_int(int array[], int len){
    int resul = 0;
    int i = 0;
    for(i = 0; i < len; i++){
        resul += array[i] * poten_10(len - i); 
    }
    return resul;
    // done - do not edit
}

int read_file(FILE *ptr, int linha){
    // essa func vai ler uma linha de um arquivo e colocar essa linha num array
}

int main(){
    // int lista[7] = {4, 5, 6, 2, 3, 0, 4};
    // printf("resultado : %d\n", array_into_int(lista, sizeof lista / sizeof(int)));
    // ^ teste array_into_int()
    

    return 0;
}