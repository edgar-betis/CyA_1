#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include "rational.hpp"

using namespace std;

void get_rational(ifstream& file1, rational& a){

    string number1, n1, n2;

    file1 >> number1;
    istringstream ss(number1);

    getline(ss, n1, '/');
    getline(ss, n2, '/');
    int num = stoi(n1);
    int den = stoi(n2);

    a.set_num(num);
    a.set_den(den);

}

int main(){

ifstream file("file.txt");
ofstream fileout("fileout.txt");
rational a,b,c,d;

while(!file.eof()){

    get_rational(file,a);
    a.write_rational(fileout);

    get_rational(file,b);
    b.write_rational(fileout);
    
}

return 0;
}

