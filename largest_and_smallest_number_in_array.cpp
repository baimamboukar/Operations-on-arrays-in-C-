/*

A C++ PROGRAM THAT FINDS THE SMALLEST AND LARGEST NUMBER IN AN ARRAY
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

//this function sort the array using bubble sort
void sort_array(int items[], int number_of_items){
    cout<<endl<<"Sorting the array...."<<endl;
      for(int i = 0; i < number_of_items; i++){
   	for(int j = 1; j< number_of_items-i; j++){
   		if(items[j-1] > items[j]){
   		int tmp = items[j-1];
   		items[j-1] = items[j];
   		items[j] = tmp;
   	}
   	}

   }
}
int main(){
    system("color FA");
     int number_of_items;

    cout<<"Enter the number of elements of your array: ";
    cin>>number_of_items;
    int items[number_of_items];

     //initializing the array from user input
    initialize(items, number_of_items);

    //sorting the array in ascending order
   sort_array(items, number_of_items);

    //printing the final results(smallest and largest numbers)
   cout<<"The smallest element of the array is " << items[0]<<endl;
   cout<<"The largest element of the array is " << items[number_of_items - 1];

    system("pause>0");
    return 0;
}
