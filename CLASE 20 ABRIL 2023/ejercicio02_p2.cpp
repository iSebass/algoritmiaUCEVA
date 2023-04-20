#include <iostream>
using namespace std;


int main(void) {
	int T1, T2, sumaT1=0, sumaT2=0;
	float promedioT1,promedioT2;
	int nveces=1;
	
	while( nveces<=10 ){
		system("cls");
		cout<<"Iterador: "<<nveces<<endl<<endl;
		cout<<"T1: "; cin>>T1;
		cout<<"T2: "; cin>>T2;
		
		if( T1>=5 && T1<=15  && T2>=5 && T2<=15){
			sumaT1 = sumaT1 + T1;
			sumaT2 = sumaT2 + T2;
			nveces++;
		}
	}
	promedioT1 = sumaT1/10.0;
	promedioT2 = sumaT2 / 10.0;
	cout<<promedioT1<<endl;
	cout<<promedioT2<<endl;
	return 0;
}




