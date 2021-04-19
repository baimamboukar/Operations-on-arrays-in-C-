/*

A C++ PROGRAM THAT PERFORMS LINEAR SEARCH IN AN ARRAYs
Author: BAIMAM BOUKAR JEAN JACQUES
Email: baimam.jeanjaque@ictuniversity.edu.cm
Phone: (+237) 690535759 / 679782255

*/


#include<iostream>
using namespace std;

//this function initialize my array from the user input
void initialize(string items[], int number_of_items){
    cout<<"INITIALIZING THE ARRAY..."<<endl;
     for(int i = 0; i < number_of_items; i++){
        cout<<"[INPUT]: Enter the value of index " <<i<< " : ";
        cin>>items[i];
    }
}


//definition of the linear search function

string linear_search(string items[], int number_of_items, string target_value){
for(int i = 0; i<number_of_items; i++){
    if(items[i] == target_value){
        string message = "Target " + target_value + " found in the array...";
        return message;
    }
}
 return "Target value not found";

}
int main(){
    system("color 0B");
    int number_of_items;
    string target_value;

    cout<<"Enter the number of elements of your array: ";
    cin>>number_of_items;
    string items[number_of_items];

    initialize(items, number_of_items);

    cout<<"What particular item do you want to seach in this array?: ";
    cin>>target_value;

    //Searching the target value using linear_search method
    string result = linear_search(items, number_of_items, target_value);

    cout<<result;

    system("pause>0");
    return 0;
}
