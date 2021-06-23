#include<iostream>

using namespace std;

int main()
{
    string zigzagged = "";

    string input = "ABC";
    int num = 1;
    string stringlets[num];




    int indexToAppend = 0;
    bool increaseIndex = true;
    for(int i=0; i<input.length(); i++)
    {
        stringlets[indexToAppend] += input[i];
        cout<<"index status : "<<increaseIndex<<" current index : "<<indexToAppend<<"\n";
        cout<<input[i]<<" was added to stringlet "<<indexToAppend<<"\n\n";
        if(increaseIndex)
        {
            if(indexToAppend == num - 1)
            increaseIndex = false;
        }

        else
        {
            if(indexToAppend == 0)
            increaseIndex = true;
        }

        if(increaseIndex)
        {
            if(indexToAppend < num - 1)
            indexToAppend++;
        }
        else
        {
            if(indexToAppend > 0)
            indexToAppend--;
        }

    }

    cout<<"printing stringlets : \n";
    for(int i=0; i<num; i++)
    {
        zigzagged += stringlets[i];
        cout<<stringlets[i];   
    }

    cout<<zigzagged;

    return 0;
}