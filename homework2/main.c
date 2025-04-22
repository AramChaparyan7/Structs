#include <stdio.h>
#include "date.h"
#include "bank.h"

int foo();
int prime();
int dateDifference(const Date*,const Date*);
void deposit(BankAccount*,float);
void withdraw(BankAccount*,float);
void display(BankAccount);

int main(){
	Date d1={3,8,2009};
	Date d2={22,4,2025};
	printf("%d\n",dateDifference(&d1,&d2));
	BankAccount b={1,"name",500};
	deposit(&b,300);
	display(b);
	withdraw(&b,200);
	display(b);
	for(int i=0;i<4;++i){
		printf("%d\n",foo());
	}
	for(int i=0;i<5;++i){
		printf("%d\n",prime());
	}
	return 0;
}
