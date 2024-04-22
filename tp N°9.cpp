#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	string a,cartel="desaprobo";
	float n1,n2,n3,p;
	
	cout<<"ingese el nombre del alumno"<<endl;
	getline(cin,a);

	cout<<"ingrese los numeros "<<endl;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	p=(n1+n2+n3)/3;
	cout<<"hola "<<a<<", el promedio de es:  "<<p<<endl;
	if(p==7)
	{
	cartel="aprobo";
	}
	if(
	p>=8)
	{
	cartel="exelente";
	}
	if(p<=6)
	{
	cartel="desaprobo";
	}
	cout<<cartel<<endl;
	return 0;	
}