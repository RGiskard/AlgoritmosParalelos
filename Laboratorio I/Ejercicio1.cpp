#include<iostream>
using namespace std;
int MAX=10;
double A[MAX][MAX],x[MAX],y[MAX];
int primerfor()
{
	for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
			y[i]+=A[i][j]*x[j];
}
int segundofor()
{
	for(int j=0;j<MAX;j++)
		for(int i=0;i<MAX;i++)
			y[i]+=A[i][j]*x[j];
}

int main()
{
	return 0;
}

