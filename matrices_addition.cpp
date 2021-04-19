/*

A C++ PROGRAM THAT ADDITION TWO MATRICES OF ANY ORDER
Author: BAIMAM BOUKAR JEAN JACQUES
Email: baimam.jeanjaque@ictuniversity.edu.cm
Phone: (+237) 690535759 / 679782255


*/

#include<iostream>
using namespace std;

int main(){
    int n_rows, n_colums;
    system("color 0A");

    //getting the number of rows and number of columns of the matrice form the user
    std::cout << "Please enter the number of rows of your matrice: " << std::endl;
    cin>>n_rows;
    std::cout << "Please enter the number of columns of your matrice: " << std::endl;
    cin>>n_colums;


    //declaring the matrices with respect to the dimension entered by the user
    int first_matrice[n_rows][n_colums];
    int second_matrice[n_rows][n_colums];
    int result[n_rows][n_colums];


    //initializing the first matrice from user input
    std::cout <<endl<< "Please intialize the first matrice" << std::endl;
    for(int i = 0; i < n_rows; ++i){
         for(int j = 0; j < n_colums; ++j)
        {
             std::cout << "Enter the value at index [" <<i<<"][" <<j<<"] :";
            cin >> first_matrice[i][j];
        }
    }
     //initializing the second matrice from user input
    std::cout <<endl<< "Please intialize the second matrice" << std::endl;
    for(int i = 0; i < n_rows; ++i){
         for(int j = 0; j < n_colums; ++j)
        {
             std::cout << "Enter the value at index [" <<i<<"][" <<j<<"] :";
            cin >> second_matrice[i][j];
        }
    }

    //performing the addition of the two matrices
    for(int i = 0; i < n_rows; ++i){
         for(int j = 0; j < n_colums; ++j)
        {
            result[i][j] = first_matrice[i][j] + second_matrice[i][j];
        }
    }


    //printing the result
    cout << endl << "The result of addition of your matrices is: " << endl;

    for (int i = 0; i < n_rows; i++) {
        for (int j = 0; j < n_colums; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
