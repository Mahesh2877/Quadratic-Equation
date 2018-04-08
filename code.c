#include<iostream>
class Quadratic
  {
    int a,b,c;
    public: x1,x2;
       void Quadratic()
      {
        cin>>a>>b>>c;
      }
       void calculate()
       	{
          x1 = (-b - sqrt((b.b) - (4.a.c)))/(2.a.c)
          x2 = (-b + sqrt((b.b) - (4.a.c)))/(2.a.c)
        }  
       void print()
	{
	   cout<<"The Solutions to the above Quadratic Equation are:"<<endl;
	   cout<<x1<<" and "<<x2<<endl;
	}
   }
int main()
{
  Cout<<"Enter the values of a, b and c"<<endl;
	Quadratic obj;
	obj.calculate();
	obj.print();
	return 0;
}
