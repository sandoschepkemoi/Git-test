
#include <iostream>
#include <string> 
using std::cout;
using std::endl;


using namespace std;
class student{
public:
    string school;
    string name;
    string regNumber;
    string course;
    int yearOfStudy;
    string religion;

    void getDetails(){   /*return type(void) to be called by the main function for the details to be displayed at the console*/
        cout<<"School :"<<school<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"RegNumber : "<<regNumber<<endl;
        cout<<"Course :"<<course<<endl;
        cout<<"YearOfStudy : "<<yearOfStudy<<endl;
        cout<<"Religion : "<<religion<< endl;}
        

};
int main(){
    student student1;
    student1.school ="JKUAT";
    student1.name ="Jane";
    student1.regNumber ="ENM221-0233/2024";
    student1.course ="Bsc mechatronic engineering";
    student1.yearOfStudy =3;
    student1.religion =" christian";
    student1.getDetails();
    
    student student2;
    student2.school ="JKUAT";
    student2.name ="Joan";
    student2.regNumber ="ENM221-0234/2024";
    student2.course ="Bsc marine engineering";
    student2.yearOfStudy =2;
    student2.religion =" christian";
    student2.getDetails();
    




}
