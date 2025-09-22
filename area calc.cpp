/*write a program to prompt user to enter the radius of a circle and also to show its radius*/
# include <iostream>

using namespace std;

int main(){
    float radius, area;
    cout<<"Enter the radius of a circle";
    cin>>radius;
    area = 3.142 *radius*radius;
    cout<< area;
    return 0;
}
