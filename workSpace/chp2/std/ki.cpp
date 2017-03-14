#include <iostream>
using namespace std;
int main(){
int sum = 0;
for(int i = 0; i < 99999999; i = i +(1+i)*(2+i)){
sum += i;
}
cout<<"sum = "<<sum<<endl;
return 0;
}
