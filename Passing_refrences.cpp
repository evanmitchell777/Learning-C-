#include <iostream>
#include <string>

using namespace std;


class Car{

    public:
string color;
string make;
string model;
int year;
int milage;

void start(){
    cout<<"the car started";
}

void excerlerate(){
    cout<<"vroom";
}

void break_pedal(){
cout<<"the car came to a stop";

}

};


class motorcycle{
public:
void pass_pointer(Car* ptr){
ptr-> start();
ptr->color ="blue";


}



};

int main(){
    motorcycle m;
    Car c;

    m.pass_pointer(&c);

return 0;
}
