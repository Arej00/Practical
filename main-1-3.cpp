#include<iostream>
extern int num_count(int array[],int number,int);
using namespace std;

int main(){

    int number=5;
    int array[]={1,2,3,4,5,5};
    int size=sizeof(array)/sizeof(array[0]);
    int result=num_count(array,size,number);
    cout<<result;
    return 0;

}