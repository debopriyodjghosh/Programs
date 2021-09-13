#include<stdio.h>
void towers(int, char, char, char);
int main ()
{
    int num;
    printf("\nEnter the number of disks : ");
    scanf("%d",&num);
    printf("\n The sequence of moves involved in the Tower of Hanoi are : \n");
    towers(num,'A','C','B');
    return 0;
}

void towers(int num,char frompeg, char topeg,char auxpeg)
{
    if(num==1)
    {
        printf("\n Move disk 1 from peg %c to peg %c",frompeg,topeg);
        return;
    }
    towers(num -1, frompeg,auxpeg,topeg);

    printf("\n Move disks %d from peg %c to peg %c",num,frompeg,topeg);
    towers(num -1,auxpeg,topeg,frompeg);
}
