#include <iostream>
#include <fstream>

using namespace std;


int main(){


    ifstream randomInteger("random.text");
    int num_odd=0,  num_even=0;

    while (!randomInteger.eof()){
        int integer;
    randomInteger>>integer;
        if(integer % 2 == 1){
            num_odd+=1;
        }
        else{
            num_even+=1;
        }
    }
    cout<<"Odd: "<<num_odd<<"Even: "<<num_even;
}