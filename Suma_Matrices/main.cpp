#include <iostream>

using namespace std;

#define  N  2
#define  M  3

int A[N][M], B[N][M], R[N][M];

int main(void){
	
	for( int f=0; f<N; f++){
		for(int c=0; c<M; c++){
			cout<<"A["<<f<<"]["<<c<<"]: ";
			cin>>A[f][c];
		}
	}
	system("cls");
	for( int f=0; f<N; f++){
		for(int c=0; c<M; c++){
			cout<<"B["<<f<<"]["<<c<<"]: ";
			cin>>B[f][c];
		}
	}
	system("cls");
	for( int f=0; f<N; f++){
		for(int c=0; c<M; c++){
			R[f][c] = A[f][c] + B[f][c];
			cout<<R[f][c]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
	
	
	
	
	
