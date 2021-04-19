/*

A C++ PROGRAM THAT FINDS THE NUMBER OF VOWELS IN A GIVEN STRING
Author: BAIMAM BOUKAR JEAN JACQUES
Email: baimam.jeanjaque@ictuniversity.edu.cm
Phone: (+237) 690535759 / 679782255

*/

#include <iostream>
using namespace std;

int main(){
    string input_str;
    //structuring all vowels in an array
    char all_vowels[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
    int vowels_count = 0; //initializing counter with value 0
    system("color 0A");

    //getting the string form the user
    std::cout << "Please enter the string that you want to count vowels in: ";
    cin>>input_str;

    for (int i = 0; i < input_str.length() ; i++)
    {
        for(int j = 0; j<10; j++){
            if(input_str[i] == all_vowels[j]){
            vowels_count++;
        }
        }
    }

    std::cout << "Your string has "<<vowels_count<<" vowels in total" << std::endl;
    system("pause>0");
    return 0;
}
