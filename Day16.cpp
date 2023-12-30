#include <iostream>
using namespace std;
// [1]	Write a program to convert binary numbers to decimal numbers using a for loop.

/* int main()
{
    cout<<"Enter a number in binary: ";
    int num,mul,rem,dec=0;
    cin>>num;
    for(mul=1;num>0;num=num/10,mul*=2)
    {
        rem=num%10;
        dec+=rem*mul;
    }
    cout<<"Decimal number is:"<<dec;
    return 0;
} */

// [2]	Write a program to convert decimal numbers to binary numbers using a for loop.
/* int main()
{
    cout<<"Enter a decimal number: ";
    int num,mul=1,rem,bin=0;
    cin>>num;
    for(int n=num;n>0;n/=2)
    {
        rem = n % 2;
        bin = rem * mul + bin;
        mul=mul*10;
    }
    cout<<"Decimal number is:"<<bin;
    return 0;
} */

// [3]	Write a program to convert decimal numbers to Octal numbers.
/* 
int main()
{
    cout<<"Enter decimal number:";
    int num,rem,oct=0,mul=1;
    cin>>num;
    while(num)
    {
        rem = num % 8;
        oct = mul * rem + oct;
        num/=8;
        mul*=10;
    }
    cout<<"Octal Equivalent is:"<<oct;
}
 */

// [4]	Write a program to convert Octal numbers to decimal numbers.
/* 
int main()
{
    cout<<"Enter a number:";
    int oct,rem,dec=0,mul=1;
    cin>>oct;
    while(oct)
    {
        rem = oct % 10;
        oct = oct / 10;
        dec = rem * mul + dec;
        mul*=8;
    }
    cout<<"Decimal Equivalent: "<< dec;
} */

// [5]	Write a program to convert binary to Octal numbers.
/* 
int BinaryToDecimal(int num)
{
    int mul,rem,dec=0;
    for(mul=1;num>0;num=num/10,mul*=2)
    {
        rem=num%10;
        dec+=rem*mul;
    }
    return dec;
}
int DecimalToOctal(int num)
{
    int rem,oct=0,mul=1;
    while(num)
    {
        rem = num % 8;
        oct = mul * rem + oct;
        num/=8;
        mul*=10;
    }
    return oct;
}
int main()
{
    cout<<"Enter a binary number: ";
    int num;
    cin>>num;
    cout<<"Binary to Octal: "<<DecimalToOctal(BinaryToDecimal(num));
}
 */

// [6]	Write a program to convert Octal numbers to binary numbers.
/* 
int OctalToDecimal(int oct)
{
    int rem,dec=0,mul=1;
    while(oct)
    {
        rem = oct % 10;
        oct = oct / 10;
        dec = rem * mul + dec;
        mul*=8;
    }
    return dec;
} 

int DecimalToBinary(int num)
{
    int mul=1,rem,bin=0;
    for(int n=num;n>0;n/=2)
    {
        rem = n % 2;
        bin = rem * mul + bin;
        mul=mul*10;
    }
    return bin;
}
 
int main()
{
    cout<<"enter a number: ";
    int num;
    cin>>num;
    cout<<"Binary equivalent is: "<<DecimalToBinary(OctalToDecimal(num));
} */