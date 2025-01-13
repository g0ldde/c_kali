#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <float.h>
void main(){
   printf("bool\t%i byte\tmin value %i\tmax value %i\n", sizeof(bool), 0, 1);

   printf("signed char\t%i byte\tmin value %d\tmax value %i\n", sizeof(char), CHAR_MIN, CHAR_MAX);
   printf("unsigned char\t%i byte\tmin value %u\tmax value %i\n", sizeof(unsigned char), 0, UCHAR_MAX);

   printf("short int\t%lu byte\tmin value %d\tmax value %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);  
   printf("unsigned short int\t%lu byte\tmin value %u\tmax value %u\n", sizeof(unsigned short), 0, USHRT_MAX);
   printf("unsigned short\t%lu byte\tmin value %u\tmax value %u\n", sizeof(unsigned short), 0, USHRT_MAX);
   printf("signed short int\t%lu byte\tmin value %d\tmax value %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);

   printf("int\t%lu byte\tmin value %d\tmax value %d\n", sizeof(int), INT_MIN, INT_MAX);
   printf("unsigned int\t%lu byte\tmin value %u\tmax value %u\n", sizeof(unsigned int), 0, UINT_MAX);
   printf("long int\t%lu byte\tmin value %ld\tmax value %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
   printf("unsigned long int\t%lu byte\tmin value %u\tmax value %lu\n", sizeof(unsigned long), 0, ULONG_MAX);

   printf("long long int\t%lu byte\tmin value %lld\tmax value %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
   printf("unsigned long long int\t%lu byte\tmin value %u\tmax value %llu\n", sizeof(unsigned long long), 0, ULLONG_MAX);

    printf("float\t%F byte\tmin value %F\tmax value %F\n", sizeof(float), FLT_MIN, FLT_MAX);

    printf("double\t%1f byte\tmin value %1f\tmax value %1f\n", sizeof(double), DBL_MIN, DBL_MAX);

    printf("long double\t%lu byte\tmin value %.10Le\tmax value %.10Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);




//    short n;
//    printf("short \t%i byte\n", sizeof(n));

//    int nu;
//    printf("int \t%i byte\n", sizeof(nu));

//    long num;
//    printf("long \t%i byte\n", sizeof(num));

//    long long numb;
//    printf("long long \t%i byte\n", sizeof(numb));

//     float numbe;
//     printf("float \t %i byte\n", sizeof(numbe));

//     double number1;
//     printf("double \t%i byte\n", sizeof(number1));

//     long double number2;
//     printf("long double\t%i byte\n", sizeof(number2));
}

