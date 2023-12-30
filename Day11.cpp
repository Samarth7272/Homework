#include<iostream>
using namespace std;
//First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

/* 
              *
            *  *
          *  *  *
        *  *  *  *
      *  *  *  *  *         

 */
/* int main()
{
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        cout<<" ";
        for(int col=1;col<=row;col++)
        cout<<"*"<<" ";
        cout<<endl;
    }
} */

//Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
/*     
              1
            1 2 3
          1 2 3 4 5
        1 2 3 4 5 6 7
      1 2 3 4 5 6 7 8 9

 */
/* 
int main()
{
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        cout<<" ";
        for(int col=1;col<2*row;col++)
        cout<<col;
        cout<<endl;
    }
} */

//Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
/*     
              A
            A B A
          A B C B A
        A B C D C B A
      A B C D E D C B A
 */
/* 
int main()
{
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        cout<<" ";
        for(char col='A';col<'A'+row;col++)
        cout<<col;
        for(char col='A'+row-2;col>='A';col--)
        cout<<col;
        cout<<endl;
    }
} */

//Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
/* 
            *
          *  *
         *  *  *
       *  *  *  *
     *  *  *  *  *
     *  *  *  *  *
      *  *  *  *
        *  *  *  
          *  *  
           *
 */
/* 
int main()
{
    cout<<"Enter the value of n:";
    int n;
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        cout<<" ";
        for(int col=1;col<=row;col++)
        cout<<"*"<<" ";
        cout<<endl;
    }
    for(int row=n;row>0;row--)
    {
        for(int col=1;col<=n-row;col++)
        cout<<" ";
        for(int col=1;col<=row;col++)
        cout<<"*"<<" ";
        cout<<endl;
    }
} */