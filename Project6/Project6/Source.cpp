#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
void task5()
{
	int a = 11;
	int b = 99;
	int e = b;

	for (int i = a; i <= e; i++)
	{
		b = pow(i, 2);
		printf("%d\n", b);
	
	}
	
}
void task4()
{
	int a = 10;
	int b = 10 +rand()%1000 ;
	int e=b;
	int d,h;
	for (int i = a; i <= e; i++)
	{
		b = b - 1;
		d = b % 5;
		h = b % 2;
		if ((d==0)&&(h!=0))
			printf("%d\n", b);
	}



}
 
void task1()
{
	int a = 1+rand() %101;
	int b =102+rand()%200;
	int e = b;
	int count = 0;
	for (int i = a; i <=e; i++)
	{
		b = b - 1;
		printf("%d\n", b);
		count++;
	}
	printf("___________________________\n%d", count);
}
int main()
	{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break; 
		case 4: task4(); break;
		case 5: task5(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
	}
 