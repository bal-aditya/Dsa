#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num1;
    string op;
    int num2;
    string result;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a operator: ";
    cin >> op;
    cout << "Enter another number: ";
    cin >> num2;

    if (op == "+"){  //if user types '+' the result is num1 + num2
        result = num1 + num2;
        //cout << result;
    }else if (op == "-"){ //if user types '-' the result is num1 - num2
        result = num1 - num2;
       // cout << result;
    }else if (op == "*"){ //if user types '*' the result is num1 * num2
        result = num1 * num2;
        //cout << result;
    }else if (op == "/"){ //if user types '/' the result is num1 / num2
        result = num1 / num2;
        //cout << result;
    }else{
        cout << "Invalid operator...";
    }
    cout << result;



    return 0;
}
/*int main(){
    string s="abcde";
    for(int i=0;i<5;i++){
    s[i]=6;}
    cout<<s;

}*/