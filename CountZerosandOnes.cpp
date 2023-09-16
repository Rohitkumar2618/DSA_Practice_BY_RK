#include<iostream>
using namespace std;

int main(){

int arr[7] = {0,0,1,0,0,1,1};

int n= 7;

int zeroCount = 0;
int oneCount =0;

for(int i =0;i<n;i++){

if(arr[i] == 0){
    zeroCount++;
}

if(arr[i] == 1){
    oneCount++;
}


}
cout<<"zeroCount : "<<zeroCount<<endl;
cout<<"oneCount : "<<oneCount<<endl;


}