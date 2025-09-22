/*write a program to prompt user to enter the temperature in farenheight and convert it to celcius*/
# include <iostream>

using namespace std;

int main(){
    double farenheight, celcius;
    cout<<"Enter temperature in farenheight";
    cin>>farenheight;
    celcius = (farenheight - 32) *5/9;
    cout<< celcius;
    return 0;
}
