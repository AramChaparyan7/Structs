#include <stdio.h>
#include "date.h"
#include "bank.h"

int dateDifference(const Date* d1,const Date* d2){
	int res=0;
	res+=(d1->year-d2->year)*365;
	res+=(d1->month-d2->month)*30;
	res+=(d1->day-d2->day);
	return res;
}

void deposit(BankAccount* b,float amount){
	b->balance+=amount;
}

void withdraw(BankAccount* b,float amount){
	b->balance-=amount;
}

void display(BankAccount b){
	printf("%d ",b.number);
	printf("%s ",b.name);
	printf("%f\n",b.balance);
}

int foo(){
	static int a=0;
	return ++a;
}

int is_prime(int n){
	if(n<2){ return 0;}
	for(int i=2;i*i<=n;++i){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int prime(){
	static int prm=0;
	for(int i=prm+1;;++i){
		if(is_prime(i)){
			prm=i;
			break;
		}
	}
	return prm;
}
