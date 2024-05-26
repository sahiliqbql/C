#include <stdio.h>
#include <string.h>
int main(){
    struct car {
        char name[100];
        int speed;
    };

    struct car lambo;
    strcpy(lambo.name,"lamborghini");
    lambo.speed = 200;

    struct car gt;
    gt.speed = 270;

    printf("%s\n",lambo.name);
    printf("%d\n",lambo.speed);

    printf("%d",gt.speed);
    return 0;
}
