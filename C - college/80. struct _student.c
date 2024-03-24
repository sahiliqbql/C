#include <stdio.h>
#include <string.h>
int main(){
    typedef struct id{
        char name[100];
        int roll;
        float marks;
    } id;
    id boy1;
    
    strcpy(boy1.name,"rahul");
    boy1.roll = 1;
    boy1.marks = 87.5;

    printf("%s\n",boy1.name);
    printf("%d\n",boy1.roll);
    printf("%f\n",boy1.marks);
    return 0;
}
