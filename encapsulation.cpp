#include <iostream>
using std::string;

class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName (string name){
        Name = name;
    }  
    string getName (){
        return Name;
    }
    
    void setCompany (string company){
        Company = company;
    }  
    string getCompany (){
        return Company;
    }

    void setAge (int age){
        Age = age;
    }  
    int getAge (){
        return Age;
    } 

    void IntroduceYouself(){
        std:: cout << "Name - " << Name << std::endl;
        std:: cout << "Company - " << Company << std::endl;
        std:: cout << "Age - " << Age << std::endl;
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){
    Employee employee1 = Employee("Leo", "Volvo", 22);
    employee1.IntroduceYouself();

    employee1.setCompany("Renault");
    std::cout << employee1.getName() << " works at " << employee1.getCompany() << std::endl;

    return 0;
}