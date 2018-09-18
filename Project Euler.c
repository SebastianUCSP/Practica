#include <iostream>

using namespace std;

int main()
{
// problema 1
int sumamultiplos = 0;
    for (int a = 0; a < 1000; ++a)
    {
        sumamultiplos += ((a % 5 == 0) || (a % 3 == 0)) ?
            a : 0;
    }
    cout << "la suma de los multiplos de 3 y 5 menores que 1000 es:" <<sumamultiplos << "\n";

//problema 2
int b, c;

c = 1;
cout << "ingrese un entero positivo:" << endl;
cout << "N: ";
cin >> b;
while (c<b-1){
        cout << c << ",";
        c+=2;}
    cout << c <<endl;

// problema 3

int d, e;

cout << "ingrese un numero: ";
cin >> d;
    for(int i=2; i<d; i++){
            e=0;
            for (int j=1; j<i;j++){
                if(i%j==0){
                   e += 1;}
            }
        if (e<2){
            cout << i << endl;

            }
        }
// problema 4

int n,i=1,suma=0;
cout << "Ingresa un numero: ";
cin >> n;
       while(i<n){
          if(n%i==0){
            suma += i;}
            i++;
}

       if(suma==n){
          cout << i << " es un numero perfecto\n";}
       else
          cout << i << " no es un numero perfecto\n";

// problema 5


	unsigned long long Numero = 600851475143;

	bool esPrimo = 1;

	int ultimoPrimo = 2;

		for (int i = ultimoPrimo; i < Numero; i++) {

				esPrimo = 1;

				for (int j = 2; j < i; j++) {
					if(i%j == 0)
						esPrimo = 0;
				}

				if(esPrimo && (Numero%i == 0))
				{
					ultimoPrimo = i;
					Numero = Numero / i;
				}
			}

	cout << "el mayor factor primo de 600851475143 es: " << Numero << endl;

//problema 6

int N;

cout << "ingrese un numero: ";
cin >> N;
if (N%4==0 && N%100!=0 && N%400!=0){
    cout << N << " es bisiesto" << endl;}
else
    cout << N << " no es bisiesto" << endl;;

//problema 7

c = 2;
cout << "ingrese un entero positivo:" << endl;
cout << "N: ";
cin >> b;
while (c<b-1){
        cout << c << ",";
        c+=2;}
    cout << c <<endl;

//problema 8

int f1 = 1, f2 = 1, siguiente = 0;

cout << "Ingrese el numero de terminos: ";
cin >> n;

cout << "Serie de Fibonacci: " << endl;

for (int i = 1; i <= n; ++i)
    {
        siguiente = f1 + f2;
        f1 = f2;
        f2 = siguiente;

        cout << siguiente << endl;
    }

//problema 9

cout << "numero de perfectos";
int num, cont, y=1;
cin >> num;
for (int i=1; i < num; i++){
    cont = 0;
    while (i>y){
            if (i%y == 0){
                cont += y;
            } y++;
    } y = 1;
  if (i == cont)
     cout << " " << i;
}

// problema 10


long long s = 20000000;
long long sumatoria = 0;
    for(int i=2; i<s; i++)
        {
            e=0;
            for (int j=1; j<i;j++)
                {
                if(i%j==0)
                    {
                   e += 1;
                    }
                }
        if (e<2)
            {
            sumatoria += i;
            }
        }
cout << "la suma es" << sumatoria;

}
