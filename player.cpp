#include <iostream>

#include <fstream>

using namespace std;
int main() {

    ofstream theFile;
    theFile.open("player.txt");
    cout<<"Enter player ID, name, and money \n";

    cout<<"press ctrl+d to quit \n"<<endl;

    int idNumber;
    string name;
    double money;

    while(cin>>idNumber>>name>>money){
        theFile <<idNumber<<' '<<name<<' '<<money<<endl;
    }

}
