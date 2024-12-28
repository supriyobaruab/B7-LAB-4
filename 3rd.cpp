#include <iostream>
using namespace std;

int main(){
    int id[15];
    string de[15];
    string number[15] = {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen"};
    int marks[15];
    string grade[15];
    for(int i =0; i<15; i++){
        cout <<"Id of student " <<number[i] <<":";
        cin>>id[i];
        cout <<"Department of student " <<number[i] <<":";
        cin>>de[i];
        cout <<"Marks of the student " <<number[i] <<":";
        cin>>marks[i];
        cout <<"Grades of the student " <<number[i] <<":";
        cin>>grade[i];
    }
    for(int j=0; j<15; j++){
        cout<<endl;
        cout<<"Student " <<number[j]<<endl; 
        cout<<endl;
        cout<<"Id:" <<id[j] <<" ";
        cout<<"Department:" <<de[j] <<" ";
        cout<<"Marks:" <<marks[j] <<" ";
        cout<<"Point :" <<grade[j]<<endl;
        
    }
}