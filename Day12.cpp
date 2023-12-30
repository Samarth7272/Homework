#include<iostream>
using namespace std;

// [1] Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 
/* 
int main()
{
    cout<<"Enter the temprature in fahrenhiet:";
    int temp;
    cin>>temp;
    if(temp>70 && temp<90)
        cout<<"Yes";
    else
        cout<<"No";
} */

//[2] Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

/* int main()
{
    cout<<"Enter the Number:";
    int n;
    cin>>n;
    if(n>0 && n%2==0)
        cout<<"Yes";
    else
        cout<<"No";
} */

// [3]: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

/* int main()
{
    cout<<"Enter your age:";
    int age;
    cin>>age;
    if(age>=13 && age<=19)
        cout<<"You are a teenager";
        else
        cout<<"You are an adult:";
} */

// [4]  Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
/* int main()
{
    cout<<"Enter three numbers a,b,c: "<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b || a>c)
        cout<<"YES";
    else
        cout<<"NO";
} */

// [5]: What will be the result below according to the precedence table.
int main()
{
   cout<<(2*3-48==5/4*6)<<endl;
   cout<<(6<<2-4*8/2)<<endl;
   cout<<(5>4<3/2-8%4+5)<<endl;
   cout<<(14-8+92>>2+70)<<endl;
}
//he warning you're seeing is due to the left shift operation in the second std::cout statement where you have (6 << 2) - 4 * 8 / 2. The warning is indicating that the left shift count is negative, which is undefined behavior in C++