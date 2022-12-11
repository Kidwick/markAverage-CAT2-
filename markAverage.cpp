#include<iostream>
using namespace std;

void markAverage()
{
    //Declaration
    float marks,Average;

    //Program and User input
    for (int i=marks; i<7; ++i)
    {
        cout<<"Enter marks:"<<endl;
        cin>>marks;

        Average=(marks++)/2;
    }
    cout<<"Your Average is:"<<Average<<endl;
    
}
int main()
{
    cout<<"markAverage"<<endl;
    markAverage();

    return 0;
}





