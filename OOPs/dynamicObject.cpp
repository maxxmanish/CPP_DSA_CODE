#include<iostream>
using namespace std;
class Student{
    public:
    string name_of_student;
    int roll_number;
    float cgpa;
    Student(string name_of_student,int roll_number,float cgpa){
        this->name_of_student = name_of_student;
        this->roll_number = roll_number;
        this->cgpa = cgpa;

    }
};
void print(Student* s1){
    cout<<s1->name_of_student; // (*s1).name_of_student; but we use -> opretater instance of this
}
int main(){
Student* s1 = new Student("manish",999,6.98);
// cout<<s1->name_of_student<<" "<<s1->roll_number<<" "<<s1->cgpa;
print(s1);
}