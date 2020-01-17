#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name,movie,date,text;
    int gear,id;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " that is a really cool name."<< endl;
    cout << "Fahsai: I think you are Engineering student. What is your student ID?"<<endl;
    cout << name << " : ";
    cin >> id;
    cin.ignore();
    gear = (id/10000000)-12;
    cout << "Fahsai: I think you may be GEAR " << gear << ".  I have a free movie tickets for you." << endl; 
    cout << "Fahsai: Let's go to cinema together!!!" << endl; 
    cout << "Fahsai: What movie do you want to watch?" << endl;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    cout << name << ": ";
    getline(cin,date);
    cout << "Fahsai: "<< date << "....that is OK!!! I'm looking forward to watch " << movie << " with you." << endl;
    cout << name << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you " << date <<  " . Bye Bye \(^ ^)/";
    return 0; 
}
