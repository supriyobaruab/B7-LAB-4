#include <iostream>
using namespace std;

int main(){
    int numbers[]={1,3,2,6,9};
    int max = numbers[0];
    int min = numbers[0];

    for(int i =1; i<5;i++){
        if(numbers[i]>max){
            max= numbers[i];
        }
        if(numbers[i]<min){
            min = numbers[i];
        }
    }
    cout <<"The maximum number of the array is :" <<max <<endl;
    
    cout <<"The maximum number of the array is :" <<min <<endl;
}