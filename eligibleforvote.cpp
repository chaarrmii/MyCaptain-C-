/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter your age.";
    cin>>age;
    if(age>=18)
    {
        cout<<"You are eligible to vote.";
    }
    else
    {
        cout<<"You can vote after "<<18-age<<" years.";
    }
}
