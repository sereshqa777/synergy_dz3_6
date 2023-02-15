#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
	
	printf("========= TASK 1 =========\n");
		for(int i=1;i<11;i++)
		{
			printf("5*%i=%i\n",i,5*i);
		}
		printf("\n\n");
	printf("========= TASK 2 =========\n");
	int a=1;
	while(a!=7)
	{
		printf("Vvod: ");
		scanf("%i",&a);
		if(a>7){printf("1) bolshe 7\n");}
		if(a==7){printf("1) 7 = 7\n");}
		if(a>10)
		{
			printf("2) bolshe 10\n");
		}
		else
		{
				if(a<7)
				{
					printf("1) menishe 7\n");
				}
				printf("2) menishe 10\n");
		}	
		if (a%2 == 0){printf("3) delica na 2\n");}
		else {printf("3) nedelica na 2\n");}
		if (a%3 == 0){printf("4) delica na 3\n");}
		else {printf("4) nedelica na 3\n");}
		printf("***************************\n");
	}
	printf("*********** WIN ***********\n");
	printf("*     SUPER! Ti ugadal    *\n");
	printf("***************************\n");
	return 0;
}
