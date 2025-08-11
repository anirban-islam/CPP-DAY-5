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
