#include <stdio.h>
#define SIZE 20

struct car{
	float price;
	int year;
	char brand[SIZE];
	char model[SIZE];
};

int main(){
	struct car car1;
	printf("input car brand ");
	scanf("%s",car1.brand);
	printf("input car model ");
	scanf("%s",car1.model);
	printf("input car year ");
	scanf("%d",&car1.year);
	printf("input car price ");
	scanf("%f",&car1.price);
	printf("brand is %s\n",car1.brand);
	printf("model is %s\n",car1.model);
	printf("year is %d\n",car1.year);
	printf("price is %f\n",car1.price);
	return 0;
}
