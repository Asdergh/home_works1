#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#define ROWS 10
#define COLS 120

void choice_serch(char);
void buble_serch(char);
void comb_serch(char);
void simbols_distribution(char);

void choice_serch(char string[COLS]){
    for(int i = 0; i < COLS; i++){
        char min_value = "z";
        for(int j = 0; j < COLS; j++){
            if (string[j] < min_value){
                min_value = string[j];
                string[i] = min_value;
            }
        }
    }
}
void buble_serch(char string[COLS]){
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < COLS; j++){
            if(string[j] > string[j + 1]){
                char tmp_value = string[j + 1];
                string[j + 1] = string[j];
                string[j] = tmp_value; 
            }
        }
    }
}
void comb_serch(char string[COLS]){
    for(int i = 0; i < COLS; i ++){
        for(int j = 0; j < COLS; j ++){
            if(string[j] > string[COLS - j]){
                char tmp_value = string[j];
                string[j] = string[COLS - i];
                string[COLS - i] = tmp_value;
            }
        }
    }
}
void simbols_distribution(char string[COLS]){
    char simbols[6] = {"a", "e", "i", "u", "y", "o"};
    int counter_g, counter_s;
    for(int i = 0; i < COLS; i++){
        for(int j = 0; j < 6; j++){
            if(string[i] == simbols[j]){
                counter_g ++;
            }
            else{
                counter_s ++;
            }
        }
    }
    printf("count of G sibmols: %i ------- count of S simbols", counter_g, counter_s);
    free(simbols);
}

int main(){
    char array[ROWS][COLS];
    for(int i = 0; i < ROWS; i++){
        printf("enter the string: \n");
        scanf("%s", array[i]);
    }
    printf("%s", array[0][0]);
    choice_serch(array[0][0]);
    printf("%s", array[0][0]);
    print("\n--------------------------------\n");
    print("enter the strig: \n");
    char string_01[COLS];
    scanf("%s", string_01);
    simbols_distribution(string_01);
    free(string_01);
    free(array);
    

}