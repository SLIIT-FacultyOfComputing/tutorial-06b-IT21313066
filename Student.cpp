#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

void Student::assignDetails(int id , char pName[]) {
  studentId = id;
  strcpy(name , pName);

}


void Student::display() {

  cout<<"student number is "<<studentId<<endl;
  cout<<"student name is"<<studentId<<endl;
  
}
