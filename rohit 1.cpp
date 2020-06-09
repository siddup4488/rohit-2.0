#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("phone.dat",ios::binary);
    fout.close();
}
