#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee {
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
    void AskForPromotion(){
        if (Age > 30)
            std::cout << Name << " got promoted!" << std::endl;
        else 
            std::cout << Name << ", sorry. No promotion for you." << std::endl;
    }
};

int main()
{
    Employee employee1 = Employee("Leo", "Volvo", 22);
    Employee employee2 = Employee("Claudio", "Renault", 43);
    
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    
    return 0;
}