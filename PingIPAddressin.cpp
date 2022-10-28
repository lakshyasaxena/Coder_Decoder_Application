#include <iostream>
using namespace std;
int main() {
int x = system("ping -c1 -s1 8.8.8.8  > /dev/null 2>&1");
if (x==0){
    cout<<"success";
}else{
    cout<<"failed";
}
