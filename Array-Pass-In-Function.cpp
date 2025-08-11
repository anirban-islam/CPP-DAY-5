#include<iostream>
using namespace std;

//Create Array Receive Function

void printArray(int arr[]){
int size=sizeof(arr);

for(int i=0; i<=size ; i++){

cout<<arr[i]<<endl;
}
}


int main(){
int arr[5]={2,5,8,6,4};

printArray(arr);


return 0;

}
