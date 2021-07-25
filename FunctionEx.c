//ex 1. Display Prime Numbers Between Intervals Using Function

// 1. Enter the number of elements 
// 2. Enter different numbers to an array
// 3. Checking the interval for natural numbers
// 4. Printing the result

/*
#include <stdio.h>
int main(){

    int array [100];
    int n;

    printf("Enter number of elements: \n");
    scanf("%d", &n);

    printf("\n");
    printf("Enter an %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]) ;  
    }

    for (int i = 0; i < n; i++) {
       if ( array[i]> 0 && (array[i] % 1) == 0){
           printf("The element %d is a nutural number = %d\n", i + 1, array[i]);
       } 
    }

    return 0;
}


/////////////////////////////////////////////////////////
//ex 1. way 2.Display Prime Numbers Between Intervals Using Function

// 1. Enter the number of elements 
// 2. Enter different numbers to an array / function getElements
// 3. Checking the interval for natural numbers / function checkPrintNum
// 4. Printing the result / function checkPrintNum

#include <stdio.h>

int checkNum(int nf);

int main(){

    int min, max, flag;

    printf("Enter two positive integers: \n");
    scanf("%d %d", &min, &max);

    printf("Prime numbers between %d and %d is:\n", min, max);

    for (int i = min +1; i < max; ++i){

        flag = checkNum(i);

        if (flag == 1)printf("%d   ", i);
    }

    printf("\n");

    return 0;
}

int checkNum(nf){
    int j, flag = 1;
    for (j = 2; j <= nf / 2; ++j){
        if ( nf % j == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}


//////////////////////////////////////////////////////////////

// ex 2. Calculate the power using recursion

#include <stdio.h>
int getRes(int xf, int nf);

int main(){

    int x, n, res;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("Enter the power: ");
    scanf("%d", &n);

    res = getRes (x, n);
    printf("%d ^ %d = %d;\n", x, n, res );

    return 0;
}

int getRes (int xf, int nf){
    if (nf != 0){
        return (xf * getRes(xf, nf - 1));
    } else {
        return 1;
    }

}


////////////////////////////////////////////////////////////////////

// ex 3. Reverse a sentence using recursion

#include <stdio.h>

void reverseSentence();

int main(){
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence(){
    char c;
    scanf("%c", &c);
    if (c !='\n'){
        reverseSentence();
        printf("%c", c);
    }
}


////////////////////////////////////////////////////////////////////

// ex 4. Convert Binary Number to Octal and vice-versa

#include <stdio.h>
#include <math.h>

int converterOct(long long binxf);

int main(){

    long long binx;

    printf("Enter the number in binary system: ");
    scanf("%lld", &binx);
    printf("The number %lld in octal is: %d\n", binx, converterOct(binx));
    return 0;
}

int converterOct(long long binxf){
    int octxf = 0, decxf = 0, i = 0;

    while (binxf != 0){
        decxf += (binxf % 10) * pow (2, i);
        ++i;
        binxf /= 10;
    }
    i = 1;

    while (decxf != 0){
        octxf += (decxf % 8 ) * i;
        decxf /= 8;
        i *= 10; 
    }
    return octxf;
}


////////////////////////////////////////////////////////
// ex 5. Convert Octal Number to Decimal and vice-versa

#include <stdio.h>
#include <math.h>

int convert (long long octxF);

int main(){

    long long octx;

    printf("Enter the octal number: ");
    scanf("%lld", &octx);

    printf("The octal %lld in decimal is %d\n", octx, convert (octx));
    return 0;
}

int convert(long long octxf){
    int i = 0, decxf = 0;
    while (octxf != 0){
    decxf += (octxf % 10) * pow (8, i);
    ++i;
    octxf /= 10;
    }
    return decxf;    
}


/////////////////////////////////////////////////
// ex 6. Convert Binary Number to Decimal and vice-versa

#include <stdio.h>
#include <math.h>

int convert (long long binxF);

int main(){

    long long binx;

    printf("Enter the binary number: ");
    scanf("%lld", &binx);

    printf("The binary %lld in decimal is %d\n", binx, convert (binx));
    return 0;
}

int convert(long long binxf){
    int i = 0, decxf = 0;
    while (binxf != 0){
    decxf += (binxf % 10) * pow (2, i);
    ++i;
    binxf /= 10;
    }
    return decxf;    
}


//////////////////////////////////////////////////

// ex 7. Find G.C.D Using Recursion

#include <stdio.h>

int gcd (int af, int bf);

int main(){

    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));

    return 0;
}

int gcd(int af,int bf){
    if ( bf != 0){
        return gcd(bf, af % bf);
    } else
    {
        return af;
    }
}   

//////////////////////////////////////////////////////

// ex 7. Find Factorial of a Number Using Recursion

#include <stdio.h>

int getFactorial (int xf);

int main(){

    int x;

    printf("Enter integer: ");
    scanf("%d", &x);
    printf("Factorial of %d = %d\n", x, getFactorial(x));

    return 0; 
}

int getFactorial (xf){
    if ( xf >= 1){
        return ( xf * getFactorial (xf - 1));
    } else
    {
        return 1;
    }
} 
  
///////////////////////////////////////////////////////////

// ex 8. #include <stdio.h>
#include <stdio.h>
int getSum (int xf);

int main(){

    int x;

    printf("Enter integer: ");
    scanf("%d", &x);
    printf("Sum %d = %d\n", x, getSum(x));

    return 0; 
}

int getSum (xf){
    if ( xf != 0){
        return ( xf + getSum (xf - 1));
    } else
    {
        return xf;
    }
}

//////////////////////////////////////////////////////////

// ex 9. Whether a Number can be Expressed as Sum of Two Prime Numbers

// 1. Enter number
// 2. Split into terms x = a + b / first a = 1, second x = (a+i) + (b-i);
// 3. Check a and b if they prime; / recurtion function checkPrime
// 4. Print result.

#include <stdio.h>

int checkPrime(int, int);

int main(){

    int x, a;

    printf("Enter positive integer: ");
    scanf("%d", &x);

    if (x != 1 && x > 0 && x != 2){
        for (int i = 2; i <= x/2; ++i){
            a = x - i;
            if (checkPrime(a, a/2)== 1 && checkPrime(i, i/2) == 1){
                printf("Terms (%d and %d) of integer %d is prime.\n", a, i, x);
            } 
            // else
            // {
            //     printf("%d don't have ane prime terms.\n", x);
            // }
        }
    } else
    {
        printf("Error! Enter another positive integer: ");
        scanf("%d", &x);
    }
    
    return 0;
}

int checkPrime(nf, i){
    if (i == 1){ 
        return 1;
    } else {
        if (nf % i == 0){
            return 0;
        } else {
        return (checkPrime(nf, i - 1));
        }
    }
}
*/

////////////////////////////////////////////////////////////
 // ex 10. Check Prime or Armstrong Number Using User-defined Function

/*int main(void)
{
    while (1)
    {
        int a;
        printf("Enter the number you want to identify as an Armstrong number or not: ");
        if (scanf("%d", &a) != 1 || a <= 0)
            break;
        else if (isArmstrongNumber(a))
            printf("%d is an Armstrong number\n", a);
        else
            printf("%d is not an Armstrong number\n", a);
    }

    return 0;
} */

#include <stdio.h>

int checkPrime(int, int);
int checkArmstrong (int);
int power (int, int);

int main(){

    int num;

    printf("\nEnter the number you want to identify: ");
     scanf("%d", &num);

    // if (num == 1 || num <= 0) {
    //     printf("This number is not correct for check.");
    // }
    
    // printf("arm = %d, prime =%d \n\n", checkArmstrong(num), checkPrime(num, num/2));

    if (checkArmstrong(num) == 1 && checkPrime(num, num/2) == 1){
        printf("Number %d is a prime number and Armstrong number.\n\n", num);
    } else if (checkArmstrong(num) == 0 && checkPrime(num, num/2) == 1){
        printf("Number %d is a prime number and is NOT Armstrong number.\n\n", num);
    } else if (checkArmstrong(num) == 1 && checkPrime(num, num/2) == 0){
        printf("Number %d is Armstrong  number and is NOT prime number.\n\n", num);
    } else {
        printf("The number %d is NOT prime or Armstrong number.\n\n", num);
    }
    return 0;
}

int checkPrime (numf, i){
    if (i == 1){ 
        return 1;
    } else {
        if ( numf % i == 0) {
            return 0;   
        } else {
            return checkPrime (numf, i - 1);
        }
    }
}

int power(numf, pow){
    if (pow == 1) return numf;
    else
    {
        return numf *= power(numf, pow - 1);
    }
}

int checkArmstrong(numf){
    int sum = 0;
    int a = numf;
    int pow;
    for (pow = 0; a != 0; ++pow){
        a = a / 10;
    }
    a = numf;
    for (int i = 0; i < pow; ++i)
    {
        sum += power(a % 10, pow);
        a = a / 10;
    }
    return(sum == numf);
}