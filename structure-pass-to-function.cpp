#include<iostream>
using namespace std;

struct car {
string model;
int year;
int price;
};

void printStruct(car c){
cout<<c.model<<endl<<c.year<<endl<<c.price<<endl;
}

int main(){
car car1={"BMW", 2025,15686};
car car2={"Toyata" , 2020 ,16585};

printStruct(car1);
printStruct(car2);


return 0;
}
