#include<iostream>
using namespace std;


class B{
    public:
        int a;
        int b;

    public:
    void operator+ (B &obj){
        int v1 = this->a;
        int v2 = obj.a;
        cout << "Output " << v2 - v1 << endl;
    }

    void operator() (){
        cout << "Hello from brackets " << this->a <<endl;
    }
};


class Animal{
    public:
    void speak(){
        cout << "Animal language" << endl;
    }
};

class Dog:public Animal{
    public:
    void speak(){
        cout << "Dog Barking" << endl;
    }
}
;

int main(){
    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 10;
    // obj1 + obj2;
    // obj1();

    Dog obj;
    obj.speak();

    return 0;
}