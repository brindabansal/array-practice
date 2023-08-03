//what is array??---list containing similar(SAME) kind of items is array.
//why array??---multiple values ko EK hi variable array m store kia jaasakta h.
//Implementation dekhenge.
//contiguous memory locations,100,104,108,112,116....
//you can calculate index, it starts with 0 than increases....
// dost[4]means containing 5 , if we consider number counting.


#include<iostream>
using namespace std;


int main()
{ //declare 
    int number[15];
    //accessing an array
cout<<"value at 15 index"<<number[15]<< endl;

cout<<"value at 20 index"<<number[20]<< endl; //but size of our array is 15 only...

cout<< endl<<"everything is fine" << endl;

return 0;

}