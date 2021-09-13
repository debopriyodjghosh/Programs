#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
typedef sttruct node
{
    int data;
    struct node*next;
}node;
node*getnode(int x);
node*createlist(node *h);
void display(node*h);
