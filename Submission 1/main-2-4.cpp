#include<iostream>
extern int is_ascending(int array[],int);
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6};
    int size=sizeof(array)/sizeof(array[0]);


    bool result=is_ascending(array,size);
    cout<<result;
}