#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    string moviename;
    string freetime;
    string something;
    string studentID;
    int GEAR;

    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"?????: ";
    getline(cin,name);

    cout<<"Fahsai: Wow!!! "<<name<<" is a really cool name.\n";

    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout<<name<<": ";
    getline(cin,studentID);
    
    GEAR = stoi(studentID.substr(0,2))-12;
    cout<<"Fahsai: I think you may be GEAR "<<GEAR<<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n";
    cout<<"Fahsai: What movie do you want to watch?\n";
    cout<<name<<": ";
    getline(cin, moviename);
    
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<name<<": ";
    getline(cin, freetime);
    
    cout<<"Fahsai: "<<freetime<<"....that is OK!!! I'm looking forward to watching "<<moviename<<" with you.\n";
    cout<<name<<": ";
    getline(cin, something);
    
    cout<<"Fahsai: 555+ see you "<<freetime<<". Bye Bye \\(^ ^)/";
    
    return 0;
}