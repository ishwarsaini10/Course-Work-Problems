#include<stdio.h>
int main()
{
	int x , y ,temp;
	printf("enter the value of x and y :");
	scanf("%d%d", &x,&y);
	temp=x;
	x=y;
	y=temp;
	printf("after swapping x=%d , b=%d", x, y);
return 0;
}
