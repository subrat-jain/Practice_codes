#include<iostream>
using namespace std;
#define max 100

// class Stack{
// public:
//     int top=-1;
//     int arr[max];
//     void push(int x){
//         if(top>=max-1){
//             cout<<"Stack Overflow\n";
//             return;
//         }
//         else{
//             top++;
//             arr[top]=x;
//         }
//     }

//     void pop(){
//         if(top<0){
//             cout<<"Stack Underflow\n";
//             return;
//         }
//         else{
//             arr[top--];
//         }
//     }
    
//     void peek(){
//         if(top<0){
//             cout<<"Stack Underflow\n";
//             return;
//         }
//         else
//             cout<<arr[top]<<endl;
//     }
//     bool is_empty(){
//         return top<0;
//     }
// };

class Stack{
public:
    int arr[max],top=-1;

    void push(int x){
        if(top>=max-1){
            cout<<"Stack is full";
            return;
        }
        else{
            top++;
            arr[top]=x;
        }
    }
    void pop(){
        if(top<0){
            cout<<"stack is empty";
            return;
        }
        else
            arr[top--];
    }
    void peek(){
        if(top<0){
            cout<<"stack is empty";
            return;
        }
        else
            cout<<arr[top];
    }
    bool is_empty(){
        return (top<0);
    }
};

int main(){
    class Stack st;
    st.push(10);
    st.push(20);
    st.push(40);
    // st.peek();
    // st.pop();
    // st.peek();
    while(!st.is_empty()){
        st.peek();
        st.pop();
    }
}