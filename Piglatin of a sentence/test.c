/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
  char u[80], g[100];
  int pcount = 1, qcount = 0,pfirst=0;
  printf ("Enter string: ");
  scanf ("%[^\n]", u);
  while(u[pcount]!='\0')
    if(u[pcount]!=' ')
        g[qcount++]=u[pcount++];
    else
    {

        g[qcount++]=u[pfirst];
        g[qcount++]='a';
        g[qcount++]=' ';
        pfirst=pcount+1;
        pcount=pcount+2;
    }
    g[qcount++]=u[pfirst];
    g[qcount++]='a';
    g[qcount++]=' ';
    pfirst=pcount+1;
    pcount=pcount+2;
    g[qcount]='\0';
    
    printf ("Output is:%s", g);    
    return 0;
}
