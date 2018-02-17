#include <iostream>

#include <fstream>

using namespace std;
int main() {

    ofstream diallofile;
    diallofile.open("tuna.txt");
    diallofile << "I love tuna and tuna love me! \n";
    diallofile.close();
}