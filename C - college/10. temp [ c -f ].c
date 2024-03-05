
#include <stdio.h>

void tempIN_C_to_F(double c);
void tempIN_F_to_C(double f);
int main(){
    printf("enter your input in (c/f): ");
    char n ;
    scanf(" %c",&n);
    if (n == 'c'){
        double c ;
        printf("enter temp in c: ");
        scanf("%lf",&c);
        tempIN_C_to_F(c);
        }else{
            double f ;
            printf("enter temp in f: ");
            scanf("%lf",&f);
            tempIN_F_to_C(f);
        }
    return 0; 
}

void tempIN_C_to_F(double c){
    double f = (9*c)/5+32;
    printf("fahrenheit value is = %lf",f);
}

void tempIN_F_to_C(double f){
    double c = (f-32)/9*5;
    printf("celsius value is = %lf",c);
}
