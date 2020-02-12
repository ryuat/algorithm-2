#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    int T;
    cin >> T;

    while(T--){
        stack<char> s;
        string str;
        
        cin >> str;
        int i;
        
        for (i=0;i<str.length();i++){
            if(str[i] == '('){
                s.push(str[i]);
            }else if(str[i]==')'){
                if(s.empty()){
                    break;
                }else{
                    s.pop();
                }
            }
        }
        
        if(i==str.length() && s.empty()){ // 모두 순회 && 스택 빈 경우 => 여는괄호X && 닫는괄호X
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n"; // 모두 순회하지 못해함 OR 스택 비어있지 않음 => 여는괄호O && 닫는괄호O
        }
    }
    return 0;
}
