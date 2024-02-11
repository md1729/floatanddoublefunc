/*
The float and double data types are used to represent decimal numbers (floating point numbers).
The double (64Bit) data type is used to store larger numbers than the float (32Bit) data type.
*/
#include<iostream>
#include<iomanip>
using namespace std;
main(){
	/*float result;
	double result;
	result=1.0/5;
	result=1.0/2.35;
	result=1.0/2;
	cout<<setprecision(3)<<result;
	cout<<fixed<<setprecision(10)<<result;
	*/
	//float number,total;
	double number,total;
	number=1.0/81;
	//cout<<setprecision(10)<<number;
	for(int i=0; i<729; i++)
	total=total+number;
	cout<<setprecision(10)<<total;
}
