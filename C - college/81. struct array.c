#include <stdio.h>
int main(){
    typedef struct boy{
        char name;
        int roll;
        float marks;
    } boy;
    boy arr[20];
    for(int i=0; i<20; i++){
        printf("enter name %d : ",i+1);
        scanf("%s",&arr[i].name);
        printf("enter roll of %d : ",i+1);
        scanf("%d",&arr[i].roll);
        printf("enter marks of %d : ",i+1);
        scanf("%f",&arr[i].marks);
        printf("\n");
    }
    return 0;
}
