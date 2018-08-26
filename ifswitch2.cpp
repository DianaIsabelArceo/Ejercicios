#include <iostream>
using namespace std;

 int main()
 {
	 int num, d1, d2, d3, d4, d5;
	 cout<<"Ingresa un numero con 5 digitos: "<<endl;
	 cin>>num;

	 if ((num >= 10000)&&(num <= 99999))
        {
			 d1 = num / 10000;
			 d2 = (num % 10000) / 1000;
			 d3 = (num % 10000) % 1000 / 100;
			 d4 = ((num % 10000) % 1000) % 100 / 10;
			 d5 = (((num % 10000) % 1000) % 100) % 10;

			 cout<<d1<<"   "<<d2<<"   "<<d3<<"   "<<d4<<"   "<<d5<<endl;
        }

	 return 0;
    }
