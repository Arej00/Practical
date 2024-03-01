#include<iostream>
using namespace std;

int median_array(int array[],int n){
    if(n<=0 || n%2==0){
        return 0;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    return array[n/2];

}

int main(){
    int array[]={3,2,5,1,4};
    int result=median_array(array,5);
    cout<<result;
}