c stuctures
author =Edwin kipchirchir
AdmNo=BSE-01-00072024
Date=04/07/2024
description=c structures
#include stdio.h
#includestring.h

//Define structure'student'
struct student{
char first_name[20];
char last_name[20];
int age;
char email[50];
int phoneNo;
float gpa;
}student1;

int main(){
//initialize fields of a student
strcpy(student1.first_name,Edwin);
strcpy(student1.last_name,kemoi);
strcpy(student1.email,kemoikipchirchir@gmail.com);
student1.age=20;
student1.phoneNo=757436193;
student1.gpa=3.5;

//print the values of a student
printf(student1.first_name%sn,student1.first_name);
printf(student1.last_name%sn,student1.last_name);
printf(student1.email%sn,student1.email);
printf(student1.phoneNo%dn,student1.phoneNo);
printf(student1.age%dn,student1.age);
printf(student1.gpa%.2f,student1.gpa);
    return 0;
}
