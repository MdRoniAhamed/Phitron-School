#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if(str == "samsung"){
        cout << "SRBD" << endl;
    }
    else{
        cout << "GHOST" << endl;
    }
    return 0;
}
