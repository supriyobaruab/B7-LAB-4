#include <iostream>
using namespace std;
int main(){
    int salary[12],sum=0;

    for(int i=0; i<12; i++){
        cout<<"Enter the salary of month " <<i+1 <<":";
        cin>>salary[i];
        sum = sum + salary[i];
    }
    cout<<"Total salary of a year :" <<sum;
}