#include<bits/stdc++.h>
using namespace std;

class MyString{
private:
    int size;
    char *str;
public:
    MyString(){
        str=(char*)malloc(sizeof(char)*100);
        size=100;
    }
    MyString(int size_s){
        size=size_s;
        str=(char*)malloc(sizeof(char)*size);
    }
    bool set(char *st){
        int l=0;
        for(int i=0;st[i]!='\0';i++){
            l++;
        }if(l<=size){
            str=st;
            return true;
        }
        else
            return false;

    }
    void print(){
        char* s;
        s = str;
        cout << s;
  }
};
