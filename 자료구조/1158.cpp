#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(void){
    int N, K;
    
    cin >> N >> K;
    
    queue<int> q;
    
    for(int i=1;i<=N;i++){
        q.push(i);
    }
    
    int cnt = 1;
    cout << "<";
    while(!q.empty()){
        if(cnt%K == 0){ // K번째일 경우 삭제 후 출력
            if(q.size() == 1)
                cout << q.front();
            else
                cout << q.front() << ", ";
            q.pop();
        }
        else { // front를 뒤로 보낸다.
            q.push(q.front());
            q.pop();
        }
        cnt++;
    }
    cout << ">";
    return 0;
}

