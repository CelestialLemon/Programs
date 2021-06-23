#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct List
{
    int data;
    List *next;
    List *prev;
}typedef Node;






//general functions

int ChooseOperation()
{
    cout<<"Choose Operation:\n1. Add Node\n2. Display list\n3. Delete node\n4. Clear the list\n";
    int opt = 0;
    cin>>opt;
    return opt;
}

List* AddNode(List *list)
{
   List *currentNode = list;
   while(currentNode->next != nullptr)
   {
      currentNode = currentNode->next;
   }
  
   
   
 
    List *newNode = (List*)malloc(sizeof(List));
    cout<<"Enter a number : ";
    cin>>newNode->data;

    currentNode->next = newNode;
    newNode->prev = currentNode;
 

   return list;
}



void DisplayList(List *list)
{
   List *currentNode = list;
  
    do
    {
        currentNode = currentNode->next;
        cout<<currentNode->data<<" ";
        cout<<"----------";
       
    }while(currentNode->next != nullptr);


   

   cout<<"\nList printed sucessfully";
   return;

}





int main()
{
    int numOfNodes = 0;
    char cont;
    List *list;

    do
    {
       cont = 'n';
    
    
        switch(ChooseOperation())
        {
            case 1:
              list = AddNode(list);
            //add node
            break;

            case 2:
             DisplayList(list);
            //display node
            break;

            case 3:
            //delete node
            break;

            case 4:
            //clear list
            break;

            default:
            std::cout<<"Invalid Choice!";
            break;
        }

        std::cout<<"Do you want to continue (y/n) : ";
        
        std::cin>>cont;
    } while (cont == 'Y' || cont == 'y');

    return 0;
}


