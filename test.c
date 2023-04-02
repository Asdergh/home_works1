#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>




void matrix_printer(int array[100][100]){
     for(int i = 0; i < 100; i ++){
        for(int j = 0; j < 100; j++){
            printf("%i\t", array[i][j]);
        }
     printf("\n");
     }
}

void array_2d(){
    int array[100][100];
    for(int i = 0; i < 100; i++){
        for(int j = 0; i < 100; j++){
            array[i][j] = rand() % 30;
        }
    }
    matrix_printer(array);
    
    
}

int main(){
    char num = "123";
    printf("the value: %i\n", atoi(num));
    return 0;
}