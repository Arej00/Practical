#include<iostream>
extern int median_array(int array[],int);
using namespace std;


int main(){
    int array[]={3,2,5,1,4};
    int size=sizeof(array)/sizeof(array[0]);

    int result=median_array(array,size);
    cout<<result;
}