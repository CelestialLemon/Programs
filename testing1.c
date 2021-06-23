#include<stdio.h> 
typedef struct shop
{
char name[25]; 
int id;
float price;
}shop;
shop accept_rec()
{
shop temp;
printf("\n Enter product record \n 1.Name2.id 3 price"); 
scanf(" %s%d%f",temp.name,&temp.id,&temp.price);
return temp;
}
int createdb(shop sdb[10])
{
int n=0; 
int i,ch; 
do{
sdb[n]=accept_rec(); 
n++;
printf("Do you want to insert another record? (0/1)"); 
scanf("%d",&ch);
}while(ch==1); 
return n;
}
void display(shop s)
{
printf("\n\t %s \t%d \t%f",s.name,s.id,s.price);
printf("\n");
}
void displaydb(shop sdb[10], int n)
{
int i;
printf("\n product record \n \t Name \t id \t price"); 
for (i=0; i<n;i++)
display(sdb[i]);
}
int search(shop s[],int n,int key)//linear search or sequential search

{
int i; 
for(i=0;i<n;i++)
{
if(s[i].id==key) 
return i; //position
}
return -1;// not found
}
void sort(shop s[20],int n, int num)
{
int *a,*b, i, j;
for(i =0;i<n -1 ;i++)
{
for(j = 0;j<n - i - 1;j++)
{
a = &s[j].id;
b = &s[j + 1].id; 
if(*a > *b)
{
num = *a;
*a = *b;
*b = num;
}
}
}
}
void modify(shop s[],int n,int key)
{
int ch;
int i; 
i=search(s,n,key); 
if(i==-1)
{
printf("\n No record found to change the name"); 
return;
}
printf("\n Do u want to change name (0/1)"); 
scanf("%d",&ch);
if(ch==1)
{
printf("\n Enter new name"); 
scanf(" %s",s[i].name);
}
printf("\n Do u want to change price (0/1)"); 
scanf("%d",&ch);
if(ch==1)
{
printf("\n Enter new price"); 
scanf("%f",&s[i].price);
}
}
int del(shop s[],int n,int key)
{
char ch; 
int i;
i=search(s,n,key); 
if(i==-1)

printf("\n No record found to delete");
else
{
printf("\n Deleted record is"); 
display(s[i]);
while(i<n)
{
s[i]=s[i+1]; 
i++;
}
}
n--;
return n;
}
int main()
{
int choice,i,n=-1,num; 
shop s[10];//database
do
{
printf("\n 1.AddRecord\n 2.Display\n 3.Search \n 4.Sort \n 5.Modify \n 6.Delete \n7.Exit \n");
printf("Enter your choice"); 
scanf("%d",&choice); 
switch(choice)
{
case 1:
n=createdb(s); 
break;
case 2:
displaydb(s,n); 
break;
case 3:
printf("\n Enter the id which you want to search"); 
scanf("%d",&num);
i=search(s,n,num);//position or -1 
if(i==-1)
printf("\n Record not found");
else
{
printf("\n Details of Record found"); 
display(s[i]);
}
break;
case 4:
printf("\n \n Enter the id which you want to sort");
scanf("%d",&num);
sort(s,n,num); 
break;
case 5:
printf("\n \n Enter the id which you want to modify"); 
scanf("%d",&num);
modify(s,n,num); 
break;
case 6:
printf("Enter id which you want to delete"); 
scanf("%d",&num);
n=del(s,n,num); 
break;
}
}while(choice!=7); 
return 0;
}

