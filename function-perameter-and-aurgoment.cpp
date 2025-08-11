#include<iostream>
using namespace std;
//Parameters and Arguments
// can be passed to functions as a parameter. Parameters act as variables inside the function.

//Parameters are specified after the function name,
//inside the parentheses.
//You can add as many parameters as you want, just separate them with a comma:

//Syntax
//void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
//}

//single parameter print function
void printName(string name){
cout<<"Single parameter : "<<"Printing Parameter Name : "<<name<<endl;
}

//Two parameter add function
void addNumber(int a , int b){
cout<<"Two Perameter : " <<a<<" + "<<b<<" = "<<a+b<<endl;
}

//Multiple parameter with different data type
void testFunction(string department ,string name , int age , int id, char section , float result ){
cout<<"\t Print Biodata "<<endl<<department<<endl<<name<<endl<<age<<endl<<id<<endl<<section<<endl<<result<<endl;

}

int main(){

//single Parameter name print Function Using Call by Value : vlaue is = Anirban
printName("Anirban");

//Two Parameter addNumber Function Using Call by Value : vlaue a and b ;
addNumber(7,9);

//Call Multiple parameter call multiple time
testFunction("Computer Science And Engneering" , "Anrban Islam Emon", 23 ,242311202, 'F', 3.50);
testFunction("Nursing" , "Mim Islam Maya", 21 ,24231, 'A', 3.98);

return 0;
}
