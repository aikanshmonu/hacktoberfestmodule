#include <iostream>
#include <stdlib.h>
using namespace std;

void store(void);
void push(char);

int j=0;
char arr1[10];

int k=0;
char arr2[2];
int main()
{
    char string1[100000];
    int i;
    cin>>string1;  //getting input from the user

    for(i=0;string1[i]!='\0';i++)
    {
        if(string1[i]=='(' || string1[i]=='{' || string1[i]=='[')
            push(string1[i]);
        else
        {
            if(string1[i]=='(')
            {
                if(arr1[j-1]==')')
                    j--;
                else
                    store();
            }
            if(string1[i]=='{')
            {
                if(arr1[j-1]=='}')
                    j--;
                else
                    store();
            }
            if(string1[i]=='[')
            {
                if(arr1[j-1]==']')
                    j--;
                else
                    store();
            }
        }
        cout<<"aikansh"<<endl;
        cout<<j<<endl;
        cout<<arr1[1]<<endl;
        cout<<string1[i]<<endl;

    }
    if(j==0)
        cout<<"success"<<endl;
    else
        cout<<"failed"<<endl;
    return 0;
}


void store(void)
{
  arr2[k]=j;
  k++;
}

void push(char p)
{
  arr1[j]= p;
  j++;
}
