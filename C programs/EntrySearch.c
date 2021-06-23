#include<stdio.h>
#include<string.h>
void main ()
{    int i=0,n;
     char a[10], input[]="Ashutosh\n";
    FILE *fp21;

    fp21 = fopen ("Entries","r");
   for (i=0 ; i<10 ; i++)
    {
        a[i] = getc(fp21);
        printf("%c",a[i]);
        if (a[i]=='\n')
            break;
    }
    n = strcmp (input , a);
    if (n==0)
        printf("Entry found\n");
    else
        printf("Entry not found\n");
}
