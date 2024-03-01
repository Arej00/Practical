#include<iostream>
extern int count_evens(int number);
using namespace std;

int main(){
    int number;
     cout<<"Enter a number: ";
     cin>>number;
    cout<<count_evens(number);
}