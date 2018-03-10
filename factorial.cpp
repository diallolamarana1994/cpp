#include <iostream>

using namespace std;

double factorialN (){

    int n;
    double nfact = 1 ;

    cout  <<   "Enter a number comprise between 0 and 30" <<'\n';
    cin  >> n;

    if(n >= 0 and n <= 30) {

        for (int i = n; i > 1; i--)

            nfact = nfact * i;

        cout << "The factorial of the number you entered is  " << nfact << endl;
    }
    else{

        cout<<"1"<<endl;
    }


}



int main() {


     factorialN();

     return 0;
}

