/* This program formats product information entered by the user */
#include <stdio.h>

int main(void)
{
	int item_num, month, day, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &item_num);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%-4d\t\t$%7.2f\t\t%02d/%02d/%04d\n", item_num, price, month, day, year);

	return 0;
}

