#include <iostream>
using namespace std;
class Calculation{
    int a;
    int b;
    int c;
    int d;
    public :
    Calculation(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
        d = 10;
    }
    int add(){
        return ((a + b) + (c + d));
    }
    int add(int a){
        return a;
    }
    int add(int a, int b){
        return a + b;
    }
    int add(int a, int b, int c){
        cout << "int wala \n";
        return a + b + c;
    }
    double add(double a, double b, double c){
        cout << "double wala \n";
        return a + b + c;
    }
};
int main() {
   Calculation obj(0, 0, 0);
   cout << obj.add(4, 5, 7);
}