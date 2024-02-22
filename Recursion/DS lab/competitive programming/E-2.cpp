#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< 'c'+1<<endl;         //here 1 is add with ASCII value of c

                        /* precedence of data type:-
                        1. double
                        2.float                                   
                        3.long long int            // ALL CALCULATIONS ARE IN HIGHER DATA TYPES
                        4. long int 
                        5.int
                        6.characters*/


//EXAMPLES
int a=3/2.0;        /*here higher data type is float so calculation is in higher data type
                    calculation is 1.5 but a is integer so store integer value so
                     OUTPUT-1 */
cout<<a<<"\n";
double b=3/2.0;       // here calculation is in higher data type i.e DOUBLE
                      //b is double so store double value in a variable 'b';
cout<<b<<endl;

double c=3/2;             // here calculation of int with int and answer is int so c is int
cout<<c<<endl;


// operator precedence
cout<<3*7/2<<endl;
cout<<7/3*2<<endl;              // in both cases operator precedence takes place
                         // * AND / are in same order so associativity from left to right




// OVERFLOW
int d=100000;
int e=100000;
int f=d*e;                // f takes garbage value because int range is -10^9 t0 10^9
cout<<f<<endl;
int mx=INT_MAX;              
                           //INT_MIN < int < INT_MAX
cout<<mx<<endl;
long long int g=d* 1LL *e;           // d is in int and e is in int so calculation  is in int and g store wrong value
cout<<g<<endl;            // so make calculation in long long int we use 1LL

double h=100000;
double j=100000;
double k=j*h;             // value of k is in scientific notation so remove scientific we use
                          //" fixed keyword" 
//cout<<fixed<<k<<endl;                   // e is scientific way to write 10 to power something and it works in programming language also
//cout<<fixed<<setprecision(0)<<k<<endl;    // we use setprecision() keyword to say that don't print any 0 after decimal    
k=1e24;                                   // tis is 10^24
cout<<fixed<< k<< endl;

}