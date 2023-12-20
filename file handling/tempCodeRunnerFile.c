#include<stdio.h>
#include<windows.h>
void gotoxy(int x,int y){
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


int main() {

    gotoxy(30,10);
    printf("1.add");
    gotoxy(30,12);
    printf("2.list");
    gotoxy(30,14);
    printf("3.delete");
    gotoxy(30,16);
    printf("1.add");
    gotoxy(30,18);
    printf("2.list");
    gotoxy(30,20);
    printf("3.delete");

}