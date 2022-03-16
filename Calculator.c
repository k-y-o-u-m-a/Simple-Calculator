#include<stdio.h>
// #include<conio.h> //cuz it works on windows :/

void gotoxy(int x, int y)// gotoxy() function definition
{
    printf("%c[%d;%df", 0x1B, y, x);
}

void clrscr(void)// clrscr() function definition
{
    system("clear");
}

void main()
{
	int a,b;
	char ch;
	clrscr();
	printf("Calculator\n");
	scanf("%d",&a);
	gotoxy(3,2);
	scanf("%c",&ch);
	gotoxy(4,2);
	scanf("%d",&b);
	gotoxy(6,2);
	switch(ch)
	{
		case '+':
		printf("=%d",a+b);
		break;
		case '-':
		printf("=%d",a-b);
		break;
		case '*':
		printf("=%d",a*b);
		break;
		case '/':
		printf("=%d",(float)a/b);
		break;
		default:
		clrscr();
		printf("!!!ERROR!!!");
	}
	// getch();
}