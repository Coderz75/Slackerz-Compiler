#include <iostream>
#include <vector>

void print(std::string); //prints string
void printn(float number);//prints float
int fint(float number); //floats to int

int sint(std::string something); //string to int

//to string

std::string nums(float num); //float to string

std::string input(std::string ask);//collects user input

std::vector<std::string> split(std::string a, std::string x); //splits a string

void printv(std::vector<std::string> a); //prints a vector

std::vector<std::string> range(int num); // gives a range from 0 to a certain number

std::string is(int num); //int to string

//

int random(int thing); //random

std::string cstr(char a); //char to string

void init_slackerz(); //initilizes slackerz

void clear(); //clears console (NOT IN PYTHON)

void turnOffSync(); //turns of sync (default)

void turnOnSync(); //turns on sync

