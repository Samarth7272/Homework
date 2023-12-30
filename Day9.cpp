#include <iostream>
using namespace std;
//  First Pattern:

/*        
     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5 
     1 2 3 4 5 6 
     1 2 3 4 5 6
   */  


/* int main()
{   
    for(int i=1;i<7;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
} */

//  Second Pattern:
/*    
    A
    A B
    A B C
    A B C D
    A B C D E
 */

/* int main()
{   
    for(int i=0;i<6;i++)
    {
        for(char j='A';j<'A'+i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
} */

// Third Pattern:
     
 /*    10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15

 */

/* int main()
{   
    for(int i=0;i<6;i++)
    {
        for(int j=10;j<=10+i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
} */

//  Fourth Pattern:

/* 
      A B C D
      A B C
      A B
      A

 */
/* int main()
{
    for(int i=0;i<5;i++)
    {
        for(char j='A';j<'A'+(4-i);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
} */