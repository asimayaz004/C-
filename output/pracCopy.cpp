#include<iostream>
// #include<cstring>
using namespace std;

class hero{
    public:
    int health;
    string name;

    hero(){
        cout<<"Constructor Called"<<endl;
        // char name [20];
    }
    void print(){
        cout<<"Name: "<<this->name<<", ";
        cout<<"Health: "<<this->health<<endl;
    }

    void setHealth(int h){
        health = h;
    }

    void setName(string n){
    name =n;
    }
};

int main(){
    hero h1;
    h1.setHealth(10);
    h1.setName("Asim");
    h1.print();

    hero h2(h1);
    h2.print();// copy of h1

    h1.name[0]='D';
    h1.print();
    
    h2.print();
}