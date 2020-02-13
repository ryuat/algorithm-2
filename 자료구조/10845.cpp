#include <iostream>
#include <string>

using namespace std;

struct queue{
    int begin, end;
    int arr[100000];
    
    queue(){
        begin = 0;
        end = 0;
    }
    
    bool empty(){
        if(begin == end){
            return true;
        }else{
            return false;
        }
    }
    void push(int num){
        arr[end] = num;
        end++;
    }
    int pop(){
        if(empty())
            return -1;
        else {
            begin++;
            return arr[begin-1];
        }
    }
    int size(){
        return end-begin;
    }
    int front(){
        if(empty())
            return -1;
        else
            return arr[begin];
    }
    int back(){
        if(empty())
            return -1;
        else
            return arr[end-1];
    }
};
int main(void){
    int T;
    cin >> T;
    
    queue q;
    
    string cmd;
    while(T--){
        
        cin >> cmd;
        if(cmd == "push"){
            int num;
            cin >> num;
            q.push(num);
        }
        else if (cmd =="front"){
            cout << q.front() << "\n";
        }
        else if (cmd == "back"){
            cout << q.back() << "\n";
        }
        else if (cmd == "size"){
            cout << q.size() << "\n";
        }
        else if (cmd == "pop"){
            cout << q.pop() << "\n";
        }
        else if (cmd == "empty") {
            cout << q.empty() << "\n";
        }
        
    }
    return 0;
}

