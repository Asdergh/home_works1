#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


//функция создания одномерного масива на C
void array_Creater(const int Size){
    
    const int SIZE = Size;
    char array_i[300];
    for (int i = 0; i < 300; i++){
        int elem = rand() % 100;
        array_i[i] = elem;
        printf("%i --- %i\n", i, elem);
    }
    printf("[Start the printing procese]\n");
    for (int i = 0; i < 300; i ++){
        printf("the number of elemnt %i --- the value %i\n", i, array_i[i]);
    }
}
// функция обработки строки задание 02
void string_reader(){
    char string[100];
    int counter = 0;
    printf("\n enter the input here: \n");
    scanf("input the string: %c\n", string);
    for(int i = 0; i < 100; i ++){
        char tmp_char = string[i];
        if(tmp_char == " "){
            string[i] = "";
        }
        else{
            string[i] = tmp_char;
            counter ++;
        }
    }
    for(int i = 0; i < counter; i ++){
        printf("%c", string[i]);
    }
}

// функция getinput 
char getinput(){
    char string[100];
    printf("input the string here: \n");
    scanf("%c", string);
    return string;
}
int strToint(char string){
    return atoi(string);
}

int main(){
    char tir;
    int tir_int;
    const char strin[10] = "1212121212";
    array_Creater(25);
    string_reader();
    //array_2d();
    tir = getinput();
    printf("\n%c\n", tir);
    tir_int = strToint(strin);
    printf("\n%i\n", tir_int);


    
}



