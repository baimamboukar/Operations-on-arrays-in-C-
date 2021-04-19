/*

A C++ PROGRAM THAT ACCESS TO A PARTICULAR INDEX OF A 2D ARRAY
Author: BAIMAM BOUKAR JEAN JACQUES
Email: baimam.jeanjaque@ictuniversity.edu.cm
Phone: (+237) 690535759 / 679782255


*/

#include<iostream>
using namespace std;

int main(){
   int first_dimension;
   int second_dimension;
   int i,j;

   //Asking the user the dimensions that he wants
   cout<<"What is the dimension of the main array: ?";
   cin>>first_dimension;
   cout<<"What is the dimension of the nested array: ?";
   cin>>second_dimension;

   //declaring the 2D array according to dimensions got from the user
   int items_2D[first_dimension][second_dimension];


   //Initializing the 2D array from the user input
  cout<<endl<<"INITIALIZING THE 2D ARRAY..."<<endl<<endl;
     for(int i = 0; i < first_dimension; i++){
        for(int j = 0; j < second_dimension; j++){
          cout<<"[INPUT]: Enter the value of index [" <<i<< "][" <<j<<"]: ";
          cin>>items_2D[i][j];
        }
    }


   //Asking the user to the index that he wnats to access
   cout<<"What index of the two dimensionnal array do you want to access ?"<<endl;
   cout<<"Enter the index of the main array: "; cin>>i;
   cout<<"Enter the index of the nested array: "; cin>>j;

   //printing the value at index entered by the user
   cout<<"The value at index [" <<i<<"]["<<j<<"] is: " <<items_2D[i][j];


    system("pause>0");
    return 0;
}
