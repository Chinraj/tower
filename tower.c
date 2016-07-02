#include <stdio.h>
#include <conio.h>
void tower (char,char,char,int);
void main()
{
int n;
clrscr();
printf("Enterd the disks: ");
scanf("%d",&n);
printf("\ntower of hanoi for %d no of disks:", n);
tower('a','b','c', n);
getch();
}
void tower(char from,char middle,char to,int b)
{
if(b<=0)
printf("\nEnter a valid no of disks");
if(b==1)
printf("\nMove disk from %c to %c",from,to);
if(b>1)
{
tower(from,to,middle,b-1);
tower(from,middle,to,1);
tower(middle,from,to,b-1);
}
}
