class Student {
public:
    int rollNumber;
private:
    int age;
public:

    //Deafult Constructor 
    Student(){
        cout<<"Constructor 1 called ! "<<endl;
    }

    //parametrized constructor 
    Student(int rollNumber){
        cout<<"Constructor 2 called"<< endl;
        this -> rollNumber = rollNumber;
    }

    Student(int r , int a){
        cout<<"Constructor 3 called"<<endl;
        rollNumber = r;
        age = a;
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