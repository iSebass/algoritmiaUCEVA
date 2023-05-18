/*
	Diseñe un programa que me permita ingresara
	nxm numeros en una matriz

	Posteriormente visualizar los datos en consola
*/

#include <iostream>
using namespace std;

int n,m;

int main(void){
	
	cout<<"Digite el numero de filas";
	cin>>n;
	
	cout<<"Digite el numero de columnas: ";
	cin>>m;
	
	int A[n][m];
	
	for(int fila=0; fila<n; fila++){
		for(int col=0; col<m; col++){
			cout<<"A["<<fila<<"]["<<col<<"]: ";
			cin>>A[fila][col];
		}
	}
	
	for(int fila=0; fila<n; fila++){
		for(int col=0; col<m; col++){
			cout<<A[fila][col]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
