#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
// void textcolor (int color)
// {
//     static int __BACKGROUND;

//     HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
//     CONSOLE_SCREEN_BUFFER_INFO csbiInfo;


//     GetConsoleScreenBufferInfo(h, &csbiInfo);

//     SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),
//                              color + (__BACKGROUND << 4));
// }

int main() {
   system("color 2A");
    printf("it's work properly\n");
}
