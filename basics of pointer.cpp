#include<iostream>
using namespace std; 
int main(){
    int a=10;
    int *p= &a;

    char ch ='a';
    char *pch = &ch;

    cout<<(*p)<<endl; //value
    cout<<*(&a)<<endl; //value

    cout<<p<<endl; //address
    cout<<&a<<endl;   //address

    cout<<sizeof(p)<<endl; //size of pointer

    if(sizeof(pch)==sizeof(p)){    //pointer same size  
        cout<<"hello";             //variable do not
    }
    else 
    cout<<"hey";

    return 0;
}