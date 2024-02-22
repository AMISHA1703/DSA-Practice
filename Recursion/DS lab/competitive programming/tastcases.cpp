               // TAST CASE
//   #include<bits/stdc++.h>
//   using namespace std;
//   int main()
//   {
//  int t;
//   cin>>t;
//      while(t--)                        //  for(int test=1; test<t;++test)
//  {
//     int n; cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"$";
//         }
//         cout<<endl;
//     }
//  }
//   }
                            //  INFINITE LOOP   : if condition is true
    
// #include<bits/stdc++.h>
// using namespace std;
// int maian(){ 
//     for(int i=1;;i++)
//     {
//         cout<<"hello";
//     }
// }                                                                              //  while(1)
                                                                             //for(;;)
                                                                            //for(i=1;;i++)
                                                                           //for(i=1;true;i++)


                                // BREAK AND CONTINUE

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=8;i++)
    {
         for(int j=1;j<=i;++j)                                    //continue: skip value and come to starting of loop
        {                                                         // break: break the loop come come outside of loop
            // for(;true;)
            // {

            
                  if(j==2)
                {
                    break; // continue;  
                }
     cout<<j<<endl;
            // }
         }
    }
}
