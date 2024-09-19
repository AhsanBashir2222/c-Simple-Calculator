#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int choice;
	do{
	
	cout<<"------------------------------------------"<<endl;
	cout<<"             CALCULATOR                   "<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<"1. Addition      \t\t "<<"8. Sin"<<endl;
	cout<<"2. Substraction  \t\t "<<"9. Cos"<<endl;
	cout<<"3. Multiplication\t\t "<<"10. Tan"<<endl;
	cout<<"4. Division      \t\t "<<"11. Inverse of sin "<<endl;
	cout<<"5. Exponent      \t\t "<<"12. Inverse of cos "<<endl;
	cout<<"6. Square        \t\t "<<"13. Inverse of tan "<<endl;
	cout<<"7. Log           \t\t " <<"14. Exist          "<<endl;
	float x,y;
	float pi=3.14;
	cout<<"Enter the choice :";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter the number 1 :";
			cin>>x;
			cout<<"enter the number 2 :";
			cin>>y;
			cout<<"Result :"<<x+y<<endl;
			break;
		case 2:
			cout<<"Enter the number 1 :";
			cin>>x;
			cout<<"enter the number 2 :";
			cin>>y;
			cout<<"Result :"<<x-y<<endl;
			break;
		case 3:
			cout<<"Enter the number 1 :";
			cin>>x;
			cout<<"enter the number 2 :";
			cin>>y;
			cout<<"Result :"<<x*y<<endl;
			break;
		case 4:
			cout<<"Enter the number 1 :";
			cin>>x;
			cout<<"enter the number 2 :";
			cin>>y;
			cout<<"Result :"<<x/y<<endl;
			break;
		case 5:
			cout<<"Enter the number  :";
			cin>>x;
			cout<<"enter the Exponent :";
			cin>>y;
			cout<<"Result :"<<pow(x,y)<<endl;
			break;
		case 6:
			cout<<"Enter the number  :";
			cin>>x;
			cout<<"Square :"<<sqrt(x)<<endl;
			break;
		case 7:
			cout<<"Enter the number  :";
			cin>>x;
			cout<<"Result :"<<log(x)<<endl;
			break;
		case 8:
			cout<<"Enter the number  :";
			cin>>x;
			cout<<"Result :"<<sin(x)<<endl;
			break;
		case 9:
			cout<<"Enter the number  :";
			cin>>x;
			cout<<"Result :"<<cos(x)<<endl;
			break;
		case 10:
			cout<<"Enter the number  :";
			cin>>x;
			cout<<"Result :"<<tan(x)<<endl;
			break;
		case 11:
			cout<<"Enter the number  :";
			cin>>x;
			cout<<"Result :"<<asin(x)*180.0/pi<<endl;
			break;
		case 12:
			cout<<"Enter the number  :";
			cin>>x;
			cout<<"Result :"<<acos(x)*180.0/pi<<endl;
			break;
		case 13:
			cout<<"Enter the number  :";
			cin>>x;
			cout<<"Result :"<<atan(x)*180.0/pi<<endl;
			break;
		case 14:
			cout<<"Existing..........."<<endl;
			break;
			default: 
			cout<<"Wrong input :"<<endl;
			break;
		}
		}while(choice!=14);
	
}
		


