#include <iostream>
#include"student.cpp"
using namespace std;

int main(){

Student std1;
Student *s2  = new Student;

s1.rollNumber = 99;

s2 -> rollNumber = 100;

s1.setAge(20, 123);
s2 -> setAge(24, 123);

s1.display();
s2->display();
   
}