#include<iostream>
extern int array_mean(int array[],int);
using namespace std;


int main(){
    int array[]={1,2};
    int size=sizeof(array)/sizeof(array[0]);
    double mean=array_mean(array,size);
    cout<<mean;
    return 0;
}