#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//capitulo 4
// 4.26
/*int main()
{

	int x;
	cout << "ingrese un numero de arteiscos" << endl;
	cin >> x;


	if (x == 1)
		cout << "*";
	else {

		for (int c = 0; c < x; c += 1) {
			cout << "*";
		}
		cout << endl;
		for (int z = 0; z < x - 2; z += 1) {
			cout << "*";
			for (int n = 0; n < x - 2; n += 1) {
				cout << " ";

			}
			cout << "*";
			cout << endl;
		}

		for (int d = 0; d < x; d += 1) {
			cout << "*";
		}
	}
	return 0;
}*/

//4.27
/*int main()
{
	int x;
	cout << " ingrese un numero de 5 numeros " << endl;
	cin >> x;

	int n1 = x / 10000;
	int n2 = (x % 10000) / 1000;
	int n3 = ((x % 10000) % 1000) / 100;
	int n4 = (((x % 10000) % 1000) % 100) / 10;
	int n5 = ((((x % 10000) % 1000) % 100) % 10) / 1;

	if (n1 == n5 && n2 == n4) {
		cout << "es palindrome" << endl;
	}
	else {
		cout << "no es palindrome" << endl;
	}


	return 0;



}*/


//4.28
/*int main()

{
	int x;
	int c;
	int v;
	int q;
	int c2=0;
	cout << "ingrese un numero:" << endl;
	cin >> x;
	for (c = 0; x != 0; c += 1) {
		v = x % 10;
		q = v * pow(2, c);
		c2 = c2 + q;
		x = x / 10;

	}
	cout << c2;
	return 0;

}*/


//4.30
/*int main()
{

	int x = 0;
	int y = 1;
	int c;
	cout << x << y  ;
	while (y!=0) {
		c = x + y;
		x = y;
		y = c;
		cout << c;
	}
	return 0;
}*/

//capitulo5

//5.11
/*int main()
{
	int num, mayor, menor;
	for (int i = 0; i < 5; i++) {
		cout << "ingresa un numero" << endl;
		cin >> num;
		if (i == 0) {
			mayor = num;
			menor = num;
		}
		else {
			if (num > mayor)mayor = num;
			if (num < menor)menor = num;
		}
	}

	cout << " el numero menor es " << menor;
}*/
//5.15
/*int main()


	//Parte a

	for (int i = 1; i <= 10; i++) {

		for (int j = 1; j <= 10; j++) {

			cout << (j <= i ? "*" : " ");
		}
		cout << endl;
	}
	return 0;
}*/


/*int main()
{
	//Parte b

	for (int i = 10; i >= 1; i--) {

		for (int j = 1; j <= 10; j++) {

			cout << (j <= i ? "*" : " ");
		}
		cout << endl;
	}
	return 0;
}*/


/*int main()
{
	//Parte c

	for (int i = 10; i >= 1; i--) {

		for (int j = 10; j >= 1; j--) {

			cout << (j <= i ? "*" : " ");
		}
		cout << endl;
	}
	return 0;
}

int main()

//Parte d
{
	for (int i = 1; i <= 10; i++) {

		for (int j = 10; j >= 1; j--) {

			cout << (j <= i ? "*" : " ");
		}
		cout << endl;
	}
	return 0;
}





//5.19
/*int main()
{

	float x = 4;
	float y = 1;
	float c1 = 0;
	int c2 = 1;
	while (c2 <= 200000) {

		if (c2 % 2 == 0)
			c1 -= x / y;
		else
			c1 += x / y;
		c2 += 1;
		y += 2;


	}

	cout << c1 << endl;



}*/

//5.29
/*int main()
{
	cout << fixed << setprecision(2);
	double principal{ 24.00 };
	double rate{ 0.10 };
	cout << "Initial principal: " << principal << endl;
	cout << " Interest rate: " << rate << endl;
	cout << "\nYear" << setw(20) << "Amount on deposit" << endl;
	for (unsigned int year = 1; year <= 390; year++) {
		double amount = principal * pow(1.0 + rate, year);
		cout << setw(4) << year << setw(20) << amount << endl;
	}
}*/

/*double monto(double x) {

	int y = 0;
	double montop = 20.00;
	while (y < 24 - x - 3) {
		y += 1;

	}
	while (y > 0) {
		montop =montop + 5.00;
	}
	return montop;

}
int main() {
	double x;
	cout << "ingrese la hora:" << endl;
	cin >> x;
	cout << monto(x) << "paga ctm" << endl;
	return 0;
}*/


//5.18
/*int resultado(int x, int y) {
	int result=1;
	for (int c = 0; c < y; c += 1) {
		result = result * x;
	}
	return result;
}
int main() {
	int x;
	int y;
	cout << "ponga su base:" << endl;
	cin >> x;
	cout << " ponga su exponente" << endl;
	cin >> y;
	cout << " el resultado es:" << resultado(x, y) << endl;
}*/


//5.20
/*bool esfactor(int x, int y) {
	bool q;
	if (x % y == 0) {
		q= true;
	}
	else q=false;
	return q;
}
int main() {
	int x;
	int y;
	cout << "ingresa un numero" << endl;
	cin >> x;
	cout << "ingresa otro numero" << endl;
	cin >> y;
	cout << esfactor(x, y) << endl;
	return 0;
}*/
//6.25


//6.29
// profesor el 0 es falso y el 1 es verdadero 
/*int primo(int x){
	int c = 0;
	int y = 1;
	int n;
	while(y <= x) {
		if (x % y == 0)
			c += 1;
		y += 1;

	}
	if (c == 2)
		n = 1;
	else {
		n = 0;
	}

	return n;

}
int main() {
	int x;
	int o = 2;

	cout << "coloque el numero de x" << endl;
	cin >> x;
	cout << primo(x) << endl;

	while (o <= 10000) {
		o++;

		cout << o <<'\t'<< primo(o) << endl;
	}
	return 0;
}*/



//6.30
/*int invertir(int x) {
	for (; x > 0; x = x / 10) {
		int y = x % 10;
		cout << y << '\t';
	}
	return 0;
}


int main() {
	int x;
	cout << "ingrese un numero" << endl;
	cin >> x;
	cout << invertir(x);
}*/

//6.36

/*int exponencial(int x, int y) {

	if (y == 0)
		x = 1;
	else {
		x = x * exponencial(x, y - 1);
	}
	return x;
}
int main() {
	int x;

	int  y;
	cout << "ingresa la base:" << endl;
	cin >> x;
	cout << "ingrese el exponente:" << endl;
	cin >> y;
	cout << "la respuesta es:" << exponencial(x, y) << endl;
	return 0;

}*/


//6.37
/*int fibonnacci(int i) {
	int c = 0;
	int q = 0;
	int r = 1;
	int s;
	if (i >= 2) {
		while (c <= i - 2) {
			s = q + r;
			q = r;
			r = s;
			c++;
		}
	}
	else if (i == 0) {
		s = 0;
	}
	else s = 1;
	return s;
}
int main()
{
	int x;
	cout << "ingresa su binonacci:" << endl;
	cin >> x;
	cout << "su numero fibonacci es :" << fibonnacci(x) << endl;
}*/

//6.41

//modo iterativo
/*int mcd(int x, int y) {
	int c2 = 1;
	int n1 = y;

	for (int c = 2; c <= n1; c += 1) {
		while (x%c==0 && y%c==0){
			if (x % c == 0 && y % c == 0) {

				x = x / c;
				y = y / c;
				c2 = c2 * c;
			}
		}

	}

	return c2;

}
int main () {
	int x;
	int y;
	cout << "coloque el mayor" << endl;
	cin >> x;
	cout << "coloque el menor" << endl;
	cin >> y;
	cout << "el mcd es :" << mcd(x, y) << endl;
	return 0;
}*/
//modo recursivo
//modo recursivo 
/*int mcd(int x, int y) {

	if (x == 0) {
		return y;
	}
	return mcd(x % y, y);


}
int main()
{
	int x;
	int y;
	cout << "ponga el mayor" << endl;
	cin >> x;
	cout << "ponga el menor" << endl;
	cin >> y;
	cout << "el resultado es:" << mcd(x, y) << endl;
	return 0;


}*/
