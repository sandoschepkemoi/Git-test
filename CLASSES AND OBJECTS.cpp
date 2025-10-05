#include<iostream>

using std:: cout;
using std:: endl;
using namespace std;
class girl{
    public:
    
    string name;
    string occupation;
    string age;

// display actions performed by humans
void sleep(){
    cout <<"The girl is sleeping"<< endl;
}
void drink(){
    cout <<"The girl is driking "<<endl;
}
void eat(){
    cout<< "The girl is eating"<<endl;
}
};

int main(){
    girl girl1;
    girl1.name = "Janiece";
    girl1.occupation = "Engineer";
    girl1.age = 27;

    //lets print out the artributes of the girl
    cout<<girl1.name<<endl;
    cout<<girl1.occupation<<endl;
    cout<<girl1.age<<endl;

    //lets invoke the actions of the girl
    girl1.sleep();
    girl1.drink();
    girl1.eat();

    return 0;
}

