#include<iostream>
using namespace std;
class Appliance{
    public:
    Appliance(){
        cout<<"Appliance created";

    }
        virtual ~Appliance(){
        cout<<"Appliance destroyed\n";
    }
};
class Toaster:public Appliance{
    public:
    Toaster(){
        cout<<"Toaster created\n";

    }
        ~Toaster(){
        cout<<"Toaster destroyed\n";
    }
};
class Oven:public Appliance{
    public:
    Oven(){
        cout<<"\nOven created\n";

    }
        ~Oven(){
        cout<<"Oven destroyed\n";
    }
};



int main(){
//Oven obj;//static object
Appliance  *obj =new Oven;

delete obj;
}

