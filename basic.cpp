#include<iostream>
using namespace std; 
class Student{
      string password;
      public:
      string name;
      int id;
      void intro(){
        cout<<"Name of Student is : "<<name<<"ID is : "<<id<<"password is :"<<password;
      }
      void setPass(string s){
        password=s;
      }
};
int main(){
    Student s1;
    s1.name="Ram";
    s1.id=3;
    cout<<s1.intro();
   
    return 0;
}
