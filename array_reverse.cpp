/*

A C++ PROGRAM THAT REVERSE AN ARRAY
Author: BAIMAM BOUKAR JEAN JACQUES
Email: baimam.jeanjaque@ictuniversity.edu.cm
Phone: (+237) 690535759 / 679782255


*/

#include<iostream>
using namespace std;


//this function initialize my array from the user input
void initialize(string items[], int number_of_items){
    cout<<endl<<"INITIALIZING THE ARRAY..."<<endl<<endl;
     for(int i = 0; i < number_of_items; i++){
        cout<<"[INPUT]: Enter the value of index " <<i<< " : ";
        cin>>items[i];
    }
}

//this function prints out the elements of an array
void debug_array(string arr[], int number_of_items, bool inverse){
 if(inverse == false){
    for (int i = 0; i < number_of_items; i++)
 {
    std::cout <<i+1<<"."<<arr[i] <<std::endl;
 }
 }
 else{
    int n = number_of_items - 1;
    int i = 0;
    while(n>=0){

        std::cout <<i+1<<"."<<arr[n] <<std::endl;
        i = i+1;
        n = n - 1;
    }
 }
}

int main(){

     system("color FA");
     int number_of_items;

    cout<<"Enter the number of elements of your array: ";
    cin>>number_of_items;
    string items[number_of_items];

     //initializing the array from user input
    initialize(items, number_of_items);

    //printing the array before reversing
    std::cout << "Before Reversing: " << std::endl;
    debug_array(items, number_of_items, false);

    //printing the array after reversing
    std::cout << "After Reversing: " << std::endl;
    debug_array(items, number_of_items, true);


    return 0;
}
