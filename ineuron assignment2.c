ASSIGNMENT =2
Question=1
/*
/*
#include<stdio.h>
int main() {
   int num,num2,i;
   printf("\nenter a number");
   scanf("%d" , &num);
   num2=num%10;    //storing unit digit in num2
   printf("\n unit digit of %d is: %d",num,num2);
      for(i=2;i<=num2/2;++i) {    //loop till half of unit digit
      if(num2%i==0) { //calculate multiples
         printf("\n multiple of %d is : %d ",num2,i);
      }
   }
return 0;
}
*\
*\

Question=3
/*
/*
#include<stdio.h>
 int main()
{
int a=10, b=30, c=20;
printf("Before swap a=%d b=%d",a,b);
//a=30 (10+20)
b=c-a;//b=10 (30-20)
a=a+c;//a=20 (30-10)
printf("\nAfter swap a=%d b=%d",a,b);
return 0;
}
*\
*\

Question =4
/*
/*
#include<stdio.h>
 int main()
{
int a=10, b=20;
printf("Before swap a=%d b=%d",a,b);
a=a+b;//a=30 (10+20)
b=a-b;//b=10 (30-20)
a=a-b;//a=20 (30-10)
printf("\nAfter swap a=%d b=%d",a,b);
return 0;
}
*\
*\
Question =5
/*
/*
# include <stdio.h>
# include <conio.h>
main( )
{
int a,b,c,n, sum;
clrscr( );
printf (“ Enter a Three Digit Number:“);
scanf (“%d”,&n);
a=n/100;
b=( (n%100)/10);
c=n%10;
sum=a+b+c;
printf (“ Sum of Individual Digits of Given Numbers is %d”, Sum);
getch( );
}
*\
*\

Question =6
/*
/*
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);

    return 0;
}
*\
*\

Question =7
/*
/*
#include <stdio.h>

void main()
{
    int n, len, pos = 0, i = 0, count = 0;

    printf("**Finding the position of 1-bits in a number for given length**\n");
    printf("enter a number\n");
    scanf("%d", &n);
    printf("enter the length\n");
    scanf("%d", &len);
    while (i <= 32)
    {
        if ((n & 1) ==  1)    //checking whether there is a 1-bit in the current position
        {
            count++;//counting the consecutive 1's in the integer
            pos = i;
            if (count ==  len)    //checking whether the length matches
            {
                break;
            }
        }
        if ((n & 1) ==  0)
        {
            count = 0;
        }
        n = n>>1;
        i++;
    }
    printf("the position of 1 in the string : %d\n", pos);
}
*\
*\
Question =8
/*
/*

#include <stdio.h>

int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    if(num & 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }

    return 0;
}
*\
*\
Question =9
/*
/*
#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));

    return 0;
}
*\
*\
Question =10
/*
/*
#include <stdio.h>
int main(){
    int num, digit;

    // Asking for input
    printf("Enter the digit: ");
    scanf("%d", &num);

    digit = num % 10;

    // Displaying output
    printf("Last Digit of %d is: %d", num, digit);
    return 0;
}
*\
*\
Question =13
/*
/*
#include<stdio.h>
#include<stdlib.h>
int main(){
   int number, rotate, Msb, size;
   printf("Enter any number:");
   scanf("%d",&number);
   printf("Enter number of rotations:\n");
   scanf("%d",&rotate);
   size = sizeof(int) * 8;
   rotate %= size;
   while(rotate--){
      Msb = (number >> size) & 1;
      number = (number << 1) | Msb;
   }
   printf("After Left rotation the value is = %d\n",number);
   return 0;
}
*\
