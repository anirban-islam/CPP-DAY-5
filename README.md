
## Authors

- [Anirban Islam Emon ](https://dev-anirban.me/)

 
## 🔗 Links

[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://dev-anirban.me/)

[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/anirban-islam/)

[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://x.com/Anirban_Islam_)



# Day Five CPP 🎈

# Function-Intro-In-C++
	#include<iostream>
	using namespace std;

	// Function create
	void myfun() { // function Declare
		// function Body
		cout << "The function is running..." << endl;
	}

	int main() {
		// A function is a block of code which only runs when it is called.
		// You can pass data, known as parameters, into a function.
		// Functions are used to perform certain actions, and they are important for reusing code:
		// Define the code once, and use it many times.

		// Create a Function
		// C++ provides some pre-defined functions, such as main(), which is used to execute code.
		// But you can also create your own functions to perform certain actions.

		// To create (often referred to as declare) a function, specify the name of the function,
		// followed by parentheses ():

		// void myFunction() {
		//   code to be executed
		// }

		// Call a Function
		// Declared functions are not executed immediately. They are "saved for later use",
		// and will be executed later, when they are called.

		// To call a function, write the function's name followed by two parentheses ()
		// and a semicolon ;

		// In the following example, myFunction() is used to print a text (the action),
		// when it is called:

		// Function Call
		myfun();

		// Can also call function multiple times — meaning functions are reusable components
		myfun();
		myfun();
		myfun();
		myfun();

		return 0;
	}


# Function-Parameter-In-C++
	#include<iostream>
	using namespace std;
	// Parameters and Arguments
	// can be passed to functions as a parameter. Parameters act as variables inside the function.

	// Parameters are specified after the function name,
	// inside the parentheses.
	// You can add as many parameters as you want, just separate them with a comma:

	// Syntax
	// void functionName(parameter1, parameter2, parameter3) {
	//   code to be executed
	// }

	// single parameter print function
	void printName(string name){
		cout<<"Single parameter : "<<"Printing Parameter Name : "<<name<<endl;
	}

	// Two parameter add function
	void addNumber(int a , int b){
		cout<<"Two Perameter : " <<a<<" + "<<b<<" = "<<a+b<<endl;
	}

	// Multiple parameter with different data type
	void testFunction(string department ,string name , int age , int id, char section , float result ){
		cout<<"\t Print Biodata "<<endl<<department<<endl<<name<<endl<<age<<endl<<id<<endl<<section<<endl<<result<<endl;
	}

	int main(){

		// single Parameter name print Function Using Call by Value : vlaue is = Anirban
		printName("Anirban");

		// Two Parameter addNumber Function Using Call by Value : vlaue a and b ;
		addNumber(7,9);

		// Call Multiple parameter call multiple time
		testFunction("Computer Science And Engneering" , "Anrban Islam Emon", 23 ,242311202, 'F', 3.50);
		testFunction("Nursing" , "Mim Islam Maya", 21 ,24231, 'A', 3.98);

		return 0;
	}

# Function-With-Default-Value-In-C++
	#include<iostream>
	using namespace std;

	// Create function with default value
	// If function is called without value,
	// the default value works with the function
	void defaultFunction(string name = "Anirban") {
		cout << "\tPrint Name" << endl;
		cout << name << endl;
	}

	int main() {
		// Call function with value
		cout << "Function Call With Value:" << endl;
		defaultFunction("Emon");

		// Call function without value
		cout << "Function Call Without Value:" << endl;
		defaultFunction();

		return 0;
	}

# Return-Type-Function-In-C++
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

# Function-Pass-By-Reference-In-C++
	#include<iostream>
	using namespace std;

	//You can also pass a reference to the function.
	//This can be useful when you need to change the value of the arguments:
	void swapNums(int &x, int &y) {
		int z = x;
		x = y;
		y = z;
	}

	void modifyStr(string &str) {
		str += " World!";
	}

	int main() {
		int firstNum = 10;
		int secondNum = 20;

		cout << "Before swap: " << "\n";
		cout << firstNum << secondNum << "\n";

		// Call the function, which will change the values of firstNum and secondNum
		swapNums(firstNum, secondNum);

		cout << "After swap: " << "\n";
		cout << firstNum << secondNum << "\n";

		string greeting = "Hello";
		modifyStr(greeting);
		cout << greeting;

		return 0;
	}

# Array-Pass-To-Function-In-C++
	#include<iostream>
	using namespace std;

	//Create Array Receive Function

	void printArray(int arr[]){
		int size = sizeof(arr);

		for(int i=0; i<=size ; i++){
			cout << arr[i] << endl;
		}
	}

	int main(){
		int arr[5] = {2, 5, 8, 6, 4};

		printArray(arr);

		return 0;
	}

# Structure-Pass-To-Function-In-C++
	#include<iostream>
	using namespace std;

	struct car {
		string model;
		int year;
		int price;
	};

	void printStruct(car c){
		cout << c.model << endl << c.year << endl << c.price << endl;
	}

	int main(){
		car car1 = {"BMW", 2025, 15686};
		car car2 = {"Toyata", 2020, 16585};

		printStruct(car1);
		printStruct(car2);

		return 0;
	}



