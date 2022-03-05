#include<iostream>
using namespace std;

int main() {
	double a1,a2,b1,b2,c1,c2 ;
	double xo,yo,a0,b0,c0 ;
	double det,detx,dety ;
	cout<<"\nUNIVERSIDAD MAYOR DE SAN ANDRES "<<endl;
	cout<<"FACULTAD DE INGENIERIA "<<endl;
	cout<<"LABORATORIO DE PROGRAMACION "<<endl;
	cout<<"EST. FLORES QUISPE NILO"<<endl;
	cout<<"\n INGRESE LA ECUACION DE LA FORMA:"<<endl;
	cout<<"a1*x+b1*y = c1"<<endl;
	cout<<"a2*x+b2*y = c2"<<endl;
	cout << "a1 = " ;
	cin >> a1;
	cout << "b1 = ";
	cin >> b1;
	cout << "c1 = " ;
	cin >> c1;
	cout << "a2 = ";
	cin >> a2;
	cout << "b2 = " ;
	cin >> b2;
	cout << "c2 = ";
	cin >> c2;
	a0 = (a1/a2);
	b0 = (b1/b2);
	c0 = (c1/c2);
	det = a1*b2-a2*b1;
	detx = c1*b2-c2*b1;
	dety = a1*c2-a2*c1;
	if (a0==b0 && a0==c0) {
		cout << "\nSISTEMA COMPATIBLE infinitas soluciones\n" ;
	}
	if (a0==b0 && a0!=c0) {
		cout << "SISTEMA INCOMPATIBLE no tiene solucion\n" ;
	}
	if (a0!=b0) {
		cout <<"\n\tSOLUCION : "<<endl;
		xo = detx/det;
		yo = dety/det;
		cout << "x = " << xo << endl;
		cout << "y = " << yo << endl;
	}
	return 0;
}

