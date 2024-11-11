// WAP to display the how many currency be need individual to make.......? ; ladder

#include <iostream>                  
using namespace std;
int main()
{
  int amount;
  cout<<"Enter Your Amount :"<<"\n";
  cin>> amount;
  
  int rs1, rs2, rs5, rs10, rs20, rs50, rs100, rs200, rs500;
  int m1, m2, m3, m4, m5, m6, m7, m8, m9;
  m1 = amount%500;
  m2 = m1%200;
  m3 = m2%100;
  m4 = m3%50;
  m5 = m4%20;
  m6 = m5%10;
  m7 = m6%5;
  m8 = m7%2;
 if(amount>=500){
  rs500 = amount/500;
  cout<<"500 Rs="<<rs500<<"\n";
 } 
 if(m1<=499){
  rs200 = m1/200;
  cout<<"200 Rs="<<rs200<<"\n";
 }
 if(m2<=199){
  rs100 =m2/100;
  cout<<"100 Rs="<<rs100<<"\n";
 }
 if(m3<=99){
  rs50 =m3/50;
  cout<<"50 Rs="<<rs50<<"\n";
 }
 if(m4<=49){
  rs20 =m4/20;
  cout<<"20 Rs="<<rs20<<"\n";
 }
 if(m5<=19){
  rs10 =m5/10;
  cout<<"10 Rs="<<rs10<<"\n";
 }
 if(m6<=9){
  rs5 =m6/5;
  cout<<"5 Rs="<<rs5<<"\n";
 }
 if(m7<=4){
  rs2 =m7/2;
  cout<<"2 Rs="<<rs2<<"\n";
 }
 if(m8<=1){
  cout<<"1 Rs="<<m8;
 }
 else{
  cout<<"0000";
 }
 return 8;
}
    