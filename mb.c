#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void byte(float);
void kilobyte(float);
void magabyte(float);
void terabyte(float);
void gigabyte(float);
void petabyte(float);
void main()
{
	int ch, c;
	char name[40]; // print name
	printf("\n\n\n\n\nEnter your Name:- ");
	gets(name);
	printf("Welcome ");
	puts(name);
	printf("\t->You are now inside the calculator created by Mr. Raj Kishore.\n\t  This calculator is made by C programming language.");
	printf("You can do any kind of calculation on this.\n\t  Please choose the correct option and calculate.");
	do
	{
		printf("\n\n\t__________________calculator_______________________");
		printf("\n\t--------------------page:- 1-----------------------\n\n");
		printf("\t1. Age\n");
		printf("\t2. Data(B,KB,MB,GB,TB,PB)\n");
		printf("\t3. Number_system(Binary,Octal,Decimal,Hexadecimal)\n");
		printf("\t4. Standard( +,-,*,/ )\n");
		printf("\t5. Exit\n");
		printf("\nEnter the choice:-  ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
		{
			do
			{
				printf("\t--------------Welcome to page:- 2 -----------------\n");
				printf("\t_______________________Age_________________________\n\n");
				printf("\n\t1. Calculate Age\n");
				printf("\t2. <<<Page-1<<<\n");
				printf("\t3. Exit\n");
				printf("\nEnter the choice:-  ");
				scanf("%d", &c);
				switch (c)
				{
				case 1:
				{
					int d1, d2, m1, m2, y1, y2;
					printf("\n\t__________Enter Date of Birth___________");
					printf("\n\nEnter Day:- ");
					scanf("%d", &d1);
					printf("\nEnter month:- ");
					scanf("%d", &m1);
					printf("\nEnter the year:- ");
					scanf("%d", &y1);
					printf("\n\n\t____________Today Date______________");
					printf("\nEnter the current day:- ");
					scanf("%d", &d2);
					printf("\nEnter the current month:- ");
					scanf("%d", &m2);
					printf("\nEnter the year:- ");
					scanf("%d", &y2);
					if (d2 >= d1)
					{
						d2 = d2 - d1;
					}
					else
					{
						m2--;
						d2 = d2 + 30;
						d2 = d2 - d1;
					}
					if (m2 >= m1)
					{
						m2 = m2 - m1;
					}
					else
					{
						y2--;
						m2 = m2 + 12;
						m2 = m2 - m1;
					}
					if ("y2>=y1")
					{
						y2 = y2 - y1;
					}
					printf("\t______sum of Age________\n");
					printf("Day= %d\nMonth= %d\nYear= %d\n", d2, m2, y2);
				}
				break;
				case 2:
					break;
				case 3:
					exit(0);
				default:
					printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
					break;
				}
			} while (!(c == 2));
		}
		break;
		case 2:
			do
			{
				printf("\t--------------Welcome to page:- 2 -----------------\n");
				printf("\t_______________________Data________________________\n");
				printf("\n\t 1. Byte(B) to (KB,MB,GB,TB,PB)\n");
				printf("\t 2. Kilobyte(KB) to (B,MB,GB,TB,PB)\n");
				printf("\t 3. Megabyte(MB) to (B,KB,GB,TB,PB)\n");
				printf("\t 4. Gigabyte(GB) to (B,KB,MB,TB,PB)\n");
				printf("\t 5. Terabyte(TB) to (B,KB,MB,GB,PB)\n");
				printf("\t 6. Petabyte(PB) to (B,KB,MB,GB,TB)\n");
				printf("\t 7. <<Bake(page:-1)<<\n");
				printf("\t 8. Exit\n");
				printf("\n Enter the choice:-  ");
				scanf("%d", &c);
				switch (c)
				{
				case 1:
				{
					float n;
					printf("Enter the byta:- ");
					scanf("%f", &n);
					float r = (n / 1024) / 1024;
					byte(r);
					kilobyte(r);
					magabyte(r);
					terabyte(r);
					gigabyte(r);
					petabyte(r);
				}
				break;
				case 2:
				{
					float n;
					printf("Enter the kilobyta:- ");
					scanf("%f", &n);
					float r = n / 1024;
					byte(r);
					kilobyte(r);
					magabyte(r);
					terabyte(r);
					gigabyte(r);
					petabyte(r);
				}
				break;
				case 3:
				{
					float n;
					printf("Enter the magabyta:- ");
					scanf("%f", &n);
					byte(n);
					kilobyte(n);
					magabyte(n);
					terabyte(n);
					gigabyte(n);
					petabyte(n);
				}
				break;
				case 4:
				{
					float n;
					printf("Enter the Gigabyte:- ");
					scanf("%f", &n);
					float r = (n * 1024);
					byte(r);
					kilobyte(r);
					magabyte(r);
					terabyte(r);
					gigabyte(r);
					petabyte(r);
				}
				break;
				case 5:
				{
					float n;
					printf("Enter the terabyta:- ");
					scanf("%f", &n);
					float r = (n * 1024) * 1024;
					byte(r);
					kilobyte(r);
					magabyte(r);
					terabyte(r);
					gigabyte(r);
					petabyte(r);
				}
				break;
				case 6:
				{
					float n;
					printf("Enter the patabyta:- ");
					scanf("%f", &n);
					float r = (n * 1024) * 1024 * 1024;
					byte(r);
					kilobyte(r);
					magabyte(r);
					terabyte(r);
					gigabyte(r);
					petabyte(r);
				}
				break;
				case 7:
					break;
				case 8:
					exit(0);
				default:
					printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
					break;
				}
			} while (!(c == 7));
		case 3:
		{
			do
			{
				printf("\n\t--------------Welcome to page:- 2 -----------------\n");
				printf("\t__________________Number_system____________________\n");
				printf("\n\t 1. Decimal to Binary\n");
				printf("\t 2. Binary to Decimal\n");
				printf("\t 3. Decimal to Hexadecimal\n");
				printf("\t 4. <<Bake(page:-1)<<\n");
				printf("\t 5. Exit\n");
				printf("\nEnter the choice:-  ");
				scanf("%d", &c);
				switch (c)
				{
				case 1:
				{
					int n, s = 0, d = 1, a, r;
					printf("Enter any Decimal number:-  ");
					scanf("%d", &n);
					while (n)
					{
						r = n % 2;
						n = n / 2;
						s = s + d * r;
						d = d * 10;
					}
					printf("\nBinary number= %d\n\n", s);
				}
				break;
				case 2:
				{
					int n, r, b = 0, w = 1;
					printf("\nEnter any Binary number:-");
					scanf("%d", &n);
					while (n)
					{
						r = n % 10;
						b = b + r * w;
						n = n / 10;
						w = w * 2;
					}
					printf("Decimal= %d", b);
				}
				break;
				case 3:
				{
					int n, r, i = 1;
					char hex[50];
					printf("Enter any decimal number:-  ");
					scanf("%d", &n);
					while (n)
					{
						r = n % 16;
						if (r < 10)
							r = r + 48;
						else
							r = r + 55;
						hex[i] = r;
						i++;
						n = n / 16;
					}
					printf("\nHexadecimal= ");
					for (i = i - 1; i >= 1; i--)
					{
						printf("%c", hex[i]);
					}
					printf("\n");
				}
				break;
				case 4:
					break;
				case 5:
					exit(0);
				default:
					printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
					break;
				}
			} while (!(c == 4));
		}
		break;
		case 4:
		{
			do
			{
				printf("\n\t--------------Welcome to page:- 2 -----------------\n");
				printf("\t____________________Standard________________________\n");
				printf("\t 1. Addition\n");
				printf("\t 2. Subtraction\n");
				printf("\t 3. Mantiply\n");
				printf("\t 4. Divide\n");
				printf("\t 5. <<<Goto page 1<<<\n");
				printf("\t 6. Exit \n");
				float a, b;
				printf("\nEnter the choice:-  ");
				scanf("%d", &c);
				if (c == 1 || c == 2 || c == 3 || c == 4)
				{
					printf("Enter the two number :- ");
					scanf("%f%f", &a, &b);
				}
				switch (c)
				{
				case 1:
					printf("Addition= %.30f", a + b);
					break;
				case 2:
					printf("Subtraction= %.30f", a - b);
					break;
				case 3:
					printf("Mantiply =%.30f", a * b);
					break;
				case 4:
					printf("Divide =%.30f", a / b);
				case 5:
					break;
				case 6:
					exit(0);
				default:
					printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
					break;
				}
			} while (!(c == 5));
		}
		break;
		case 5:
			break;
		default:
			printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
			break;
		}
	} while (!(ch == 5));
}
void byte(float mb)
{
	printf("Byte= %.25f b\n", mb * 1024 * 1024);
}
void kilobyte(float mb)
{
	printf("kilobyte= %.25f kb\n", mb * 1024);
}
void magabyte(float mb)
{
	printf("Magabyte= %.25f mb\n", mb);
}
void gigabyte(float mb)
{
	printf("Gigabyte= %.25f tb\n", mb / 1024);
}
void terabyte(float mb)
{
	printf("terabyte= %.25f tb\n", (mb / 1024) / 1024);
}
void petabyte(float mb)
{
	printf("Patabyte= %.25f pb\n", ((mb / 1024) / (1024)) / 1024);
}