#pragma once
#include <string>
namespace Records{
    class Employee
    {
        public:
        Employee() = default;
        Employee(const std::string& firstname,const std::string& lastname);

        void promote(int raiseAmoout = 1000);
        void demote(int demeritAmount = 1000);
        void hire();
        void fire();
        void display() const;

        void setFirstname(const std::string& firstname);
        const std::string& getFirstname() const;

        void setLastName(const std::string& firstname);
        const std::string& getLastName() const;

        void setEmployeeNumber(int employeeNumber);
        int getEmployeeNumber() const;

        void setSalary(int newSalary);
        int getSalary() const;

        bool isHired() const;

        };
}