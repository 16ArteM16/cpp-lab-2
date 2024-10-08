#include <iostream>

long double factorial(long double chislo){
    long double result =1;
    for (int i=chislo;i>0;i-=2){
        result*=i;
    }
    return result;
}

long double stepen(long double chislo,long int stepe)
{
	long double result = 1;
	long int k = 0;
	while (k < stepe)
	{
		result *= chislo;
		k++;
	}
	return result;
}
long double formula(long double chislo){
    long double chisl=0,znam=0,result=1;
    for (int k=0;k<=10;k++){
        chisl+=stepen(chislo,2*k+1)/factorial(2*k+1);
    }
    for (int k=0;k<=10;k++){
        znam+=stepen(chislo,2*k)/factorial(2*k);
    }
    result=chisl/znam;
    return result;
}

int main(){
    long double y,result,chisl,znam;
    std::cout<<"Введите y:";
    std::cin>>y;
    chisl=7*formula(0.25)+2*formula(1+y);
    znam=6-formula(stepen(y,2)-1);
    result=chisl/znam;
    std::cout<<"Результат:"<<result;
    return 0;
}