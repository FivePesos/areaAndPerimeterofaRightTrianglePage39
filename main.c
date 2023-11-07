#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void perimeterAndArea();
int main()
{
    perimeterAndArea(123.0, 123.0);
    return 0;
}

void perimeterAndArea(double a, double b){
    double area;
    double perimeter;
    double hypotenuse;
    hypotenuse = sqrt((a*a)+(b*b));
    perimeter = a + b + hypotenuse;
    area = 0.5 * (a * b);
    printf("%The perimeter of the triangle is %lf\n", perimeter);
    printf("The area of the triangle is %lf", area);
}
