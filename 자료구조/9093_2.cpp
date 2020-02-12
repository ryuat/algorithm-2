#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    
    
    cin >> T; // "\n"을 버퍼에 남겨둔다.
    cin.ignore(); // getline을 사용하기 전 버퍼를 비워줘야 한다.
    
    stack<char> s;
    
    while(T--){
        
        string str;
        getline(cin, str);
        str += "\n"; // 문자열 마지막 문자 표시 목적
        
        for(char ch : str){
            if(ch == ' '|| ch == '\n'){
                while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
                cout << ch;
            }
            else {
                s.push(ch);
            }
            
        }
        
    }
    
    return 0;
}
