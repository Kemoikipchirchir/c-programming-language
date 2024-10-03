#include<iostream>
#include<cmath>
using namespace std;
int product(int rad);
int main(){
    int rad;
    int volume;
    cout<<"please enter rad"<<endl;
    cin>>rad;
    int ans=product('int rad');
    cout<<"the volume of a sphere is "<<ans<<endl;

    return 0;
}
int product(int rad){
    int vol=rad*rad*rad*22/7*4/3;
    return vol;
}