#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>
#include <string>

class Student {
    public:
        Student(std::string n="", int a=0, int c=0);
        
    private:
        std::string name;
        int age;
        int code;
        friend std::ostream& operator<<(std::ostream &output, const Student &p);
};


 #endif