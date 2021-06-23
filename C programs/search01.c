#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{   int n,i,ii,m=10,j;
     char a[20], input[20],nul[]="\n";
     printf("Enter entry to be searched\n");
     scanf("%s",input);
     strcat (input , nul);

    FILE *fp21;
    fp21 = fopen ("Entries","r");
    for (j=0 ; j<20 ; j++)
{
        for (i=0 ; i<19 ; i++)
  {            if (m==10)
               {
                    a[i] = getc(fp21);

                    if (a[i]=='\n')
                     m=20;
               }
               if(m==20)
               { ii = i + 1;
                 a[ii]=0;
               }
  }
      n =  strcmp(input,a);
      if (n==0)
      {
          printf("Entry found\n");
          exit(0);
      }

       m=10;
}
   printf("Entry not found\n");
}
