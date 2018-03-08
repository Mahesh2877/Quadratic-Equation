#include<iostream>
class Quadratic
  {
    int a,b,c;
    public: x1,x2;
            void input()
      {
        cin>>x>>y>>z;
        a=x;
        b=y;
        c=z;
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
  Quadratic obj;
  Cout<<"Enter the values of a, b and c"<<endl;
	obj.input();
	obj.calculate();
	obj.print();
	return 0;
}
