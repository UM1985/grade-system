#include<iostream>
using namespace std;
int main(){

int percentage;

cout << "Please Enter your Percentage: ";
cin >>percentage;

if(percentage >=90 && percentage <=100){
    cout << "Grade A";
}else if (percentage >=80 && percentage <=89){
    cout << "Grade B";
}else if (percentage >=60 && percentage <=79){
    cout << "Grade C";
}else if (percentage >=33 && percentage <=59){
    cout << "Grade d";
}else if (percentage >=0 && percentage <=32){
    cout << "Fail";
}else{
    cout << "Entered value is invalid";
}
}