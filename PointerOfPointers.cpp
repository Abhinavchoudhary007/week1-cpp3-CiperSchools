#include<iostream>
using namespace std; 
int main(){
    int a=10;
    int *p1=&a;
    int **p2=&p1;
    int ***p3=&p2;

    cout<<a<<endl;  //10
    cout<<p1<<endl; //# : address of a
    cout<<p2<<endl; //* : address of p1
    cout<<p3<<endl; //% : address of p2

    cout<<*p3<<endl; // derefrence to previous pointer
    cout<<*(*p3)<<endl;
    cout<<*(*(*p3));

    return 0;
}
