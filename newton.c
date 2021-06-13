#include <stdio.h>
#include <math.h>

#define EPS (1.0e-5) // the error threshold
#define f(x) (x*x - 2*x + sin(x)) // non-linear equation
#define df(x) (2*x - 2 + cos(x)) // differentiation of f(x)

int main(void) {
    double xnew, xold;

    printf("x0="); // initial value
    scanf("%lf", &xnew);

    xold = xnew - 1;

    while (fabs(xnew - xold) > EPS) {
        xold = xnew;
        xnew = -1 * f(xold) / df(xold) + xold;
        printf("x=%.6f f(x)=%.20f\n", xnew , f(xnew));
    }

    return 0;
}