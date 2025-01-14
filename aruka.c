#include <stdio.h> // libarary for c input and output standarts
#include <math.h>
int main()
{
    /* Begin 1 */
    /*
    // Declare variable
    float a;
    printf("Enter a side ");
    scanf("%f", &a); // & used for sigmantation fall
    printf("P = %.2f", a * 4);
    */
    
    /* Begin 2 */
    /*
    //Declare variable
    float a;
    printf("Enter a side: ");//initialization a 
    scanf("%f", &a);// read the line
    printf("S = %.3f", a * a);//print + formula
    */
    
    /* Begin 3  */
    /*
    // Declare variable
    float a, b;
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b); // ("", &a ) 1 "" argument text 2 specificator arguments
    printf("P = %.2f\nS = %.2f", 2 * (a + b), a * b);// print + formula through \n
    */
    
    /* Begin 4 */
    /*
    //Declare variable
    float d;
    const float Pi = 3.14f;
    printf("Enter a d: ");// print d side
    scanf("%f", &d);//read value of d
    printf("L = %.2f", Pi * d);//print L + formula
    */
    
    /* Begin 5*/
    /*
    //Declare variable
    float a;
    printf("Enter a: ");//print a side
    scanf("%f", &a);//read value of a
    printf("V = %.2f\nS = %.2f", a*a*a, 6 *(a*a));//Print of V and S + formula
    */
    
    /* Begin 6*/
    /*
    //Declare variable
    float a,b,c;
    printf("Enter a,b,c: ");//print a,b,c
    scanf("%f %f %f", &a, &b, &c);//initialization a, b, c
    printf("V = %.2f, S = %.2f", a * b * c,  2 * ((a * b) + (b * c) + (a * c)));//V value and S value print + formula
    */
    
    /* Begin 7*/
    /*
    //Declare variable
    float R;
    const float pi = 3.14f;//constant pi
    printf("Enter radius:"); // print r
    scanf("%f", &R);// Read line 
    printf("L = %.2f, S = %.2f", 2 * pi * R, pi * (R * R));// L, S initialization
    */
    
    
    /* Begin 8 */
    /*
    //Declare variable
    float a,b;
    printf("Eneter a, b: ");// print a, b
    scanf("%f %f", &a, &b);// Read line
    printf("Arithmetic average: %.2f", (a + b) / 2); //formula Arithmetic average
    */
    
    /* Begin 9 */
    /*
    //Declare variable
    float a,b;
    printf("Enter a, b(can not be negative): ");// print a, b
    scanf("%f %f", &a, &b);// Read line
    printf("Square root:%.2f", sqrt(a * b)); // formula Square root
    */
    
    /*Begin 10 */
    /*
    //Declare variable
    float a,b;
    printf("Enter a, b(can not be zero): ");// print a, b
    scanf("%f %f", &a, &b);// Read line
    printf("Sum = %.2f \nResidual = %.2f \nMultiplication = %.2f,\nDivision = %.5f", (a*a) + (b * b), (a * a) - (b * b), (a * a) * (b * b), (a* a) / (b*b);// formula Sum, Residual, Multiplication, Division through Multiplication
    */
    
    /*Begin  11*/
    /*
    //Declare variable
    float a,b;
    printf("Enter a, b(can not be zero): ");// print a, b
    scanf("%f %f", &a, &b);// Read line
    printf("Sum = %.2f \nResidual = %.2f \nMultiplication = %.2f\n Division = %.2f", fabs(a) + fabs(b), fabs(a) - fabs(b), fabs(a) * fabs(b), fabs(a) / fabs(b));// formula Sum, Residual, Multiplication, Division through module
    */
    
    /* Begin 12 */
    /*
    //Declare variable
    float a,b;
    printf("Enter a, b: ");// print a, b
    scanf("%f %f", &a, &b);// Read line
    printf("c = %.2f\nP = %.2f", sqrt((a * a) + (b * b)), a + b + ((a * a) + (b * b)));// formula C, P
    */

    /* Begin 13 */
    /*
    //Declare variable
    float R1, R2;
    const float pi = 3.14f;
    printf("Enter R1, R2(R2 can not be less than R1): ");// print R1, R2
    scanf("%f %f", &R1, &R2);// Read line
    printf("S1 = %.2f\nS2 = %.2f\nS3 = %.2f", pi * (R1 * R1), pi * (R2 * R2), (pi * R1 * R1) - (pi * R2 * R2));// formula S1, S2, S3
    */

    /* Begin 14 */
    /*
    //Declare variable
    float L;
    const float pi = 3.14f;// constant pi
    printf("Enter L: ");// print L
    scanf("%f", &L);// Read line
    printf("R = %.2f\nS = %.2f", L / (2 * pi), pi * (L / (2 * pi)));// formula R, S
    */

    /* Begin 15 */
    /*
    //Declare variable
    float S;
    const float pi = 3.14f; // constant pi
    printf("Enter S: ");// print S
    scanf("%f", &S);// Read line
    printf("D = %.2f\nL = %.2f", 2*sqrt(S / pi), (sqrt(S / pi) * (2 * pi)));// formula D, L
    */

    /* Begin 16 */
    /*
    //Declare variable
    float x1, x2;
    printf("Enter x1, x2: ");// print x1, x2
    scanf("%f %f", &x1, &x2);// Read line
    printf("Distance from x1 to x2: %.2f", fabs(x1 - x2));// formula Distance from x1 to x2
    */

    /* Begin 17 */
    /*
    //Declare variable
    float A, B, C;
    printf("Enter A, B, C: ");// print A, B, C
    scanf("%f %f %f", &A, &B, &C);// Read line
    printf("AC sum of distance equal to %.2f, BC sum of distance equal to %.2f, Sum of AC + BC equal to %.2f", fabs(C - A), fabs(C - B), fabs((C - A) + (C - B)));//AC + BC distance and sum of them
    */

    /* Begin 18 */
    /*
    //Declare variable
    float A, B, C;
    printf("Enter A, B, C: ");// print A, B, C
    scanf("%f %f %f", &A, &B, &C);// Read line
    printf("AC and BC distance is %.2f", fabs(C + A) * fabs(C + B));//Multiplication of AC + BC
    */

    /* Begin 19 */
    /*
    //Declare variable
    float x1, x2, y1, y2;
    printf("Enter x1, x2,y1, y2: ");// print x1, x2, y1, y2
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);// Read line
    printf("P = %.2f, S = %.2f",2 * (fabs(x2 - x1) + fabs(y2 - y1)) , fabs(x2 - x1) * fabs(y2 - y1));//value of P and S
    */
    /* Begin 20 */
    /*
    float x1, x2, y1, y2;
    printf("Enter x1, x2,y1, y2: ");// print x1, x2, y1, y2
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);// Read line
    printf("Distance is - %.2f", sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))));//Distance between (x1, y1) and (x2, y2)
    */

    return 0;
    
}
