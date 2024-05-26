#include <stdio.h>

typedef struct car{
    int speed;
    int price;
}  car;

int main(){
    car lambo;
    int* x = &lambo;
    printf("%p",x);
    //its actualy print the first i.e speed adress
    int* y = &lambo.speed;
    printf("%p",&lambo.speed);
    return 0; 
}