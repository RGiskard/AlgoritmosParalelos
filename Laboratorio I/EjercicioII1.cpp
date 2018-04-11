#include <iostream>
using namespace std;
void Multiplicar()
{
	int sum=0;
	int matrix[100][100];
	int multiply[100][100];
	for (int c = 0 ; c < 100 ; c++ )
		for (int d = 0 ; d < 100 ; d++ )
	{
			for (int k = 0 ; k < 100 ; k++ )
				sum = sum + matrix[c][k]*matrix[k][d];
				multiply[c][d] = sum;
				sum = 0;
	}
}	
int main()
{
	return 0;
}	
