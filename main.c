#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, xone, xtwo, delta;
    char op;

    do {
        //printf here
        scanf("%lf %lf %lf", &a, &b, &c);

        delta = (b * b) - 4 * a * c;

        if (delta < 0){
            printf("Delta < 0, x does not intercept x-axis.");

        }else if(delta == 0){
            printf("Delta = 0.: y = c.: c = %lf", c);

        }else{
            xone = ((-b) + sqrt(delta))/(2 * a);
            xtwo = ((-b) - sqrt(delta))/(2 * a);

            //printf("%lf %lf", &xone, &xtwo);
            printf("%lf", xone);
            printf("%lf", xtwo);
        }

        printf("\n Wanna leave? Type 'y' if you wanna leave.\n");
        op = getchar();

    }while(op != 'y');

    return 0;
}