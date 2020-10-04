#include <iostream>

using namespace std;

int main() {
    string tipoDeDato;

    getline(cin,tipoDeDato);

    if (tipoDeDato == "int")
    {
        cout<<sizeof(int)<<endl;
    }
    else if(tipoDeDato == "char")
    {
        cout<<sizeof(char)<<endl;
    }
    else if(tipoDeDato == "short")
    {
        cout<<sizeof(short)<<endl;
    }
    else if(tipoDeDato == "float")
    {
        cout<<sizeof(float)<<endl;
    }
    else if(tipoDeDato == "double")
    {
        cout<<sizeof(double)<<endl;
    }
    else if(tipoDeDato == "long")
    {
        cout<<sizeof(long)<<endl;
    }
    return 0;
}