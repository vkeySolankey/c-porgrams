#include<iostream>
#include<limits>
 using namespace    std;
int largest(int max,int arr[]) {
    for(int i=0; i<5; i++) {
if(max<arr[i]) max=arr[i];

}
return max;
}
int main() { 
    int arr[5];
int max=-2147483647; // smallest integer valuecout<<"enter five any number :";
cout<<"enter five number\n";
for(int i=0; i<5; i++) {
cin>>arr[i];

}

int ans= largest(max,arr); cout<<"largest num is:"<<ans<<endl;

}
