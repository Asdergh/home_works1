#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

//char get_input();
//bool test_input(char);
//int str_to_int(char);

char get_input(){

    char string[100];
    printf("enter the string you want: \n");
    scanf("%c", string);
    return string;
}

bool test_input(char string[100]){
    for(int iter = 0; iter < 100; iter ++){
        if (atoi(string[iter]) == 0){
            return false;
            break;
        }
    }return true;
}

int str_to_int(char string[100]){
    int array[100];
    for(int iter = 0; iter < 100; iter ++){
        array[iter] = atoi(string[iter]);
    }
    return array;
}

int main(){
    char string[100];
    int array[100];
    string[100] = get_input();
    if(test_input(string) == true){
        array[100] = str_to_int(string[100]);
    }
    else{
        printf("it doesn't possible str to int");
    }
    for(int iter = 0; iter < 100; iter ++){
        printf("%i", array[iter]);
    }
    printf("\nwork end\n");
}