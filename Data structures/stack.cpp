#include<iostream>

using namespace std;
class stack{
    private:
    int top;
    int a[10];
    public:
void push(int element,int top){
    if(top<10){
        
        int a[++top]=element;
    }
    else{
        cout<<"stack overflow";
    }
}
void pop(int top){
        if(top==-1)
        {
             cout<<"stack underflow";
            
        
        
    }
    else{
        cout<<a[top--];

    }
}
bool isempty(int top){
    if (top==-1){
        return true;
    }
    return false;

}
bool isfull(){
    if(top==9){
        return true;
    }
    return false;

}
void top(int top){
    cout<<a[top];

}
};

int main(){

    stack c;
    c.push(10);
}