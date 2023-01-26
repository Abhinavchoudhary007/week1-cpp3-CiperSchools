#include<iostream>
using namespace std; 
int pow(int base , int power){
    int num=1;
    for(int i=0;i<power;i++){
        num*=base;
    }
    return num;
}
int main(){
   cout<<pow(2,3);
    return 0;
}
