#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
int main(){
    int a=5,b=10;
    cout<<"Value of a before swapping: "<<a<<endl;
    cout<<"Value of b before swapping: "<<b<<endl;
    swap(a,b);
    cout<<"Value of a after swapping: "<<a<<endl;
    cout<<"Value of b after swapping: "<<b<<endl;
    
    return 0;
}

/*
OUTPUT: 
Value of a before swapping: 5
Value of b before swapping: 10
Value of a after swapping: 10
Value of b after swapping: 5
*/
