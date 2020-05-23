#include <iostream>
using std::cout;

void recursive(int i, int count, int *address){
    count = count + 1;
    cout<<count<<": stack bottom : "<<address<<", current :"<<&i<<"\n";
    recursive(i, count, address);
}

int main(){
    int i = 0;
    int count = 0;
    int *address = &i;
    recursive(i, count, address);
    return 0;
}