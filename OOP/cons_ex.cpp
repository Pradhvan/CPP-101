#include<iostream>
using namespace std;

class Student {
public:
    int rollNumber;
private:
    int age;
public:

    //Deafult Constructor 
    Student(){
        cout<<"Constructor called ! "<<endl;
    }

    Student(int r){
        rollNumber =r;
    }

    void display(){
        cout<<age<<" "<<rollnumber<<endl;
    }

    void getAge(){
        return age;
    }

    void setAge(int a, int password){
        if(password != 123){
            return;
        }

        if(a<0){
            return;
        }

        age = a;
    }
};

int main(){
    Student s1;
    s1.display();

}