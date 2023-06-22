//*****************STACK & HEAP****************
//******HEAP*****
/*#include<iostream>
using namespace std;

int main(){
int a = 10;
int*p = new int();
*p = 10;
delete(p);
p=new int[4];
delete[]p;

p=NULL;
return 0;
}*/

//*****STACK*****
/*#include<iostream>
using namespace std;
int add(int num1, int num2){
    return num1 + num2;
}
int main(){
int a=2;
int b=3; 

int sum = add(a,b);
cout<<sum<<endl;
return 0;
}
*/
//*****STACK2*****

#include<iostream>
using namespace std;

void func1(){ }
void func2(){ }
void func3(){ }
void func4(){ }
int main(){

func1();
func2();
func3();
func4();
return 0;
}
