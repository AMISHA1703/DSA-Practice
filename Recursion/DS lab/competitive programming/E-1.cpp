#include<bits/stdc++.h>   //hearder file where all function such as cout is defined or scope of cout is in 
                            //that function ;      //# is the preprocessor
using namespace std;
int main()      // the function from where the execution of program start
{
    cout<<" HELLO "<<" "<<sqrt(16)<<" " <<" WORLD "<<endl;
    
    // data types - char ,int, long , long long int,float,double,bool;
 char ch='a';                            //char store single character  in a single inverted commma
                                            //int range _  -10^9<int<10^9;
 long int d=123456712;                     // long int range _  -10^12< long int<10^12;
 double z=1.234567852;                     // long long int range_  -10^18< long long int<10^18;
 bool s=true;                              // bool gives output in 0& 1 formate ,also it take all inter as true anly 0 as false
cout<<ch<<" "<<d<< " "<<z <<" "<<(int)z<< " "<<s<<" " << (float)z<<endl;
 
int x=4; 
x++;
cout<<x<<endl;
int v=x+1;                   // operators /precedence/associativity in page;  
cout<<v<<endl;              //a++ means a+1;
++v;                       //a++ first uses value of a and then increment
cout<<v<<endl;            //++a first increment and then uses value of a
int g=v+4;
cout<<g<<endl;
--g;
cout<<g<<endl;
g--;
cout<<g<<endl;

int r=2;
cout<<r<<endl;
cout<<r++<<endl;                     //important concept;
cout<<r<<endl;
cout<<++r<<endl;
cout<<r<<endl;


int q=1;
cout<<q<<" "<<q++<<" "<<q<<" "<<++q<<" "<<q<<endl;           //ASK?//



// ASCII VALUE 
char ch1='j';
cout<<(int)ch1<<endl;
char ch2='o';
cout<<(int)ch2<<endl;
cout<<ch1-ch2<<endl;

// cin function - speciality of cin function is it skip all space among inputs

int f;
 double u;char ch3;
cin>>f>>u>>ch3;                                                  //char takes only one input character
cout<<f<<" "<<u<< " "<<ch3<<" "<< (int)ch3<<" \n"; 
                                                              //new line print using  keyword endl;  0r   " \n";                                                        
}


 

                                        

                
