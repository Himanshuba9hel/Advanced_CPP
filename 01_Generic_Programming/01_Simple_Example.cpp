#include <iostream>
using namespace std;
/*
Generics is the idea to allow type (Integer, String, … etc and user-defined types) 
to be a parameter to methods, classes and interfaces. For example, classes like an 
array, map, etc, which can be used using generics very efficiently. We can use them 
for any type. The method of Generic Programming is implemented to increase the efficiency 
of the code. Generic Programming enables the programmer to write a general algorithm 
which will work with all data types. It eliminates the need to create different 
algorithms if the data type is an integer, string or a character. The advantages of 
Generic Programming are

    1.Code Reusability
    2.Avoid Function Overloading
    3.Once written it can be used for multiple times and cases.
*/




//Defining the template
template <typename T>

T myMax(T x, T y){
    return ( x > y) ? x : y;
}

int main(){
    cout<<"Welcome to generic programming"<<endl;

    //Declaring the Float variables
    float f1,f2;
    f1 = 11.11; f2 = 10.10; 
    cout<<"Calling the myMax method with Float\n\t\t"
        <<f1<<" and "<<f2<<" is "
        <<myMax<float>(f1,f2)<<endl;

    //Declaring the Integer variables
    int i1 = 22; int i2 = 44;
    cout<<"Calling the myMax method with Integer\n\t\t"
        <<i1<<" and "<<i2<<" is "
        <<myMax<int>(i1,i2)<<endl;

    //Declaring the Integer variables
    char c1 = 'A'; char c2 = 'Z';
    cout<<"Calling the myMax method with Integer\n\t\t"
        <<c1<<" and "<<c2<<" is "
        <<myMax<char>(c1,c2)<<endl;
    return 0;
}