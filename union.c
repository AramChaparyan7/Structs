#include <stdio.h>

union un{
	int i;
	float f;
};

int main(){
	union un num;
	num.i=3;
	printf("integer %d\n",num.i);
	num.f=12.5;
	printf("float %f\n",num.f);
	printf("Size is %lu",sizeof(union un));
	return 0;
}
