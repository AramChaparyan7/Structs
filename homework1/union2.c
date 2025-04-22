#include <stdio.h>

union un{
	int i;
	float f;
	char c;
};

int main(){ 
	union un num;
	num.i=3;
	printf("integer %d ",num.i);
	printf("float %f ",num.f);
	printf("char %c ",num.c);
	num.f=12.5;
	printf("\ninteger %d ",num.i);
	printf("float %f ",num.f);
	printf("char %c ",num.c);
	num.c='a';
	printf("\ninteger %d ",num.i);
	printf("float %f ",num.f);
	printf("char %c ",num.c);
	printf("\nSize is %lu",sizeof(union un));
	return 0;
}
