#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<stdio.h>
class name
{
private:
    char s[50];
public:
    name()
    {
        s[0]='\0';
    }
void getdata();
int bcount(); /*Finds no. of blanks in a name*/
void abb(); /* Displays the abbreviated name*/
};

void name::getdata()
{
cout<<"\nEnter your name: ";
gets(s);
}

int name::bcount()
{
int count=0, i;
for(i=0; i<strlen(s); i++)
if(s[i]==' ')
count++;
return count;
}

void name::abb()
{
char temp[10];
int i, j, x=0, cnt=1, count;
count=bcount();
temp[x++]=s[0]; //store first initial
    for(i=0; i<strlen(s); i++) //scan each character in the name
    {

        if(s[i]!=' ') /*Check for blank*/
            continue;
        else
        {
            if(cnt<count) /*Not last name*/
            {
                temp[x++] = s[i+1]; /*Store initial*/
                cnt++;
            }
            else /*This is the last name, so display result*/
            {
                for(j=0; j<x; j++)
                cout<<temp[j]<<".";
                for(j=i+1; s[j] != '\0';j++)
                    cout<<s[j];
                break;
            }
        } //end of outer else
    } //end of for
}

int main()
{
name obj;
obj.getdata();
cout<<"\n\nThe abbreviated form is: ";
obj.abb();
}
