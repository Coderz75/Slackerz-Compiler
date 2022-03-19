#ifndef DEFAULT_H
#define DEFAULT_H

#include <iostream>
#include "string.h"

namespace slackerz{


    
    std::string input(std::string ask = "");//collects user input
    
    std::string cstr(char a); //char to string
    
    void init_slackerz(int a= 0); //initilizes slackerz
    
    
    int abs(int num); //gets absolute value of an int

    int random(int num = 9999999); // returns random int

    std::vector<string> range(int num);


//to int
    template <typename U>
    int toint(U something);

    template<>
    int toint<float>(float something){
      return (int)something;
    }
    template<>
    int toint<std::string>(std::string something){
      return stoi(something);
    }
    template<>
    int toint<slackerz::str>(slackerz::str something){
        string k = something.v;
        return stoi(k);
    }

//to string
    template <typename L>
    string tostring(L a);

    template<>
    string tostring<float>(float a){
      return to_string(a);
    }
    template<>
    string tostring<int>(int a){
      return to_string(a);
    }
    template<>
    string tostring<double>(double a){
      return to_string(a);
    }
    template<>
    string tostring(bool b) {
    return b ? "true" : "false";
    }

//print
    template <typename T>
    void print(T a, string x = "\n");

    template<>
    void print<string>(std::string a, string x){
        std::cout << a + x;
    }
    template<>
    void print<float>(float a, string x){
        cout << to_string(a) + x;
    }
    template<>

    void print<std::vector<string>>(std::vector<string> a, string x){
        for(int i=0; i < a.size(); i++)
        std::cout << a.at(i) << '\n';
    }
    template<>
    void print<int>(int a, string x){
        cout << to_string(a) + x;
    }
    template<>
    void print<char const*>(char const* a, string x){
        string l = str(a);
        cout << l + x;
    }
    template<>
    void print<slackerz::str>(slackerz::str a, string x){
        cout << a.convstr() + x;
    }
    template<>
    void print<bool>(bool a, string x){
        cout << tostring(a) + x;
    }
}

#endif
