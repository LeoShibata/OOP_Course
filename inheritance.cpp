#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee: AbstractEmployee {
private:
    string Company;
    int Age;
protected:
    string Name;
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

class Developer: public Employee {
public:
    string FavProgrammingLanguage;

    Developer (string name, string company, int age, string favProgrammingLanguage)
    : Employee(name, company, age){
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug(){
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }
};

class Teacher: public Employee {
public:
    string Subject;

    Teacher (string name, string company, int age, string subject)
    : Employee (name, company, age){
        Subject = subject;
    }
    void PrepareLesson (){
        std::cout << Name << " is preparing " << Subject << " lesson." << std::endl;
    }
};

int main()
{   
    Developer d = Developer("saldina", "YT-CodeBeuty", 25, "C++");
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    t.PrepareLesson();
    t.AskForPromotion();

    return 0;
}