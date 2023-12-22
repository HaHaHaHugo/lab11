#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    string e;
    int r;
    srand(time(0));
    r = rand()%9;
    if(r==0){
        e="A";
    }else if(r==1){
        e="B+";
    }else if(r==2){
        e="B";
    }else if(r==3){
        e="C+";
    }else if(r==4){
        e="C";
    }else if(r==5){
        e="D+";
    }else if(r==6){
        e="D";
    }else if(r==7){
        e="F";
    }else{
        e="W";
    }
    cout << "Press Enter 3 times to reveal your future.\n";
        cin.get();
        cin.get();
        cin.get();
        cout << "You will get " << e << " in this 261102.\n";
    return 0;
}