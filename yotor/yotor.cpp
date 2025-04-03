#include <iostream>
#include <cstdlib>
#include <unordered_map>

using namespace std;






void yotorDisplay(){
    cout << " " << endl;
    cout << " " << endl;

    cout << "🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹   " << endl;

    cout << "   " << endl;
    cout << "     Y   Y  OOOOO  TTTTT  OOOOO    RRRRR  " << endl;
    cout << "       Y   O     O   T   O     O   R    R  " << endl;
    cout << "       Y   O     O   T   O     O   RRRRR  " << endl;
    cout << "       Y   O     O   T   O     O   R  R   " << endl;
    cout << "       Y    OOOOO    T    OOOOO    R   R " << endl;

    cout << "     " << endl;
    cout << "🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹🇪🇹   " << endl;
    cout << " " << endl;
    cout << " " << endl;
}




void cheekUserPass(){

    string DawitUser = "DAWIT";
    string YotorUser = "YOTOR";
    string GirmaUser = "GIRMA";
    
    int DawitPass = 1234;
    int YotorPass = 2533;
    int GirmaPass = 1235;

    string username;
    cout << "Enter username: ";
    getline(cin, username);
    int password;
    cout << "Enter password: ";
    cin >> password;

    if (username == YotorUser && password == YotorPass){
        
        system("clear");
        system("clang++ -o yotor login.cpp");
        system("./yotor");
    } else if(username == DawitUser && password == DawitPass){
        cout << "Dawit is on it " << endl;
    } else if (username == GirmaUser && password == GirmaPass){
        cout << "hello" << GirmaUser<<endl;
    }
    else {
        cout << "INVALID USERNAME OR PASSWORD"<<endl;
    }
}


int main(){
    yotorDisplay();
    cheekUserPass();
    return 0;
}