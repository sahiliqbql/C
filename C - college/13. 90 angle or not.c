#include <stdio.h>
int main (){
    int a,b,c;
    printf("enter three angle :\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        if (a*a == b*b+c*c){
            printf ("right angle");
        }else{
            printf("not ");
        }
    }else if (b>a && b>c){
        if (b*b==a*a+c*c){
            printf ("right angle");
        }else{
            printf("not ");
        }
    }else {
        if (c*c==a*a+b*b){
            printf ("right angle");
        }else{
            printf("not ");
        }
    }
}
