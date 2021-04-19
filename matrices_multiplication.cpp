/*

A C++ PROGRAM THAT MULTIPLIES TWO 3 BY 3 MATRICES
Author: BAIMAM BOUKAR JEAN JACQUES
Email: baimam.jeanjaque@ictuniversity.edu.cm
Phone: (+237) 690535759 / 679782255

*/
#include<iostream>
#include <algorithm>
using namespace std;


//initializing matrix

void init_3by3_matrice(int matrix[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Enter the value at index [" <<i<<"][" <<j<<"] :";
            cin>>matrix[i][j];
        }

    }
}

int main(){
system("color 0A"); //changing the console cole to black(background) and green(text)

//declaring and initializing matrices
int first_matrice[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
int second_matrice[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
int method;

//asking to the user if he wants to init the matrices by himself
cout<<"How do you want to initialize the matrices by youself? ";
std::cout <<endl<< "1.Initialize by yourself" << std::endl;
std::cout << "2.Use pre-defined matrices" << std::endl;
std::cout << "Press 1 to initialize matrices or 2 to use de default matrices: ";
cin>>method;

//initializing the matrices
if(method == 1){
    cout<<endl<<"You will be require to initialize the first matrice"<<endl;
    init_3by3_matrice(first_matrice);
    cout<<endl<<"You will be require to initialize the first matrice"<<endl;
    init_3by3_matrice(second_matrice);
}
int results[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};


//performing the multiplication of the two matrices
for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) {
        for (int u = 0; u < 3; u++)
            results[i][j] += first_matrice[i][u] * second_matrice[u][j];
    }


//printing the result
cout << endl << "The result of multiplication of your matrices is: " << endl;

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << results[i][j] << "  ";
    }
    cout << endl;
}
    system("pause>0");
	return 0;
}
