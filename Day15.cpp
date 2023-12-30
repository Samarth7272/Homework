#include <iostream>
using namespace std;
// [1] Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

/* int main()
{
    cout<<"Enter the value of n:";
    int n,i=1;
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
            cout<<i<<" ";
        i++;
    }
} */
/* int main()
{
    cout<<"Enter the value of n:";
    int i=1,n;
    cin>>n;
    do{
        if(i%2==0)
            cout<<i<<" ";
        i++;
    }while(i<=n);
} */

// [2] Find the factorial of a number n using a while loop and do a while loop.

/* int main()
{
    cout<<"Enter a Number:"<<endl;
    int i=1,n,fact=1;
    cin>>n;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    cout<<"Factorial of "<<n<<" is :"<<fact;
} */

/* int main()
{
    cout<<"Enter a Number:"<<endl;
    int i=1,n,fact=1;
    cin>>n;
    do{
        fact=fact*i;
        i++;
    }while(i<=n);
    cout<<"Factorial of "<<n<<" is :"<<fact;
} */

// [3] Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
/* 
int main()
{
    cout<<"Enter a number:";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
            continue;
        cout<<i<<" ";
    }
}
 */
// [4] Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)
/* 
int main()
{
    cout<<"Enter the number:";
    int n;
    cin>>n;
    switch(n)
    {
        case 1:
        cout<<"January"<<endl;
        break;
        case 2:
        cout<<"February"<<endl;
        break;
        case 3:
        cout<<"March"<<endl;
        break;
        case 4:
        cout<<"April"<<endl;
        break;
        case 5:
        cout<<"May"<<endl;
        break;
        case 6:
        cout<<"June"<<endl;
        break;
        case 7:
        cout<<"July"<<endl;
        break;
        case 8:
        cout<<"August"<<endl;
        break;
        case 9:
        cout<<"September"<<endl;
        break;
        case 10:
        cout<<"October"<<endl;
        break;
        case 11:
        cout<<"November"<<endl;
        break;
        case 12:
        cout<<"December"<<endl;
        break;
        default:
        cout<<"Invalid Input:";
    }
}
 */
// [5] Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
/* int main()
{
    char i='A';
    while(i<='Z')
    {
        cout<<i<<" ";
        i++;
    }
    i='a';cout<<endl;
    while(i<='z')
    {
        cout<<i<<" ";
        i++;
    }
} */

// [6] Give a number n, find if it is prime or not, use a while loop and break here to solve it.

/* int main()
{
    cout<<"Enter a Number:";
    int n,i=2;
    cin>>n;
    if(n<2)
    {
        cout<<"Not Prime"<<endl;
        return 0;
    }
    else
    {
        while(i<n)
        {
            if(n%i==0)
            {
                cout<<"Not Prime:";
                return 0;
            }
            i++;
        }
        cout<<"Prime Number:";
    }

} */

