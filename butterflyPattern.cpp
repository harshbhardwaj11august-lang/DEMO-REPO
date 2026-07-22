#include <iostream>
using namespace std ;
int main(){
int n;

cout << "ENTER THE SIZE : ";
cin >> n; 


//UPPER PART
for (int i =0 ;i<n; i++)
//FIRST QUARTER
{
    for (int j =0 ; j<=i ;j++)
    {
    cout <<"*";
    }
    //spaces 1
    for (int j=0;j<n-i-1;j++)
    {
        cout <<" ";
    }
    //SECOND SPACES
 for (int j=0;j<n-i-1;j++)
    {
        cout <<" ";
    }
    //SECOND QUARTER
    
    for (int j =0 ; j<=i ;j++)
    {
    cout <<"*";
    }

    cout << endl;

}
//LOWER PART
for (int i =n ;i>0; i--)
{
    for (int j=0; j<i ; j++)
    {
        cout<< "*";
    }

//SPACES 3
 for (int j=0;j<n-i;j++)
    {
        cout <<" ";
    }
    // //spaces 4
    for (int j=0;j<n-i;j++)
    {
        cout <<" ";
    }
    //stars 4
    for (int j=0; j<i ; j++)
    {
        cout<< "*";
    }

    cout << endl;
}


return 0;
}
