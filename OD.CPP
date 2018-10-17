#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

/*struct word
{ char *w;}W[1000];*/

char wd[1000][20];

void main()
{
 clrscr();

 char *stmt;
 int start[1000],ptr=1,i,stop[1000],n,j;

 start[0]=0;

 cout<<"Enter statement here:(leave one blank space first; keep below 1000 words)\n";

 gets(stmt);
 for(i=1;stmt[i]!='\0';i++)
 {if((isspace(stmt[i]))||stmt[i]==','||stmt[i]=='.'||stmt[i]==':'||stmt[i]==';')
  {start[ptr]=i; ptr++;} }
  n=ptr;

 for(i=1;i<n;i++)
 {stop[i-1]=start[i];}



 /*for(i=0;i<n-1;i++)
 {cout<<start[i]<<"\t"<<stop[i]<<endl;}
 cout<<start[n-1]; */

 for(i=0;i<n;i++)
 { j=0;
   for(ptr=start[i];ptr<stop[i];ptr++)
   {wd[i][j]=stmt[ptr]; j++;}
 }



/* for(i=0;i<n;i++)
 { for(j=0;wd[i][j]!='\0';j++)
   {cout<<wd[i][j];}
   cout<<endl;
 }*/


 int **A;
 **A=A[n][n];

 for(i=0;i<n;i++)
 { for(j=0;j<n;j++)
   { A[i][j]=strcmp(wd[i],wd[j]);}
 }

 int *count;
 count=&count[n];

 for(i=0;i<n;i++)
 {count[i]=0;
  for(j=0;j<n;j++)
  {if(A[i][j]==0)
   count[i]++;
  }
 }

 /*for(i=0;i<n;i++)
 {cout<<endl<<count[i];}*/

 int max=count[0],s1,s2;

 for(i=0;i<n;i++)
 {if(max<count[i])max=count[i];}

 for(i=0;i<n;i++)
 {if(count[i]>0.50*max&&count[i]<0.95*max)
  puts(wd[i]);}

 getch();
}