#include<iostream>
#include<string>
using namespace std;
class Bird{
    public:
    int Age;
    int No_of_Legs;
    string color;
    int weight;
   // parametrized ctor
    // Bird(int age,int nlg,string color,int weight){
    //     this->Age=age;
    //     this->No_of_Legs= nlg;
    //     this->color=color;
    //     this->weight=weight;
    // }
    void eat(){
        cout<<" Bird is Eating"<<endl;

    }
    void fly(){
         cout<<" Bird is flying"<<endl;

    }
};
 class Sparrow:public Bird
{
        public:
         //parametrized ctor
       Sparrow(int age,int nlg,string color,int weight){
        this->Age=age;
        this->No_of_Legs= nlg;
        this->color=color;
        this->weight=weight;
    }
        void grassing(){
            cout<<"sparrow is grassing"<<endl;
   
        }

};
int main()
{
    // Bird b(1,2,"brown",1);
    // cout<<b.Age;
     Sparrow s(1,2,"red",2);
    cout<<s.Age;

    

    return 0;
     }