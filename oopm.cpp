#include<iostream>
using namespace std;
class Appliance{
    public:
     virtual void start()  {
        cout<<"Generic Appliance\n";
      }
};
class Toaster:public Appliance{
    public:
    void start(){
        cout<<"Toaster coils heating up\n";
    }
};
class Oven:public Appliance{
    public:
    void start(){
        cout<<"oven preheating\n";
    }
};
void runAppliance(Appliance *ptr){
    ptr->start();
}

int main(){
//     Appliance *t=new Toaster;
//     Appliance *o=new Oven;
//     runAppliance(t);
//     runAppliance(o);
Appliance *t[2]={new Toaster ,new Oven};//heterogenous array
for(int i=0;i<2;i++){
    t[i]->start();
}
}