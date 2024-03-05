#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,d;
    printf("enter x1 : ");
    scanf("%lf",&a);
    printf("enter y1 : ");
    scanf("%lf",&b);
    printf("enter x2 : ");
    scanf("%lf",&c);
    printf("enter y2 : ");
    scanf("%lf",&d);
    double dist = sqrt(pow((c-a),2)+pow((d-b),2));
    printf("distance = %lf",dist);
    return 0 ;

}
