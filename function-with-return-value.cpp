#include<iostream>
using namespace std;

//create function with return value

//int return value function

int addFunction(int a =0, int b=0){
    int total = a+b;
    return total;
}

//string return value function
string nameReturn(string name =" "){
    string pre ="Md. ";
    string Post = " Emon";
    string retult= pre+name+Post;
    return retult;
}

int main(){
//call int return type function and print
//with Value
cout<<"Int type function with value : "<<addFunction(5,9)<<endl;
//without value
cout<<"Int type function without value : "<<addFunction()<<endl;


//call string return type function
//with value
cout<<"String type function with value : "<<nameReturn("Anirban")<<endl;
//without value
cout<<"String type function with value : "<<nameReturn()<<endl;

return 0;

}
