#include<iostream>
using namespace  std;



int main(){


int arr[]= {1,2,3,4,5,6};
int key = 4 ;
int n = 6;

bool flag = 0;

for(int i=0;i<n; i++){
if(arr[i] == key){
 flag = 1;
 break;
}

}


if(flag == 1){
    cout<<"Present ";
}
else{
    cout<<"not present ";
}

}