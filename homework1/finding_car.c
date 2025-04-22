#include <stdio.h>
#define SIZE 20
#define SIZE1 3 

struct car{
	float price;
	int year;
	char brand[SIZE];
	char model[SIZE];
};

int main(){
	struct car arr[SIZE1]={};
	for(int i=0;i<SIZE1;++i){
		printf("car %d ",i+1);
		scanf("%s",arr[i].brand);
		scanf("%s",arr[i].model);
		scanf("%d",&arr[i].year);
		scanf("%f",&arr[i].price);
	}
	int newindex=0;
	int cheapindex=0;
	for(int i=0;i<SIZE1;++i){
		if(arr[newindex].year<arr[i].year){
			newindex=i;
		}
		if(arr[cheapindex].price>arr[i].price){
			cheapindex=i;
		}
	}
	printf("cheapest car: ");
	printf("%s %s %d %f\n",arr[cheapindex].brand,arr[cheapindex].model,arr[cheapindex].year,arr[cheapindex].price);
	printf("newest car: ");
	printf("%s %s %d %f\n",arr[newindex].brand,arr[newindex].model,arr[newindex].year,arr[newindex].price);
	return 0;
}

