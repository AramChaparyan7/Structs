#include <stdio.h>
#define SIZE 30
#define SIZE1 5 

struct student{
	float mark;
	int age;
	char name[SIZE];
};

int main(){
	struct student arr[SIZE1]={};
	for(int i=0;i<SIZE1;++i){
		printf("student %d ",i+1);
		printf("input name ");
		scanf("%s",arr[i].name);
		printf("input age ");
		scanf("%d",&arr[i].age);
		printf("input mark ");
		scanf("%f",&arr[i].mark);
	}
	int q=0;
	for(int i=0;i<SIZE1;++i){
		if(arr[q].mark<arr[i].mark){
			q=i;
		}	
	}
	printf("highest : ");
	printf("%s %d %f\n",arr[q].name,arr[q].age,arr[q].mark);
	return 0;
}

