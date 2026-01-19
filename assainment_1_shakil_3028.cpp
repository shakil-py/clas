#include<bits/stdc++.h>

using namespace std;
class Student{
public:
        string Name;
        string id;
        double GPA;
        string Dpt;
        Student(){
            Name = "Unknown";
            id = "S00000";
            GPA = 0.0;
            Dpt = "Undecleared";
            
        }
        Student(string N, string I,double G,string D){
            Name=N ;
            id=I  ;
            if (G>=0.0&& G<=4.0){
            GPA = G;
            }
            else{
            printf("Warning : invalid GPA");
            GPA = 0.0;
            }
            Dpt;
            printf("\nparamitarized ");
            display();
            }
        Student(const Student &Student){
            Name = Student.Name;
            id =Student.id;
            GPA =Student.GPA;
            Dpt =Student.Dpt;
            printf("\ncoppy from obj");
            }
        void display(){
        printf("\nName : %s\nID : %s\nCGPA : %.2f\nDepartment : %s", Name.c_str(), id.c_str(), GPA, Dpt.c_str());
        }
        // construct overlod
        // name id
        Student(string n,string i){
            Name = n;
            id = i;
            display();
        }
        // name id department gpa defaults
        Student(string n,string i,string d,double g=0.0){
            Name = n;
            id = i;
            GPA = g;
            Dpt = d;
            display();
        }
        // Student(){}
};
int main (){
    // default constractor
    Student s1;
    s1.display();
    // paramitarize constructor
    Student s2("shakil","28",3.28,"CSE");
    s2.display();
    // copy constructor
    Student s3=s2;
    s3.display();
    // constructor overload declear
    Student s4("Mahfuz","003","EEE");
    

    return 0;
}