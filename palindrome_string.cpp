/*

A C++ PROGRAM THAT CHECK IF A GIVEN STRING IS A PALINDROME
Author: BAIMAM BOUKAR JEAN JACQUES
Email: baimam.jeanjaque@ictuniversity.edu.cm
Phone: (+237) 690535759 / 679782255

*/

#include<iostream>
using namespace std;

//this function checks if a given string a palindrome
bool check_if_is_palindrome(string input_str){
    int n = input_str.length();
   for (int i = 0; i < n; i++){
       if(input_str[i] != input_str[n-i-1]){
           return false;
       }
       else{
           return true;
       }
   }
}

int main(){
    system("color 0A");
    string input_str;

    //getting the string form the user
    std::cout << "Please enter the string that you want to check the palindrome: ";
    cin>>input_str;

    //checking if the string is palyndrome
    bool isPalindrome = check_if_is_palindrome(input_str);

    //printing the results
    if (isPalindrome)
    {
        std::cout << "Your string " << input_str <<" is a palindrome" <<std::endl;
    }
    else
    {
        std::cout << "Your string " <<input_str<<" is noooooooot a palindrome" <<std::endl;
    }

    system("pause > 0");
    return 0;
}
