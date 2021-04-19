/*

A C++ PROGRAM THAT FINDS THE SUM OF ALL THE ELEMENTS OF AN ARRAY
Author: BAIMAM BOUKAR JEAN JACQUES
Email: baimam.jeanjaque@ictuniversity.edu.cm
Phone: (+237) 690535759 / 679782255

*/

#include<iostream>
using namespace std;


//this function initialize my array from the user input
void initialize(int items[], int number_of_items){
    cout<<endl<<"INITIALIZING THE ARRAY..."<<endl<<endl;
     for(int i = 0; i < number_of_items; i++){
        cout<<"[INPUT]: Enter the value of index " <<i<< " : ";
        cin>>items[i];
    }
}


//this functions sums the elemets of an array
int sum_the_array(int items[], int number_of_items){
    cout<<endl<<"PERFORMING ADDITION OF ELEMENTS..."<<endl;
    int sum = 0;
    for(int i = 0; i< number_of_items; i++){
        sum += items[i]; //adding the value at index i to sum variable
    }
    return sum;
}


int main(){

 system("color 0B"); //change the command prompt color(black background and cyan text color)
    int number_of_items;

    cout<<"Enter the number of elements of your array: ";
    cin>>number_of_items;
    int items[number_of_items];

    //initializing the array from user input
    initialize(items, number_of_items);

    //performing addition of all the elemets of the array
   int sum = sum_the_array(items, number_of_items);

    //printing the final result
   cout<<"The total sum elements of the array is: " << sum;

   system("pause>0");
    return 0;
}
