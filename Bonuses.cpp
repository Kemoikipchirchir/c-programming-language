//program to find the bonus
#include <iostream>
using namespace std;

int main(){
double salary,bonus,net_salary;
int years_served;
cout<<"enter the years_served and the salary"<<endl;
cin>>years_served>>salary;
if(years_served>10){
    bonus=0.1*salary;
    net_salary=bonus+salary;
cout<<"net_salary:"<<net_salary<<endl;
}
else if(years_served>=6 && years_served<=10){
bonus=0.08*salary;
net_salary=bonus+salary;
cout<<"net_salary"<<net_salary<<endl;
}
else {
bonus=0.05*salary;
net_salary=bonus+salary;
cout<<"net_salary"<<net_salary<<endl;
}
return 0;
}