#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "human.h"
#include <string>

using namespace std;
class Student: public Human{
public:
    Student();
    Student(int,string,string);
    ~Student();
    void setIdentifier(int identifier);
    void setSurname(string surname);
    void setName(string name);
    int getIdentifier();
    string getSurname();
    string getName();
private:
    int identifier;
    string name;
    string surname;


};

#endif // STUDENT_H_INCLUDED
