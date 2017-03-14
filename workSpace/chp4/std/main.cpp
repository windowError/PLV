#include <iostream>
using namespace std;
int main(int argc,char**argv){
const int a = 10;
int *b = &a;
 *b = 30;
cout<<a<<endl;
return 0;
}
