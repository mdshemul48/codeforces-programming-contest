#include<iostream> 

using namespace std;

int getBit(int n, int position){
    return ((n&(1<<position))!=0);
}


int setBit(int n, int position){
    return n | (1<<position);
}

int clearBit(int n, int position){
    return n & ~(1<<position);
}

int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return n | (value<<pos);
}

int main(){

    cout<<getBit(5, 2)<<endl; // 1
    cout<<setBit(5, 1)<<endl; // 7
    cout<<clearBit(5,2)<<endl; // 1
    cout<<updateBit(5, 1,1)<<endl; // 7

    return 0;
}