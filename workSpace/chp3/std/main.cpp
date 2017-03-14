#include <iostream>
using namespace std;
int my_Add(int num){
int sum = 0;
if(num > 0){
for(int i = 0; i <= num; i++){
sum += i;
}
}
else{
cout<<"error"<<endl;
sum = -1;
}
return sum;
}
int main(){
cout<<"enter a num :\n";
int a;
cin>>a;
int b = my_Add(a);
cout<<"cout ==  "<<b<<endl;
return 0;
}
