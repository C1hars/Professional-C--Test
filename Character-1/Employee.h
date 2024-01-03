#pragma once
#include <string>
namespace Records{
    class Employee
    {
        public:
        Employee() = default;
        Employee(const std::string& firstname,const std::string& lastname);

        void promote(int raiseAmoout = 1000);
    };
}