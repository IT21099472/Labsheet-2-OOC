#include <iostream>
#include <iomanip>
using namespace std;

void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2);

int main() 
{
int i,marks1[5],marks2[5];
float CA_1[5],CA_2[5];

  /*for(i=0; i<5; i++){
    cout<<"Student"<<i+1<<endl;
    cout<<"please enter the CA_1 :";
    cin>>marks1[i];
    cout<<"Please enter the CA_2 :";
    cin>>marks2[i];
    cout<<endl;

  }*/
 
cout<<"1234567890123456789012345678901234567890"<<endl;
cout<<setw(10)<<"Student"<<setw(10)<<"Marks1"<<setw(10)<<"Marks2"<<setw(10)<<"CA_1"<<setw(10)<<"CA_2";

return 0;

}

void findMarks (int t_marks1, int t_marks2, float &t_CA1, float &t_CA2)
{
  t_CA1=(t_marks1/100)*20;
  t_CA2=(t_marks2/100)*30;
}