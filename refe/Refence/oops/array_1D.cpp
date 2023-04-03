#include<iostream>
using namespace std;
void func(int[]);
int main()
{
    // Array. 
    
    //  array decleration.
     int a[4];     // 1D. 
    // array initilization  - Compile time  initilization.
    int a1[10]={10,20,30};  // 1D
    int a2[]={40,50,60};
    
    // print array elements
    cout<<"print array elements:";
    cout<<"a1[2]"<<a1[2]<<endl;
    
    // get array elements 
    cout<<"enter an integer:";
    cin>>a1[3];
    cout<<"Entered an integer value is:"<<a1[3]<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"a["<<i<<"]"<<a1[i];     // display the array. 
        cout<<endl;
    }
    
    cout<<"Enter the array elements:";
    for(int j=0;j<4;j++)        // Run time initilization.  // Get value from the user. 
    { 
        cin>>a[j];
    }
    
    // passing array to the function.
    func(a);
    
    
    // Array pointer. 
    
    int a3[5]={50,100,150};  // array initilization.
    int *p;            // Pointer initilization.
    p=a3;             // assigning array addres to pointer variable. 
    cout<<"Array Pointer:";
    for(int k=0;k<5;k++)
    {
        cout<<"a3["<<k<<"]"<<a3[k];     // display the array. 
        cout<<endl;
    }
    
}

void func(int a[])
{
    cout<<"passing array to the function"<<endl;
    for(int i=0;i<10;i++)
    { 
        cout<<"a["<<i<<"]"<<a[i];     // display the array 
        cout<<endl;
    }
}