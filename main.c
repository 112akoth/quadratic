#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,root1,root2, uniq;
    printf(" Please enter a \n");
    scanf("%lf",&a);
    printf(" Please enter b \n");
    scanf("%lf",&b);
    printf(" Please enter c \n");
    scanf("%lf",&c);
    uniq = (b*b) - (4 * a *c);
    if (uniq == 0){
        root1 = (-b + sqrt(b*b-4.*a*c) ) / (2.*a);
        root2 = root1;
        printf("\n First root is %lf ",root1);
        printf("\n Second root is %lf ",root2);
    } else if (uniq > 0){
        root1 = (-b + sqrt(b*b-4.*a*c) ) / (2.*a);
        root2 = (-b - sqrt(b*b-4.*a*c) ) / (2.*a);
        printf("\n First root is %lf ",root1);
        printf("\n Second root is %lf ",root2);
    } else{
        root1 = 0;
        root2 = 0;
        printf("\n First root is %lf ",root1);
        printf("\n Second root is %lf ",root2);
    }

    printf("\n ");
    return 0;
}
