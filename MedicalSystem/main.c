#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>






struct medicine
{  int id;
   char name[20];
   char supplier[20];
   char company[20];
   char manf[20];
   char exp[20];
   int stock;
   float price;
};


void SetColor(int ForgC);



void main()
{
    int x=0;
    char uname[10] ;
    char pword[10] ;

    do
    {

    printf("\n \t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\  LOGIN  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ ");
     SetColor(11);
    printf(" \n\n                        USERNAME=");
	 SetColor(14);
	scanf("%s", uname);
	 SetColor(11);
	printf(" \n\n                        PASSWORD=");
	 SetColor(14);
    scanf("%s", pword);
	int a = strcmp("user",uname);
	int b = strcmp("pass",pword);

	if (a==0 && b==0)
    {
        SetColor(1);
	printf("  \n\n\n       WELCOME TO PBL MEDICAL STORE MANAGEMENT SYSTEM !!! YOUR LOGIN WAS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getchar();
	break;
	}
	else
	{
	     SetColor(12);
		printf("\n\t\tSORRY !!!  LOGIN IS UNSUCESSFUL\n\t\tINCORRECT USERNAME OR PASSWORD\n\n\n");
		x++;
		 SetColor(15);
		getchar();
	}
    }

	while(x<3);
	if (x>2)
	{
        SetColor(4);

		printf("\nYou have entered the wrong USERNAME or PASSWORD for THREE times!!!\nPLEASE TRY AGAIN LATER");
           exit(1);

		}
		system("cls");
 SetColor(13);
   time_t t;
   time(&t);
   printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t %s",ctime(&t));
    SetColor(1);
   printf("  \n\n       WELCOME TO PBL MEDICAL STORE MANAGEMENT SYSTEM !!! YOUR LOGIN WAS SUCCESSFUL");
   printf("\n\n\n\t\t\t\tPress enter key to continue...");
    SetColor(7);
   printf("\n\n\n\n\n\n\nDesigned by R@JNI$H\nASHUTOSH\nCHAITANYA\nSHREYAS\n");
   getchar();
   system("cls");
    SetColor(15);



   int r;
   for(r = 0;r<119;r++)
   {
       printf("-");
   }
   int choice,number=0,c,p,o,l,total;
    int i=0,opt,num,n,z=10;
    char input[50];
    FILE *fp22,*fpint;
    fpint = fopen("number.txt","r");
   num = getw(fpint);
   if (num == -1)
   { num=0;
     FILE*fp;
  fp = fopen("number.txt","w");
putw(0,fp);
fclose(fp);
   }

    struct medicine m[num+1];
    do {
             SetColor(5);
    printf("\nEnter:\n1. Purchase Medicine\n2. Medicine Information\n3. Stock of Medicine\n4. Delete Medicine\n5. Edit Medicine Info\n6. No. of Medicines In Store\n7. Sell Medicine\n");
     for(int r = 0;r<119;r++)
   {
       SetColor(12);
       printf("-");
   }
    printf("\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        fp22 = fopen("PBLS1.txt","ab");
        if (fp22 == NULL)
        {
            SetColor(4);
            printf("!!ERROR !!file not opened\n");
            exit(1);
        }
           SetColor(1);
           printf("Enter the Name of The Medicine\n");
           fflush(stdin);
           gets(input);
           SetColor(15);
           printf("Searching medicine , PLEASE WAIT...\n");
           Sleep(2000);
            for (i=0 ; i<num ; i++)
           {
               n= strcmp(input,m[i].name);
               if (n==0)
               {
                   SetColor(4);
                   printf("Medicine already available\n");
                   break;
               }

           }
           if (i==num)
           {
               SetColor(10);
            printf("Medicine Not Available in the Store\n");
            SetColor(14);
            printf("Enter 1 to Purchase the Medicine\n");
            scanf("%d",&o);
            fflush(stdin);
            if (o==1)
            {
            Sleep(1000);

        SetColor(1);
        printf("Enter MEDICINE DETAILS\n");
        printf("Enter MEDICINE ID\n");

        SetColor(13);
        scanf("%d",&m[0].id);
        fflush(stdin);

        SetColor(1);
        printf("Enter MEDICINE NAME\n");

        SetColor(13);
        gets(m[0].name);
        fflush(stdin);

        SetColor(1);
        printf("Enter COMPANY NAME\n");

        SetColor(13);
        gets(m[0].company);
        fflush(stdin);

        SetColor(1);
        printf("Enter SUPPLIER NAME\n");

        SetColor(13);
        gets(m[0].supplier);
        fflush(stdin);

        SetColor(1);
        printf("Enter MANUFACTURE DATE\n");

        SetColor(13);
        gets(m[0].manf);
        fflush(stdin);

        SetColor(1);
        printf("Enter EXPIRY DATE\n");

        SetColor(13);
        gets(m[0].exp);
        fflush(stdin);

        SetColor(1);
        printf("Enter MEDICINE PRICE\n");

        SetColor(13);
        scanf("%f",&m[0].price);
        fflush(stdin);

        SetColor(1);
        printf("Enter STOCK OF MEDICINE\n");

        SetColor(13);
        scanf("%d",&m[0].stock);
        fflush(stdin);

        fwrite(m,sizeof(struct medicine),1,fp22);
        printf("WAIT!!!Adding Medicine To Store....\n");

                   Sleep(2200);
        printf("Data stored successfully....\n");
        fpint = fopen("number.txt","r");
        num = getw(fpint);
        fclose(fpint);
        num++;
        fpint = fopen("number.txt","w");
        putw(num,fpint);
        fclose(fpint);
        fclose(fp22);
        break;
            }
            else
            {
                break;
            }
            break;
           }
            break;







        case 2:
             if (num == 0)
           {
               SetColor(4);
               printf("SORRY!!! NO MEDICINES AVAILABLE IN THE STORE\n");
               exit(1);
           }
           SetColor(13);
           printf("Enter The Name Of The Medicine To Know About\n");
           fflush(stdin);
           gets(input);
           printf("Searching Medicine , Please WAIT");
           for (i=0 ; i<3 ; i++)
           {
               for(int j = 0 ; j<3; j++)
              {
               printf(".");
               Sleep(240);
               }
               system("cls");
           }
           fp22 = fopen("PBLS1.txt","rb");
           fread(m,sizeof (struct medicine),num,fp22);
           for (i=0 ; i<num ; i++)
           {
               n= strcmp(input,m[i].name);
               if (n==0)
               {
                   printf("\nMedicine found\n");
                   Sleep(900);
                   break;
               }
           }
           if (i==num)
           {
               SetColor(4);
            printf("\nMedicine not found\n");
            Sleep(2400);
            exit(1);
           }
           SetColor(1);
          printf("MEDICINE ID:%d\nMEDICINE NAME: %s\nCOMPANY NAME:%s\nSUPPLIER NAME:%s\n",m[i].id,&m[i].name,&m[i].company,&m[i].supplier);
          printf("MANUFACTURE DATE :%s\nEXPIRY DATE:%s\nMEDICINE PRICE:Rs %.2f\nSTOCK OF MEDICINE:%d units",&m[i].manf,&m[i].exp,m[i].price,m[i].stock);
          fclose(fp22);
          fclose(fpint);
          break;

          case 3:
          if (num==0)
           {
            SetColor(4);
            printf("Medicine not found\n");
            Sleep(2400);
            break;
           }
             fp22 = fopen("PBLS1.txt","rb");
           fread(m,sizeof (struct medicine),num,fp22);
             printf("Searching Medicines In The Store, PLEASE WAIT...\n");
           Sleep(2200);
           system("cls");

           for(int r = 0;r<164;r++)
       {
       printf("_");
       }
           printf("\n");
           SetColor(13);

           printf("|MEDICINE ID \t   MEDICINE NAME \t\t COMPANY NAME \t\t SUPPLIER NAME \t MANUFACTURE DATE \t EXPIRY DATE \t MEDICINE PRICE \t STOCK OF MEDICINE |\n\n");
           for (i=0 ; i<num ;i++)
           {
               SetColor(9);
          printf("|%10d %20s %26s %25s %19s %18s %17.2f %20d units  |\n",m[i].id,&m[i].name,&m[i].company,&m[i].supplier,&m[i].manf,&m[i].exp,m[i].price,m[i].stock);
           }
            printf("|_");
          for(int r = 0;r<160;r++)
       {
       printf("_");
       }
       printf("_________|");
             break;

          case 4:
                if (num== 0)
           {
               SetColor(4);
               printf("SORRY!!! NO MEDICINES AVAILABLE IN THE STORE\n");
               exit(1);
           }

           printf("Enter The Name Of The Medicine to be Removed\n");
           fflush(stdin);
           gets(input);
           printf("Searching medicine , PLEASE WAIT...\n");
           Sleep(3000);
           fp22 = fopen("PBLS1.txt","rb");
           fread(m,sizeof (struct medicine),num,fp22);
          for(i=0 ; i<num ; i++)
          {
                  n= strcmp(input,m[i].name);
                  if (n==0)
                  {
                      printf("Entry found\n");
                      num--;
                      z=20;
                  }
                 if (z==20)
                 {
                      m[i].id=m[i+1].id;
                      strcpy(m[i].name,m[i+1].name);
                      strcpy(m[i].company,m[i+1].company);
                      strcpy(m[i].supplier,m[i+1].supplier);
                      strcpy(m[i].manf,m[i+1].manf);
                      strcpy(m[i].exp,m[i+1].exp);
                      m[i].price=m[i+1].price;
                      m[i].stock=m[i+1].stock;
                 }
      }
     if(z==20)
     printf("Medicine Removed Sucessfully\n");
     else
     printf("!!!The medicine was not found in the Store\n");
      fp22 = fopen ("PBLS1.txt","wb");
      fwrite(m,sizeof(struct medicine),num,fp22);
      fclose(fp22);
      fpint = fopen("number.txt","w");
      putw(num,fpint);
      fclose(fpint);
      break;



          case 5:
                if (num == 0)
           {
               printf("SORRY!!! NO MEDICINES AVAILABLE IN THE STORE\n");
               exit(1);
           }

           printf("Enter Name Of The Medicine to Be Edited\n");
           fflush(stdin);
           gets(input);
           printf("Searching medicine , PLEASE WAIT...\n");
           Sleep(2000);
           fp22 = fopen("PBLS1.txt","rb");
           fread(m,sizeof (struct medicine),num,fp22);
           for (i=0 ; i<num ; i++)
           {
               n= strcmp(input,m[i].name);
               if (n==0)
               {
                   printf("Medicine found\n");
                   Sleep(900);
                   break;
               }
           }
           if (i==num)
           {
            printf("Medicine not found\n");
            Sleep(2400);
            exit(1);
           }


        printf("Enter New Medicine company\n");
        gets(m[i].company);
        fflush(stdin);
        printf("Enter New Medicine supplier\n");
        gets(m[i].supplier);
        fflush(stdin);
        printf("Enter New manufacture date\n");
        gets(m[i].manf);
        fflush(stdin);
        printf("Enter New expiry date\n");
        gets(m[i].exp);
        fflush(stdin);
        printf("Enter New Price\n");
        scanf("%f",&m[i].price);
        fflush(stdin);
        printf("Enter New Stock\n");
        scanf("%d",&m[i].stock);
        fflush(stdin);
        fclose(fp22);
        fp22 = fopen("PBLS1.txt","wb");
        fwrite(m,sizeof(struct medicine),num,fp22);
        printf("Data stored successfully....\n");
        fclose(fp22);
        break;


          case 6:
             fpint = fopen ("number.txt","r");
             int a=getw(fpint);
             printf("%d",a);
             fclose(fpint);
             break;




          case 7:
                if (num == 0)
           {
               printf("SORRY!!! NO MEDICINES AVAILABLE IN THE STORE\n");
               exit(1);
           }

           printf("Enter The Name Of The Medicine To Sell\n");
           fflush(stdin);
           gets(input);
           printf("Searching Medicine , Please WAIT...\n");
           Sleep(2000);
           fp22 = fopen("PBLS1.txt","rb");
           fread(m,sizeof (struct medicine),num,fp22);
           for (i=0 ; i<num ; i++)
           {
               n= strcmp(input,m[i].name);
               if (n==0)
               {
                   printf("Medicine found\n");
                   Sleep(900);
                   break;
               }
           }
           if (i==num)
           {
            printf("Medicine not found\n");
            Sleep(2400);
            exit(1);
           }
          printf("MEDICINE ID:%d\nMEDICINE NAME: %s\nCOMPANY NAME:%s\nSUPPLIER NAME:%s\n",m[i].id,&m[i].name,&m[i].company,&m[i].supplier);
          printf("MANUFACTURE DATE :%s\nEXPIRY DATE:%s\nMEDICINE PRICE:Rs %.2f\nSTOCK OF MEDICINE:%d units\n",&m[i].manf,&m[i].exp,m[i].price,m[i].stock);
          printf("Enter Quantity");
          scanf("%d",&l);
          total = l*m[i].price;
          printf("Total Price = %d",total);
          m[i].stock = m[i].stock - l;
        fflush(stdin);
        fclose(fp22);
         fclose(fpint);
        fp22 = fopen("PBLS1.txt","wb");
        fwrite(m,sizeof(struct medicine),num,fp22);
        printf("Data stored successfully....\n");
        fclose(fp22);
        break;





   }
     SetColor(2);

     printf("\nTo Continue with other Options Enter 1 Else any other number\n");
     scanf("%d",&p);
     fflush(stdin);
     system("cls");
}while(p==1);

}

void SetColor(int ForgC)
{
     WORD wColor;

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);

          SetConsoleTextAttribute(hStdOut, wColor);


     }

     return;










}

