#include <stdio.h>
#define SIZE 20

struct car{
	float price;
	int year;
	char brand[SIZE];
	char model[SIZE];
};

struct car cmp(struct car car1,struct car car2){
	if(car1.price>car2.price){
		return car1;
	}else{
		return car2;
	}
}

int main(){
	struct car car1;
	struct car car2;
	printf("input car brand ");
	scanf("%s",car1.brand);
	printf("input car model ");
	scanf("%s",car1.model);
	printf("input car year ");
	scanf("%d",&car1.year);
	printf("input car price ");
	scanf("%f",&car1.price); 

	printf("input car brand ");
	scanf("%s",car2.brand);
	printf("input car model ");
	scanf("%s",car2.model);
	printf("input car year ");
	scanf("%d",&car2.year);
	printf("input car price ");
	scanf("%f",&car2.price);

	struct car ans=cmp(car1,car2);
	printf("brand is %s\n",ans.brand);
	printf("model is %s\n",ans.model);
	printf("year is %d\n",ans.year);
	printf("price is %f\n",ans.price);
	return 0;
}
