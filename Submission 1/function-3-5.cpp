#include<iostream>
using namespace std;

double sum_even(double array[],int n){
    if(n<0){
        return 0;
    }
    double sum=0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum=sum+array[i];
        }
    }
    return sum;
}

