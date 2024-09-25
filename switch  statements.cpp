//Aprogram to grade the performance of students
//author=Edwin kipchirchir
//date =24/09/2024
//Reg no=BSE-01-0007/2024
#include<iostream>
using namespace std;

int main(){

int score,subj1,subj2,subj3,average_score;

cout<<"please enter scores "<<endl;
cin>>subj1>>subj2>>subj3;
average_score= (subj2+subj2+subj3)/3;
cout<<"average_score="<<(subj2+subj2+subj3)/3<<endl;
switch(average_score){
case 70 ... 100:
cout<<"grade A"<<endl;
break;
 case 60 ... 69:
cout<<"grade B"<<endl;  
break;
    case 50 ... 59:
cout<<"grade C"<<endl;
break;
case 40 ... 49:
cout<<"grade D"<<endl;
break;
 case 0 ... 39:
cout<<"grade E"<<endl;  
break;
default:
cout<<"invalid input"<<endl;
break;
}
return 0;    
}