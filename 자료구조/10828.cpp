#include <iostream>
#include <string.h>

using namespace std;


struct Stack{
    int size; // next idx 이자 current size , current value = arr[size-1]
    int arr[10000];
    
    Stack(){
        size = 0;
    }
    
    void push(int num){
        arr[size] = num;
        size++;
    };
    
    bool empty(void){
        if(size == 0){
            return true;
        }
        else
            return false;
    };
    
    int pop(void){
        if(empty() == true)
            return -1;
        else{
            size--;
            return arr[size];
        }
    }
    
    int top(void){
        if(empty() == true)
            return -1;
        else
            return arr[size-1];
    }
    
};

int main(void) {
    Stack s;
    int T;
    
    scanf("%d", &T);
    
    while(T--){
        
        char cmd[6];
        
        int num;
        
        scanf("%s", cmd);
    
        if(strcmp(cmd, "push")==0){
            scanf("%d", &num);
            s.push(num);
            //printf("push %d", num);
        }
        else if(strcmp(cmd, "top")==0){
            printf("%d\n", s.top());
            //printf("top: %d", s.top());
        }
        else if(strcmp(cmd, "size")==0){
            printf("%d\n", s.size);
//            printf("size: %d", s.size);
        }
        else if(strcmp(cmd, "pop")==0){
            printf("%d\n", s.pop());
//            printf("pop: %d" , s.pop());
        }
        else if(strcmp(cmd, "empty")==0){
            printf("%d\n", s.empty());
//            printf("emptyp");
        }
        
    }
    
    
    return 0;
}
