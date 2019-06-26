#include <iostream>

using namespace std;

//Euclid algorithm to calculate HCF of two numbers


int ecl(int p,int q)
{
	int r=p%q;
	if(r==0)
	return q;
	else
	return ecl(q,r);

}




