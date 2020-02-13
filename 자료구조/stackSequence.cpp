#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    int T;
    int x, m; // x: 만들어야할 수, m: 스택에 마지막으로 들어간 수
    string ans; // 결과 문자열
    stack<int> s;
    
    cin >> T;
    m = 0;
    
    while(T--){

        
        cin >> x;
        
        if(x > m){ // 만들어야할 수가 스택에 마지막으로 들어간 수보다 큰 경우 그 차이만큼의 연속적인 수를 스택에 push 후 마지막 수 pop
            while(x-m){
                s.push(++m);
                ans += "+";
            }
            s.pop();
            ans += "-";
        }
        else { // 만들어야할 수가 스택에 마지막으로 들어간 수보다 작거나 같은 경우 스택 top에서 만들어야할 수를 찾는다.
            if(x == s.top()){ // 만들어야할 수가 스택의 top이 같으면 pop
                s.pop();
                ans += "-";
            }
            else{ // 만들어야할 수가 스택의 top과 같지 않다면 만들어야할 수를 만들 수 없다.
                cout << "NO";
                return 0;
            }
        }
    }
    
    for (auto x : ans){
        cout << x << "\n";
    }
    return 0;
}

