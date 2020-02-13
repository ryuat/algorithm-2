#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
    int T;
    string str;
    stack<char> leftStk;
    stack<char> rightStk;
    
    cin >> str;
    cin >> T;
    
    for (auto c : str){
        leftStk.push(c);
    }
    
    while(T--){
        char cmd;
        cin >> cmd;
        
        if(cmd == 'P'){
            char ch;
            cin >> ch;
            leftStk.push(ch);
        }
        else if(cmd=='L'){
            if(!leftStk.empty()){ // 비어있지 않은 경우에만
                rightStk.push(leftStk.top());
                leftStk.pop();
            }
        }
        else if(cmd=='B'){
            if(!leftStk.empty()){ // 비어있지 않은 경우에만
                leftStk.pop();
            }
        }
        else if(cmd=='D'){
            if(!rightStk.empty()){
                leftStk.push(rightStk.top());
                rightStk.pop();
            }
        }
    }
    
    while(!leftStk.empty()){
        rightStk.push(leftStk.top());
        leftStk.pop();
    }
    
    while(!rightStk.empty()){
        cout << rightStk.top();
        rightStk.pop();
    }
    return 0;
}
