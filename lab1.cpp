/*
 * Name        : lab_1.cpp
 * Author      : Evan 
 * Date        : 1/27/1
 * Description : Our First Lab of the Semester!
 */
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string checkExperience (char hasExperience) 
{
    if (hasExperience == 'y') 
    return string("Welcome back\n");
    else if (hasExperience == 'n')
    return string("Get ready to have some fun\n");
}

void FirstLab() {
  string first_name;
  char programmed_before = 'z', my_character = 'z';
  
 cout << "Hello!\n"
      << "Please enter your name\n";

 cin >> first_name;
 cout << "Nice to meet you, " << first_name << endl;

 cout << "Have you programmed before?\n(y = yes)(n = no)\n";

 cin >> programmed_before;

 cout << checkExperience (programmed_before);
 
 

}



int main()
{
  FirstLab();
  return 0;
}