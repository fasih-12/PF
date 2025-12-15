#include <iostream>
using namespace std;
int main()
{
 double i1,i2,i3;char n1,n2,n3;
 cout<<"Enter Your Marks in First Subject(Out of 100):";
 cin>>i1;
 cout<<"Enter Your Marks in Second Subject(Out of 100):";
 cin>>i2;
 cout<<"Enter Your Marks in Third Subject(Out of 100):";
 cin>>i3;
 double total = i1+i2+i3;
 cout<<"Total Marks in All Subjects:"<<total<<endl;
 double percentage = (total/300)*100;
 cout<<"Percentage:"<<percentage<<"%"<<endl;
 double percent1 = (i1/100)*100;
 double percent2 = (i2/100)*100;
 double percent3 = (i3/100)*100;
 if(percent1>=90)
 {
   n1='A';
 }
 else if(percent1>=80&& percent1<90)
 {
 n1='B';
 }
 else if(percent1>=70&&percent1<80)
 {
   n1='C';
 }
 else if(percent1>=60&&percent1<70)
 {
  n1='D';
 }
 else
 {
 n1='F';
 }
 if(percent2>=90)
 {
 n2='A';
 }
 else if(percent2>=80&& percent2<90)
 {
   n2='B';
 }
 else if(percent2>=70&&percent2<80)
 {
   n2='C';
 }
 else if(percent2>=60&&percent2<70)
 {
 n2='D';
 }
 else
 {
 n2='F';
 }
 if(percent3>=90)
 {
   n3='A';
 }
 else if(percent3>=80&& percent3<90)
 {
 n3='B';
 }
 else if(percent3>=70&&percent3<80)
 {
 n3='C';
 }
 else if(percent3>=60&&percent3<70)
 {
   n3='D';
 }
 else
 {
   n3='F';
 }
if(percentage>=90)
{
 cout<<"Grade A"<<endl;
 }
 else if(percentage>=80&& percentage<90)
 {
 cout<<"Grade B"<<endl;
 }
 else if(percentage>=70&& percentage<80)
 {
   cout<<"Grade C"<<endl;
 }
 else if(percentage>=60&& percentage<70)
 {
   cout<<"Grade D"<<endl; 
 }
 else
 {
   cout<<"Grade F"<<endl; 
 }
 if(n1=='F'||n2=='F'||n3=='F')
 {
 cout<<"Status : Failed"<<endl;
 }
 else
 {
 cout<<"Status : Pass"<<endl;
 }
if(n1=='A'&&n2=='A'&&n3=='A'&&total>=270)
{
 cout<<"You are eligible for a Merit Scholarship."<<endl;
 }
else if(n1=='B'&&n2=='B'&&n3=='B'&&total>=240)
{
 cout<<"You are eligible for a Regular Scholarship."<<endl;
 }
else
{
    cout<<"You are Not Eligible for any Scholarship."<<endl;
}

return 0;
}
