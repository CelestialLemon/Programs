#include<stdio.h>
#include<iostream>
using namespace std;

FILE *fp;
FILE *fpw;


/*void RemoveCommas(char *inputFileAddress, char *outputFileAddress)
{
    char input;
    
    fp = fopen(inputFileAddress, "r");
    fpw = fopen(outputFileAddress , "w");

    while(input != EOF)
    {
        input = fgetc(fp);
        if((input != EOF) && input != ',')
        fputc(input, fpw);
    }

    fclose(fp);
    fclose(fpw);
}*/

void PutTabs(char *inputFileAddress, char *outputFileAddress)
{
   fp = fopen(inputFileAddress, "r");
    fpw = fopen(outputFileAddress , "w");
    
    char input;
    int spaceFound = 0;              //If spacefound is 0 space not found 
   
    
    
    
    while(input != EOF)
    {
        input = fgetc(fp);
        
        if(spaceFound == 0)
        {
            if(input == ' ')
            {
                spaceFound = 1;
                fputc('\t', fpw);
            }

            else
            {
                if(input != ',')
                fputc(input, fpw);
            }
            
        }

        else
        {
           if(input != ' ')
           {
              
               if(input != ',')
               fputc (input, fpw);
               
               
               spaceFound = 0;
           }
        }

    }

    fclose(fp);
    fclose(fpw);
}

int main()
{
    char inputFileAddress[100], outputFileAddress[100];
    cout<<"Enter address for output file:  \n";
    fflush(stdin);
    gets(outputFileAddress);
    
    cout<<"Enter address for input file:  \n";
    fflush(stdin);
    gets(inputFileAddress);
    

   // RemoveCommas(inputFileAddress, outputFileAddress);
    PutTabs(inputFileAddress, outputFileAddress);

    return 0;
    

}