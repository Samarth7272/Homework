#include <iostream>
using namespace std;

            //[IF ELSE]
//[Q1] Two numbers are given,print the bigger number,It is given that both numbers can't be the same.

/* int main()
{
    cout<<"Enter two numbers:"<<endl;
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<"a is bigger.";
    else 
        cout<<"b is bigger";
} */

// [Q2] Age of a person is given,print Adult if his/her age is greater than 18, otherwise print Teenager.

/* int main()
{
    cout<<"Enter the age of a person:";
    int age;
    cin>>age;
    if(age>18)
        cout<<"Adult";
    else    
        cout<<"Teenager";
} */

//[Q3] Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

/* int main()
{
    cout<<"Enter the month number:";
    int n;
    cin>>n;
    if(n==1)
        cout<<"January";
        else if(n==2)
        cout<<"February";
        else if(n==2)
        cout<<"February";
        else if(n==3)
        cout<<"March";
        else if(n==4)
        cout<<"April";
        else if(n==5)
        cout<<"May";
        else if(n==6)
        cout<<"June";
        else if(n==7)
        cout<<"July";
        else if(n==8)
        cout<<"August";
        else if(n==9)
        cout<<"September";
        else if(n==10)
        cout<<"October";
        else if(n==11)
        cout<<"November"; 
        else if(n==12)
        cout<<"December";
        else 
        cout<<"Invalid Input:";
} */

//[Q4] Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

/* int main()
{
    cout<<"Enter the age:"<<endl;
    int age;
    cin>>age;
    if(age < 12 || age > 65)
        cout<<"Eligible for discount:";
    else
        cout<<"Not eligible for discount:";
} */

        // FOR LOOP

//[Q1] Print “India will win the World Cup 2023”, 20 times.

/* int main()
{
    for(int i=0; i<20; i++)
    {
        cout<<"India will win the World Cup 2023:"<<endl;
    }
} */

//[Q2] Print all Odd numbers from 1 to n, take n as an input from the user.

/* int main()
{
    cout<<"Enter the value of n:"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i=i+1)
    {
        if(i%2!=0)
            cout<<i<<endl;
    }
} */

//[Q3] Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

/* int main()
{
    cout<<"Enter the value of n:";
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%4==0)
            cout<<i<<" ";
    }
} */