#include <stdio.h>
#define SIZE 50
#define SIZE1 30
#define SIZE2 4 

struct book{
	int year;
	char title[SIZE];
	char author[SIZE1];
};

int main(){
	struct book arr[SIZE1]={};
	for(int i=0;i<SIZE2;++i){
		printf("book %d ",i+1);
		scanf("%s",arr[i].title);
		scanf("%s",arr[i].author);
		scanf("%d",&arr[i].year);
	}
	int q=0;
	for(int i=0;i<SIZE2;++i){
		if(arr[q].year<arr[i].year){
			q=i;
		}
	}
	printf("oldest book: ");
	printf("%s %s %d \n",arr[q].title,arr[q].author,arr[q].year);
	return 0;
}

