#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print0ptions()
{
	printf(" 'c' ¼·¾¾¿Âµµ¿¡¼­ È­¾¾¿Âµµ·Î º¯È¯\n");
	printf(" 'f' È­¾¾¿Âµµ¿¡¼­ ¼·¾¾¿Âµµ·Î º¯È¯\n");
	printf(" 'q' Á¾·á\n");
}

double C2F(double c_temp)
{
	return 9.0 / 5.0 * c_temp + 32;
}

double F2C(double f_temp)
{
	return (f_temp - 32.0) * 5.0 / 9.0;
}

int main()
{
	char choice;
	double temp=0.0;

	while (1) {
		print0ptions();
		printf("¸Þ´º¿¡¼­ ¼±ÅÃÇÏ¼¼¿ä.");
		scanf(" %c", &choice);
		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("¼·¾¾¿Âµµ: ");
			scanf("%lf", &temp);
			printf("È­¾¾¿Âµµ: %lf \n", C2F(temp));
		}
		else if (choice == 'f') {
			printf("È­¾¾¿Âµµ: ");
			scanf("%lf", &temp);
			printf("¼·¾¾¿Âµµ: %lf \n", F2C(temp));
		}
	}

	return 0;
}