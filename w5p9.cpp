#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
 int main()
 {
 	char ch; 
 	double ans,num;
 	do{
 	
 		
 		cout<<"Enter the number to find the square root : ";
 		cin>>num;
 		ans=sqrt(num);
 		cout<<" The Sqaure Root of "<< num<< " is :" << ans;
 		cout<<endl<<endl<<"Do you want to find the Sqaure Root of another number";
 		cout<<endl<< "If yes Press \'y\' key.... " ; 
 		ch=getch();
 		cout<<endl<<endl<<endl<<endl;
 		
	 }
 	while(ch=='y');
 	return 0;	
 }
 
 
 
 
