#include<iostream>
#include<string>
using namespace std;

string reve(string s,int front ,int back)
{
    //int front=0;
    //int back = s.length() - 1;
    while(front<back)
    {
        swap(s[front++],s[back--]);
    }
    //string ne=s;
    return s;
}


void rever(char ar[],int size)
{
    int front=0;
    int back = size - 1;
    while(front<back)
    {
        swap(ar[front++],ar[back--]);
    }
    
}

/*int val(int x)
{
    return 0;
}*/



int main ()
{
    char as[]="hello";
    //int num = ' ' *10; //ascii of blank space is 32.
    //cout<<num<<endl;//hence 320 will be printed.
    //cout<<reve(as,0,as.length()-1)<<"\n";
   // cout<<reve(as)<<"\n";  
   // cout<<(as)<<endl;
   int w=10;
   //cout<<val(w);
    //rever(as,5);
}