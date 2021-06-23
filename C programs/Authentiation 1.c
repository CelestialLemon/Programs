#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{  char username[20]="Admin", input[20], pass[20] = "VIIT";
   int n,m,r,i;
for (r=0 ; r<5 ; r++)  
{ printf("Enter the Username to proceed\n");
   scanf("%s",input);
   n = strcmp (username , input);
   if (n==0)
      {
          printf("Profile found\n");
          m=20;
          break;
      }
   else
        printf("! Profile not found !\n");
}
   if (r==5)
   {  printf("!!Too many incorrect attempts!!\n");
      exit(0);
   }
  if (m==20)
    {
      for ( i=0 ; i<5 ; i++)
      {
        printf("Enter password to continue\n");
        scanf("%s",input);
        n = strcmp (pass , input);
        if (n==0)
           {
              printf("Authentication successfull\n");
             
              break;
           }
        else
           {
               printf("! Authentication unsucessfull !\n");
              
           }
      }
    }
   if (i==5)
   {
        printf("!!Too many incorrect attempts!!\n");
        exit(0);
   }
   if (i<5)
   { //rest of program here
   }
      

}
