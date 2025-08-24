
#include <iostream>
using namespace std;

int main()
{
    int length,width,area,perimeter;
    cout<<"enter length :";
    cin>>length;
    cout<<endl<<"enter width :";
    cin>>width;
    
    area=length*width;
    perimeter=2*(length+width);
    cout<<"perimeter : "<<area;
    cout<<endl<<"area : "<<perimeter;
    

    return 0;
}
