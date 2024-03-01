#include<iostream>
extern int two_five_nine(int array[],int);
using namespace std;

int main(){
    int array[]={2,5,2,5,9,9,9,2,5};
    int size=sizeof(array)/sizeof(array[0]);

    two_five_nine(array,size);
    return 0;
}