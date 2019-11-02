#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[]="hi, i am coding in c++!";
    char *ptr;
    ptr=strtok(a,", !");
    while(ptr !=NULL){
        cout << ptr << endl;
        ptr = strtok(NULL,", !");
    }
    return 0;
}
