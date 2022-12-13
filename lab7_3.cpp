#include<iostream>

using namespace std;
int  adiff(int a1,int a2){
    int re;
    a1= a1%360;
    a2= a2%360;
    if(a1>a2){
        re = a1-a2;
    } else{
        re = a2-a1;
    }
    if(re>180){
        return 360-re;
    } else{
        return re;
    }
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
