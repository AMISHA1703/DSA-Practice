#include <iostream>
#include <string>
using namespace std;
// making class having name: Student
//  student is the custom data type that we creat
/* this is only blueprint that takes smallest addressable space in the memory which is given by compiler
when  ***** empty  class *********  */

class student
{
    // by default all attributes and methods are private

public:
    string Name;   // 24
    int Age;       // 4
    int Id;        // 4                so,  24+4+4+24+1=57 ( 3 padding so , answer is 60)
    string Branch; // 24
    bool Is_Good;  // 1

    // default ctor
    student()
    {
        cout << "by default ctor( constructor)" << endl;
    }
    // parameterized ctor
    student(int id, int age, string name, string branch, bool is_good)
    {
        this->Age = age;
        this->Id = id;
        this->Branch=branch;
        this->Name = name;
        this->Is_Good = is_good;
        cout<<"para ctor"<<endl;
    }
    // paramerterised ctor with less argument
    student(int id, int age, string name)
    {
        this->Age = age;
        this->Id = id;
        this->Name = name;
        
    
}
};
    int main()
    {
        cout << sizeof(student) << endl;
        // cout<<sizeof(string)<<endl;

        // whenever we make instance constructor calling takes place
        student s1; // instance | stack allocation
        student s2; // instance | stack allocation
        //  s1.Name="Ram";
        //  cout<<s1.Name<<endl;

         student s3(2,21,"A","CS",1);
         cout<<s3.Name<<endl;
         cout<<s3.Age<<endl;
         cout<<s3.Branch<<endl;


         student * s4=new student(3,22,"B"); //heap alllocation
         cout<<"s4 ka age"<<s4->Age<<endl;
         cout<<"s4 ka id"<<s4->Id<<endl;
         cout<<"s4 ka name"<<s4->Name<<endl;
         delete s4; //no memory leak
        return 0;
    }