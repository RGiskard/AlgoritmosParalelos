#include <iostream>
#include <fstream>
using namespace std;

void multiplicar() {
	int rowCount=100;
	int colCount=100;
	int** matrix = new int*[rowCount];
	for(int i = 0; i < rowCount; ++i)
		matrix[i] = new int[colCount];
	int x, y;
	ifstream in("100.in");
	
	if (!in) {
		cout << "archivo no encontrado.\n";
		return;
	}
	
	for (y = 0; y < rowCount; y++) {
		for (x = 0; x < colCount; x++) {
			in >> matrix[x][y];
		}
	}
	//cout<<matrix[5][5]<<endl;
	in.close();
	int** multiply = new int*[rowCount];
	for(int i = 0; i < rowCount; ++i)
		multiply[i] = new int[colCount];
	int sum=0;
	
	for (int c = 0 ; c < rowCount ; c++ )
		for (int d = 0 ; d < rowCount ; d++ )
		{
			for (int k = 0 ; k < colCount ; k++ )
				sum = sum + matrix[c][k]*matrix[k][d];
			multiply[c][d] = sum;
			sum = 0;
		}
		/*for (y = 0; y < rowCount; y++) {
			for (x = 0; x < colCount; x++) {
				cout<< multiply[x][y]<<" ";
			}
			cout<<endl;
		}*/
		
}

int main(int argc, char *argv[]) {
	multiplicar();	
	return 0;
}

