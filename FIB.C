#include<stdio.h>
#include<conio.h>

void main(){
int i,n, a=0,b=1,c;

clrscr();

printf("Enter the length of the fibonacci series ");
scanf("%d",&n);

printf("the fibonacci series \n");

printf("%d\t%d\t", a,b );

for(i=3;i<=n;i++){

c=a+b;

printf("%d\t",c);
a=b;
b=c;
}
getch();
}