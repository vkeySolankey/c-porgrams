#include <iostream>
using namespace std;
int main(){
int r, c, a[10][10], b[10][10], sum[10][10], i, j;
cout<< "Enter number of rows (between 1 and 10): ";
cin>> r;

cout<< "Enter number of columns (between 1 and 10): ";
cin>> c;

cout<<endl<< "Enter elements of 1st matrix: " <<endl;
for(i = 0; i< r; ++i)
for(j = 0; j < c; ++j){
cout<< "Enter element a" <<i + 1 << j + 1 << " : ";
cin>> a[i][j];
       }
cout<<endl<< "Enter elements of 2nd matrix: " <<endl;
for(i = 0; i< r; ++i)
for(j = 0; j < c; ++j)
       {
cout<< "Enter element b" <<i + 1 << j + 1 << " : ";
cin>> b[i][j];
       }


for(i = 0; i< r; ++i)
for(j = 0; j < c; ++j)
sum[i][j] = a[i][j] + b[i][j];


cout<<endl<< "Sum of two matrix is: " <<endl;
for(i = 0; i< r; ++i) { 
for(j = 0; j < c; ++j)
        {
cout<< sum[i][j]<<endl;
        }
}
return 0;
}
