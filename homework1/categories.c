#include <stdio.h>
#define SIZE 20
#define SIZE1 3

enum en{
	ELCTRONICS,FOOD,CLOTHING
};

struct product{
	float price;
	enum en category;
	char name[SIZE];
};

int main(){
	struct product arr[SIZE1]={};
	for(int i=0;i<SIZE1;++i){
		printf("product %d",i+1);
		scanf("%s %d %f",arr[i].name,(int *)&arr[i].category,&arr[i].price);
	}
	for(int i=0;i<SIZE1;++i){
		if(arr[i].category==1){
			printf("%s %d %f\n",arr[i].name,arr[i].category,arr[i].price);
		}
	}
	return 0;
}
