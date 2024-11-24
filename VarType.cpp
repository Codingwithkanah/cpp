#include <iostream>               
using namespace std;              
int main(){
    int num1 = 10;
    char chr = 'a';
    
    //wchar_t wchr = L"hello";       //wide character refers to a type used to store characters beyond the basic ASCII set such as Unicode
    
    float flt = 1.56 ;
    bool boo = true ;
    
    //void  = NULL ;
    
    double dbl = 1.6574 ;
    string str = "Hello World";

    //cout is also used to print varibale <<
    
    cout << "the integer is : " << num1 << endl ; 
    cout << "the character is : " << chr << endl ; 
    cout << "the float is : " << flt << endl ; 
    cout << "the boolean is : " << boo << endl ; 
    cout << "the double floating point is : " << dbl << endl ; 
    cout << "the string is : " << str << endl ;


// sizeof(var/data) is used to find the size of variable in bytes in memory

    cout << "size of integer is : " <<   sizeof(num1)   <<  endl ; 
    cout << "size of character is : " <<   sizeof(chr)   <<  endl ; 
    cout << "size of float is : " <<   sizeof(flt)   <<  endl ; 
    cout << "size of boolean is : " <<   sizeof(boo)   <<  endl ; 
    cout << "size of double floating point is : " <<   sizeof(dbl)   <<  endl ; 
    cout << "size of string is : " <<   sizeof(str)   << endl ;

    return 0;
}