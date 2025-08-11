#include<iostream>
using namespace std;


// Function create
void myfun(){//function Declare

//function Body

cout<<"The function is running...";
}


int main(){
//A function is a block of code which only runs when it is called.
//You can pass data, known as parameters, into a function.
//Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
//Create a Function
//C++ provides some pre-defined functions, such as main(), which is used to execute code.
// But you can also create your own functions to perform certain actions.
//To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ():


//void myFunction() {
  // code to be executed
//}

//Call a Function
//Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.

//To call a function, write the function's name followed by two parentheses () and a semicolon ;

//In the following example, myFunction() is used to print a text (the action), when it is called:

//Function Call
myfun();

// can aslo call Function Multiple time it's means function are reuseable component's
myfun();
myfun();
myfun();
myfun();
return 0;
}
