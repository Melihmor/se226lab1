#include <iostream>
using namespace std;

int main() 
{
    cout << "What is your name?"<<endl;
    string name;
    cin>> name;
    cout<< "Hello"<< name <<endl;
    cout<<"What is your Student ID?"<<endl;
    int number;
    cin>>number;
    cout<<number<<endl;
    cout<<"Your ID is: "<< number<<endl;
    
    
    
    
    cout<<"Please give me two numbers"<<endl;
    int var1,var2,sum,diff,prod;
    cin>>var1>>var2;
    sum=var2+var1;
    diff=var2-var1;
    prod=var2*var1;
    
    cout<<sum<<endl<<diff<<endl<<prod<<endl;
    
    
    cout<<"Please let me know your name"<<endl;
    string name;
    cin>>name
    int lab,midt,final,lastscore;
    cout<<"Please enter your lab grade"<<endl;
    cin>>lab;
    cout<<"Please enter your midterm grade"<<endl;
    cin>>midt;
    cout<<"Please enter your final grade"<<endl;
    cin>>final;
    cout<<"Name: "<< name<<endl;
    cout<<"Lab: "<< lab<<endl;
    cout<<"Midterm: "<< midterm<<endl;
    cout<<"Final: "<< final<<endl;
    lastscore=(lab/4)+ (midterm*7/20) + (final*2/10);
    cout<<"Last score: "<<lastscore<<endl;
    
    
    
    cout << "*\n**\n***\n**\n*\n";
    
    
          
    
    
    return 0;
}
