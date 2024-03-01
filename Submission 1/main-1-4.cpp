#include<iostream>
extern int sum_two_arrays(int array[],int secondaaray[],int);
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    int secondarray[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    int result=sum_two_arrays(array,secondarray,size);
    cout<<result;

}