/*
Given rectangle of length l and breath b.print area of recangle.

Constrain:
1<=l<=10^9
1<=b<=10^9

INPUT FORMATE:
2 space separated inter l and b

OUTPUT FORMATE:
single number which is area of rectangle

SAMPLE INPUT:
3  4
SAMPLE OUTPUT:
12

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   /*int l,b;
   cin>>l>>b;         this code is wrong bcoz l's range 10^9and b's range 10^9 so area range is 10^18 which gives
   cout<<l*b;          wrong answer */

   //RIGHT CODE 1 :

   long long int l,b;
   cin>>l>>b;
   cout<<l*b;

   // 2:

   int l,b;
   cin>>l>>b;
   cout<<l* 1LL * b ; 
}


