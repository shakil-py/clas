#include<bits/stdc++.h>
// using namespace std;
// class Student{
// public:
//         string Name;
//         string id;
//         double GPA;
//         string Dpt;
//         Student(){
//             Name = "Unknown";
//             id = "S00000";
//             GPA = 0.0;
//             Dpt = "Undecleared";
            
//         }
//         Student(string N, string I,double G,string D){
//             Name=N ;
//             id=I  ;
//             if (G>=0.0&& G<=4.0){
//             GPA = G;
//             }
//             else{
//             printf("Warning : invalid GPA");
//             GPA = 0.0;
//             }
//             Dpt;
//             printf("\nparamitarized ");
//             display();
//             }
//         Student(const Student &Student){
//             Name = Student.Name;
//             id =Student.id;
//             GPA =Student.GPA;
//             Dpt =Student.Dpt;
//             printf("\ncoppy from obj");
//             }
//         void display(){
//         printf("\nName : %s\nID : %s\nCGPA : %.2f\nDepartment : %s", Name.c_str(), id.c_str(), GPA, Dpt.c_str());
//         }
//         // construct overlod
//         // name id
//         Student(string n,string i){
//             Name = n;
//             id = i;
//             display();
//         }
//         // name id department gpa defaults
//         Student(string n,string i,string d,double g=0.0){
//             Name = n;
//             id = i;
//             GPA = g;
//             Dpt = d;
//             display();
//         }
//         // Student(){}
// };
// int main (){
//     // default constractor
//     Student s1;
//     s1.display();
//     // paramitarize constructor
//     Student s2("shakil","28",3.28,"CSE");
//     s2.display();
//     // copy constructor
//     Student s3=s2;
//     s3.display();
//     // constructor overload declear
//     Student s4("Mahfuz","003","EEE");
    

//     return 0;
// }
// senario 2 product ;

using namespace std;

class Product {
public:
    string name;
    double price;
    int stock;
    string category;
    string productCode;
    double discount;
    static int totalProducts;

    string generateID() {
        totalProducts++;
        return "PROD" + to_string(100 + totalProducts).substr(1);
    }
    Product() {
        name = "New Product";
        price = 0.0;
        stock = 0;
        category = "Uncategorized";
        discount = 0.0;
        productCode = generateID();
    }
    Product(string n, double p, int s) {
        name = n;
        price = (p > 0) ? p : 0.0; 
        stock = (s >= 0) ? s : 0;  
        category = "Uncategorized";
        discount = 0.0;
        productCode = generateID();
    }
    Product(const Product &other) {
        name = other.name + " (Copy)";
        price = other.price;
        stock = other.stock;
        category = other.category;
        discount = other.discount;
        productCode = generateID(); 
    }
    Product(string n, double p, int s, string cat, double d) {
        name = n;
        price = (p > 0) ? p : 0.0;
        stock = (s >= 0) ? s : 0;
        category = cat;
        discount = d;
        productCode = generateID();
    }
    Product(string n, double p, string cat) {
        name = n;
        price = (p > 0) ? p : 0.0;
        stock = 0;
        category = cat;
        discount = 0.0;
        productCode = generateID();
    }
    void display() {
        printf("\nProduct Code : %s\nName: %s\nPrice : $%.2f\nStock : %d\nCategory: %s\nDiscount : %.1f%%\n", 
                productCode.c_str(), name.c_str(), price, stock, category.c_str(), discount);
        printf("-------------------------------\n");
    }
};

// Initializing the static counter
int Product::totalProducts = 0;

int main() {
    // default
    Product p1;
    p1.display();

    // Overloaded using (Name, Price, Category)
    Product p2("Gaming Mouse", 45.50, "Accessories");
    p2.display();

    // Parameterized Constructor
    Product p3("LED Monitor", 150.00, 10, "Electronics", 5.0);
    p3.display();

    // 4.  Copy Constructor 
    Product p4 = p3; 
    p4.display();

    return 0;
}
