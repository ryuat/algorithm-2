#include <iostream>
#include <string.h>


using namespace std;

struct Stack{
    int size;
    char arr[1001];
    
    Stack(){
        size = 0;
    }
    void push(int num){
        arr[size] = num;
        size++;
    }
    bool empty(){
        if(size==0)
            return true;
        else
            return false;
    }
    char top(){
        if(empty()==true)
            return -1;
        else
            return arr[size-1];
    }
    char pop(){
        if(empty()==true)
            return -1;
        else {
            size--;
            return arr[size];
        }
    }
    
    
    
};

int main(void){
    int T;

    scanf("%d", &T);
    getchar(); // 입력버퍼에 남아있는 '\n'를 받아서 입력버퍼를 비워준다.
    
    while(T--){
        char str[1001];
        size_t size;
        Stack s;
        
//        printf("문자열 입력하세요. ");
        scanf("%[^\n]s", str); // 개행문자가 아닌 문자 모두를 받는다.
        getchar(); // 입력버퍼에 남아있는 '\n'를 받아서 입력버퍼를 비워준다.
        size = strlen(str);
        
        for(int i=0;i<=size;i++){ // 문자열 끝까지 순회
            if(str[i] == ' ' || str[i] == '\0') {
                while(!s.empty()){
                    printf("%c", s.pop());
                }
                printf(" ");
//                printf("공백1:%c ", str[i]);
            }
            else {
                s.push(str[i]);
//                printf("문자:%c ", str[i]);
            }
        }
        printf("\n");
        
    }

    return 0;
}

