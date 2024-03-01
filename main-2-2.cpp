#include<iostream>
extern int max_element(int array[],int);
using namespace std;

int main(){
    int array[]={10,2,3,4,5,6};
    int size=sizeof(array)/sizeof(array[0]);
    int maximum=max_element(array,size);
    cout<<maximum;
    return 0;

}
    