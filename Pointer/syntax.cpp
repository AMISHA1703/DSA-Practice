#include <iostream>
using namespace std;
int main()
{
  // creation of variable:
  int var = 10;
  // creation of pinter:
  int *ptr = &var; // ptr is pointer name that store the address of integr data

  cout << "address of var :" << &var << " " << ptr << endl; //&var display var address and ptr also display  var address which is stored in ptr
  cout << " value in var" << var << " " << *(ptr) << endl;  // * is deference operator  shows value at address stored in ptr
  cout << "address of ptr " << &ptr << endl;                // where ptr stored in memory i.e location
  cout << ptr + 1 << endl;                                  // it points to next memory block
  cout << *ptr + 1 << endl;                                 // value at ptn valuer is same i.e 10 1 is added outside not at memory locatio
  // cout<<*var<<endl; //  error:  deferencing of pointer variable is allowed not a variable
  cout << (*ptr)++ << endl; // this changes value from the memory
  cout << ++(*ptr) << endl;
  cout << *ptr << endl;

  // int*ptr=var;// not allowed because ptr is pointer that store only address not value

  char ch = 'a';
  char *cptr = &ch; // cptr store address of character data

  // int a = 10;
  // int &b = a;            // reference variable
  // cout << a << " " << b;

  // size of pointer:------------------------
  cout << sizeof(ptr) << endl; //  size of ponter ptr is 4 here which is system dependent ptr store address and size of address which is store     ****** size of pointer is same for every type of pointer in a particular system

  // declaration of new pointer ptr2:----------------
  int *ptr2; //////////////////////this type of declaration is bad practice, it will store address of random memory location or may be show run time error
  cout << ptr2 << endl;

  // declaration of null pointer:--------
  int *ptr3 = 0; ////////////// good practice than above declaration
  cout << ptr3 << endl;

  // copy of pointer:-----------------
  int *q = ptr; // q is new pointer that store value of p and the value of p is address of var
  cout << q << " " << *(q) << " " << &q << endl;
  q = q + 1;
  cout << q << endl;

  // int* q=*ptr;// error: q is pointer and *ptr is interger value which can not be store in pointer

  // POINTER WITH ARRAY:------------------------------------------------------------------------------

  int arr[3] = {1, 2, 3};

  cout << arr << " " << &arr << " " << &arr[0] << endl;                               // all are same
  cout << *arr << " " << arr[0] << " " << *(0 + arr) << " " << 0 [arr] << endl;       // same
  cout << *(arr + 1) << " " << arr[1] << " " << *(1 + arr) << " " << 1 [arr] << endl; // same
  cout << *(arr + 2) << " " << 2 [arr] << endl;                                       // same
  cout << arr + 1 << endl;

  int *s = arr;
  int *t = arr + 1;
  cout << s << " " << &s << " " << *s << " " << endl;
  cout << t << " " << &t << " " << *t << " " << endl;

  cout << *s + 1 << " " << *s + 2 << endl;
  cout << *t + 1 << " " << *t + 2 << endl;
  cout << *(s + 4) << endl; // outof array so, give garbage value

  // CHARCTER POINTER:------------------------------------------------------------------------------------

  char chA[20] = "charcater";
  char *chptr = chA; //&chA not allowed
  cout << chA << endl;
  cout << chptr << endl;
  cout << (*chptr + 8) << endl;
  cout << *chptr << endl;
  cout << *(chptr + 9) << endl;

  cout << cptr << endl; // print till null charater does not find

  return 0;
}