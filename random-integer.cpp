
#include <iostream>

#include <fstream>

using namespace std;

int main(){

    ofstream randomInteger;
    randomInteger.open("random.txt");


    if (randomInteger.is_open()){
        for (int i = 1; i <= 1000; i++) {

                randomInteger << rand() * 2 + 1 << endl;

        }
        randomInteger << 0 << endl;
        randomInteger.close();
    }
    else {
        randomInteger<<"There is something wrong with your file";
    }
}

