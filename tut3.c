//Tutorial ---> 4


//add two complex nos
#include <stdio.h>
int main (){
    float r1,i1,r2,i2;
    printf("Enter the real and imaginary part of first comlex no:(a b):");scanf("%f%f",&r1,&i1);
    printf("Enter the real and imaginary part of second comlex no:(a b):");scanf("%f%f",&r2,&i2);
    float real = r1+r2; float imag = i1+i2;
    printf("\n%.1f + i%.1f  \n%.1f + i%.1f  +\n--------------\n= %.1f + i%.1f\n ",r1,i1,r2,i2,real,imag);
    return 0;
}


//to find simple interest
/*#include <stdio.h>
int main (){
    float p,t,r;
    printf("Enter the principal amount, time period and the rate:(p t r):");scanf("%f%f%f",&p,&t,&r);
    float si = (p*t*r)/100;
    printf("Simple Intrest = %.3f",si);
    return 0;
}*/


//to find compound interest
/*#include <stdio.h>
#include <math.h>

int main() {
    float p,t,r;
    printf("Enter the principal amount, time period and the rate:(p t r):");scanf("%f%f%f",&p,&t,&r);
    float CI = p * (pow((1 + r / 100), t));
    printf("Compound interest is %.2f", CI);
    return 0;
}*/


//to find the solutions of a quatratic eqn
/*#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, rPart, iPart;
    printf("Enter the values for a b and c(ax^2+bx+c):");scanf("%f%f%f",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        printf("Roots are real and different.\nRoot 1 = %.2f\nRoot 2 = %.2f\n",root1,root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b/(2*a);
        printf("Roots are real and the same.\nRoot 1 = Root 2 = %.2f\n",root1);
    }
    else {
        rPart = -b/(2*a);
        iPart = sqrt(-discriminant)/(2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + i%.2f\n", rPart, iPart);
        printf("Root 2 = %.2f - i%.2f\n", rPart, iPart);
    }
    return 0;
}*/
