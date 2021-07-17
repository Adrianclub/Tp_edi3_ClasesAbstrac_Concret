/*****************************************************************************************************
Student y Human clases concretas
****************************************************************************************************/

#include <iostream>
#include"student.h"

using namespace std;

int main()
{
    Student* alumno = new Student(2345,"Juan", "Lopez");
    cout<<alumno->getSurname()<<"  ";
    alumno->eat();


    Human* alumno2 = new Student (1234, "Jose", "Rodriguez");
    cout<< "alumno2 " ;
    alumno2->toLive();

    delete alumno2;
    delete alumno;
    return 0;
}
