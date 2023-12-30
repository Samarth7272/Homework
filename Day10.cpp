#include <iostream>
using namespace std;

//First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
/* 
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1          
  */
 /* 
 int main()
 {
    for(int i= 1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        cout<<" ";
        for(int j=i;j>0;j--)
        cout<<j;

        cout<<endl;
    }
 }
 */

//Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
/*     
        A
      B B
    C C C
  D D D D
E E E E E

 */
/*  int main()
 {
    for(int i= 1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<char('A'+(i-1));

        cout<<endl;
    }
 } */
//Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

/* 
        5
      5 4
    5 4 3
  5 4 3 2 
5 4 3 2 1
*/
/* 
 int main()
 {
    for(int i= 1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
            cout<<" ";

        for(int j=5;j>5-i;j--)
            cout<<j;

        cout<<endl;
    }
 }
     */   

//Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

/* 
        E
      E D
    E D C
  E D C B
E D C B A
 
 */

/*  int main()
 {
    for(int i= 1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        cout<<" ";
        for(char j='E';j>='E'-i+1;j--)
        cout<<j;

        cout<<endl;
    }
 } */