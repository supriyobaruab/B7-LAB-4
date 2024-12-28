#include <iostream>
using namespace std;

int main(){
    int id[10];
    int salary[10];
    string number[10] = {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
    int age[10];

    for(int i =0; i<10; i++){
        cout <<"Id of employee " <<number[i] <<":";
        cin>>id[i];
        cout <<"Salary of employee " <<number[i] <<":";
        cin>>salary[i];
        cout <<"Age of employee " <<number[i] <<":";
        cin>>age[i];
    }
    for(int j=0; j<10; j++){
        cout<<endl;
        cout<<"Employee " <<number[j]<<endl; 
        cout<<endl;
        cout<<"Id:" <<id[j] <<" ";
        cout<<"Salary:" <<salary[j] <<" ";
        cout<<"Age:" <<age[j] <<endl;
    }
}