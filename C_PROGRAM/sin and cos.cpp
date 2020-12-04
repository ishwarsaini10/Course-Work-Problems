// to find the value of sinx //
# include<stdio.h>
# include<conio.h>
# include<math.h>
int main()
{
	float x,y;
	printf("supply the value of x \n");
	scanf("%f",&x);
	y=sin(x)+cos(x);
	printf("%f , %f \n" ,x,y);
	getch();
}
