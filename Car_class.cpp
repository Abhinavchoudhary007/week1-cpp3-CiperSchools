#include<iostream>
using namespace std;
 class Car {
    int speed;
    string Model;
    public:
    Car(int speed , string Model){
        this->speed=speed;
        this->Model=Model;
    }
    void display(){
        cout<<"Speed of car is:"<<speed<<endl;
        cout<<"Model of car is:"<<Model<<endl;
        cout<<endl;
    }
    void warning(){
        if(speed>=100){
            cout<<"Over speed , Please Slow down";
        }
    }
 };
 int main(){
    Car Mahindra(80,"Thar");
    Mahindra.display();
    Mahindra.warning();

    Car Audi(120,"A4");
    Audi.display();
    Audi.warning();
 }