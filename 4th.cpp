#include <iostream>
using namespace std;

int main(){
    int mark[6];
    int total =0;
    string grade;
    float point;

    for(int i =0; i<6; i++){
        cout<<"Enter the mark of course " <<i+1 <<":";
        cin>>mark[i];
        total = total+mark[i];
}
    cout<<"Total marks of the courses :"<<total <<endl;
    total = total/6;
   
    if(total >=90){
        grade = "A+";
        point = 4.00;
    }
    else if(total >=85){
        grade = "A";
        point = 3.75;
    }
    else if(total >=80){
        grade = "B+";
        point = 3.50;
    }
    else if(total >=75){
        grade = "B";
        point = 3.25;
    }
    else if(total >=70){
        grade = "C+";
        point = 3.00;
    }
    else if(total >=65){
        grade = "C";
        point = 2.75;
    }
    else if(total >=60){
        grade = "D+";
        point = 2.50;
    }
   else if(total >=55){
    grade = "D";
    point =2.25;
}
else{
    grade = "F";
    point = 0.00;
}
cout<<"obtained grade :"<<grade <<" "<<"obtained point :" <<point; 
}