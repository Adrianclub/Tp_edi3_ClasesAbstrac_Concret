#include "student.h"
#include<string>
#include<iostream>
using namespace std;

Student::Student (){}
Student::Student (int _identifier, string _name, string _surname){
    identifier = _identifier;
    name = _name;
    surname = _surname;

}
Student::~Student(){}


void Student::setIdentifier(int identifier){
    this->identifier = identifier;

}

void Student::setSurname(string surname){
    this->surname = surname;

}

void Student::setName(string name){
    this->name = name;

}

 int Student::getIdentifier(){
    return identifier;
 }

 string Student::getSurname(){
    return surname;
 }

  string Student::getName(){
    return name;
 }

 void Student:: toLive(){
     cout<< "respira"<<endl;
 }
