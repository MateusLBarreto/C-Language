#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len = 10;
int poten_10(int exp){
    int temp  = exp;
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
    int i     = 0;
    for(i = 0; i < len; i++){
        resul += array[i] * poten_10(len - i); 
    }
    return resul;
    // done - do not edit
}

int read_line(FILE *ptr){
    char letra;
    int  position = 0;
    int char_invalido = 0;

    ptr = fopen("number.txt", "r+");
    while(fscanf(ptr, "%c", &letra) != EOF && fscanf(ptr, "%c", &letra) != '\n' || char_invalido != 0){
        if (fscanf(ptr, "%c", &letra) == '\n'){
            char_invalido++;
        }
        else{
            fseek(ptr, position, SEEK_SET);
            fscanf(ptr, "%c", &letra);
            printf("%c", letra);
            position++;
        }
    }
    // char line[position];
    // position = 0;
    // while(fscanf(ptr, "%c", &letra) != EOF){
    //     fseek(ptr, position, SEEK_SET);
    //     fscanf(ptr, "%c", &letra);
    //     line[position] = letra;
    //     position++;
    // }
    // this part of the code will be used to return the line read bt this function

    // current problems :
    //  - function read entire file, not first line

    fclose(ptr);
    return 0;
}
int main(){
    FILE *point;
    read_line(point);
    // running this code will read the entire 'number.txt' file and print it in the terminal

    return 0;
}