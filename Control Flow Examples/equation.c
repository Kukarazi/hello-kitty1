#include<stdio.h>
#include<math.h> // for sqrt();

// a*(x^2) + b*x + c = 0; x-unkown; a,b,c - known; a!=0; b^2-4*a*c = D

int main(void){
    int a,b,c,x1,x2,D,var;
    printf("Calculating Quadratic Equation: 'ax^2 + bx + c = 0'\n\n");
    printf("Enter values for 'a' , 'b' , 'c' (a!=0) \n");
    scanf("%d%d%d", &a,&b,&c);

    D = pow(b,2) - (4*a*c); // Works fine. Tested.

    var = sqrt(D);
    if(D>0){
        x1 = ((-b+var)/(2*a));  // () are essential for the right result
        x2 = ((-b-var)/(2*a));
        printf("Roots will be: x1=%d and x2=%d\n", x1 , x2);
    }else if(D==0){
        x1 = -b/2*a;
        printf("Root will be x1=%d\n", x1);
    }else if(D<0){
        printf("No roots\n");
    }


}
