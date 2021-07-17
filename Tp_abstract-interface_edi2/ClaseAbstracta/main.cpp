#include "student.h"
#include<iostream>
using namespace std;

int main (){

    Student* alumno = new Student ();
    alumno->setName("Juan");
    alumno->setSurname("Lopez");
    cout<<alumno->getSurname()<<"  ";
    alumno->toLive();


    delete alumno;
    return 0;
}
