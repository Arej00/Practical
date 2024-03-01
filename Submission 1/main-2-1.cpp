#include<iostream>
extern int min_element(int array[],int);
using namespace std;

int main(){
    int array[]={10,2,3,4,5,6};
    int size=sizeof(array)/sizeof(array[0]);
    int minimum=min_element(array,size);
    cout<<minimum;
    return 0;

}
    