#include <iostream>
#include <cstdlib>
#include <unordered_map>

using namespace std;






  void welcome(){

    cout << "         _________________________________________________" << endl;
    cout << "        |                                                 |" << endl;
    cout << "        |            WELCOME TO YOTOR HACKING             |" << endl;
    cout << "        |               WHAT DO YOU WANT                  |" << endl;
    cout << "        |_________________________________________________|" << endl;

    cout << " " << endl;
  }



  void choice(){
    cout << "[1]. hackFrontCam" <<endl;
    cout << "[2]. hack TG" <<endl;
    cout << "[3]. hack IG" <<endl;
    cout << "[4]. test.py" <<endl;
    cout << " [5]. random"<<endl;
    cout << " "<<endl;
    cout << " "<<endl;
    cout << " Enter your choice: ";

    int choice;
    cin >> choice;

    if (choice == 1){
        cout << "HACKED YOTOR" <<endl;
    } else if (choice == 2){
        cout << "TG HACKED" <<endl;
    }else if (choice == 3){
        system("clear");
        system("python2 py.py");
        
    }else if (choice == 4){
        system("python3 ip_scanner.py");
    }else if (choice == 5){
        system("clear");
        system("python3 yotor.py");
    }   else{
        cout << "invalid choice" <<endl;
    }
   
}
void lastFun(){
    cout << "Enter [1] Back To Menu Else any Key to Exit: ";
    int enter;
    cin >> enter;

    if (enter == 1){
         system("clear");
        system("clang++ -o yotor login.cpp");
        system("./yotor");
    } else {
        system("exit");
    }

}

int main(){
    
    welcome();
    choice();
    lastFun();

    return 0;
}

