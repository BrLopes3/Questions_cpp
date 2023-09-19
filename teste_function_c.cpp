#include <iostream>
using namespace std;
int sum(int a, int b){
    int x = a+b;
    return x;
}
int main(){
    int result = sum(2,3);
    cout<<"the result of the sum is:"<<result<<endl;

    return 0;
}