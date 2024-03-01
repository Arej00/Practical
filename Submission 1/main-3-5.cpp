#include<iostream>
extern double sum_even(int array[],int);
using namespace std;

int main(){
    int array[]={1,2,1,2,1,2};
    int size=sizeof(array)/sizeof(array[0]);

    double even=sum_even(array,size);
    cout<<even;

}