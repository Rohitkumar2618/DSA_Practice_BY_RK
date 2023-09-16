#include<iostream>
#include<limits.h>
using namespace std;

int main(){

int arr[]={ 20,4,15,2,6,8,11};

int n = 7;
int maxAns = INT_MIN;

for(int i=0;i<n;i++)


if(arr[i]> maxAns){

maxAns = arr[i];

}
cout<<maxAns;

}