#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>a
int width=20,height=20,flag;
int snake_x,snake_y ,fruit_x;// snake possition in middle 
int  fruit_y,Game_over,score; // fruit possition
void setup() {
        snake_x=width/2;
        snake_y=height/2;
        Game_over=0;
        label:
        fruit_x=rand()%20;
        if(fruit_x==0)
        goto label;
        label2:
        fruit_y=rand()%20;
        if(fruit_y==0)
        goto label2;
        

}
void boundry(){
    system("cls"); 
for(int i=0; i<=width; i++) { //w= rows
    for(int j=0; j<=height; j++) {
          if(i==0 || i==width || j==0 || j==height) { 
           printf("*"); }
          else { 
               if(i==snake_x && j==snake_y)
               printf("0");
               else if(i==fruit_x && j==fruit_y)
               printf("@");
               else 
               printf(" ");
                 
            
          }
          
    }
    printf("\n");
}
}
void input() {
    if(kbhit()) {
           switch(getch()) {
            case 'a':
            flag=1;
            break;

            case 's':
            flag=2;
            break;
            case 'd':
            flag=3;
            break;
            case 'z':
            flag=4;
            break;
            case 'x':
            Game_over=1;
            break;
           }
    }
}

void makelogic() {
     switch(flag) {
        case 1:
         snake_y--;
         break;
        case 2:
        snake_y++;
        break;
        case 3:
        snake_x--;
        break;
        case 4:
        snake_x++;
        break;
        default :
        break;

     }
     if(snake_x<0 || snake_x>width || snake_y<0 || snake_y>height)
         Game_over=1;
         if(snake_x==fruit_x && snake_y==fruit_y)
         {

         label:
        fruit_x=rand()%20;
        if(fruit_x==0)
        goto label;
        label2:
        fruit_y=rand()%20;
        if(fruit_y==0)
        goto label2;   
         }
}

int main() {
    
    system("color 0a");
       
    setup();
    while(!Game_over) { 
boundry();
 input();
 makelogic();
 sleep(1);

    }
    return 0;
}