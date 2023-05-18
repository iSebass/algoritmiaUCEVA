#include <iostream>
#include <windows.h>


using namespace std;

#define EMOTION_PLAYER   (char)(1)

char laberinto[5][6]={
	{'p',' ',' ','*',' ','*'},
	{'*',' ',' ',' ',' ',' '},
	{'*','*',' ','*','*',' '},
	{' ','*',' ','*','*',' '},
	{' ',' ',' ','*',' ','f'}
	};

int pos_x=0, pos_y=0;
int gameOver = 0;
int op;

void pintarTablero();

int main(void){
	
	while(gameOver == 0){
		pintarTablero();
		
		cout<<"1- U   2- D"<<endl;
		cout<<"3- R   4- L"<<endl;
		cin>>op;
		
		laberinto[pos_y][pos_x]=' ';
		
		switch(op){
			
			case 1: if(laberinto[pos_y-1][pos_x] == '*'){
						laberinto[0][0]='p';
						pos_x = 0;
						pos_y = 0;
					}
					else if(pos_y==0){
						laberinto[pos_y][pos_x]='p';
					}
					else{
						pos_y--;
						laberinto[pos_y][pos_x]='p';
					}
					break;
			case 2: 
					if(laberinto[pos_y+1][pos_x] == '*'){
						laberinto[0][0]='p';
						pos_x = 0;
						pos_y = 0;
					}
					else if(pos_y==4){
						laberinto[pos_y][pos_x]='p';
					}
					else{
						pos_y++;
						laberinto[pos_y][pos_x]='p';
					}
					break;
			case 3: if(laberinto[pos_y][pos_x+1] == '*'){
						laberinto[0][0]='p';
						pos_x = 0;
						pos_y = 0;
					}
					else if(pos_x==5){
						laberinto[pos_y][pos_x]='p';
					}
					else{
						pos_x++;
						laberinto[pos_y][pos_x]='p';
					}
					break;
			case 4: if(laberinto[pos_y][pos_x-1] == '*'){
						laberinto[0][0]='p';
						pos_x = 0;
						pos_y = 0;
					}
					else if(pos_x==0){
						laberinto[pos_y][pos_x]='p';
					}
					else{
						pos_x--;
						laberinto[pos_y][pos_x]='p';
					}
					break;
		}
		
		//Sleep(500);
		if(pos_x == 5 && pos_y == 4){
			gameOver = 1;
		}
		system("cls");
	}
	
	system("cls");
	cout<<"Felicidades, ganaste!!! en Hora buena Tio!!";
	
	return 0;
}
	
void pintarTablero(){
	for(int f=0; f<5;f++){
		for(int c=0; c<6;c++){
			if( laberinto[f][c] == 'f'){
				cout<<' ';
			}
			else if(laberinto[f][c] == 'p'){
				cout<<EMOTION_PLAYER;
			}
			else{
				cout<<laberinto[f][c];
			}
		}
		cout<<endl;
	}
	cout<<endl;
}

