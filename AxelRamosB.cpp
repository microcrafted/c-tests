#include<iostream>

using namespace std;

int main(){
	double sueldoMensual;
	
	cout <<"Cual es tu sueldo mensual en MXN";
	cin >> sueldoMensual;
	/*lo que voy a hacer ahora con esta variable es multiplicarla por 
	los porcentajes solicitados*/
	
	double rentaDeCasa = sueldoMensual * 0.30;
	double alimentos = sueldoMensual * 0.30;
	double servicios = sueldoMensual * 0.15;
	double saludYCuidados = sueldoMensual * 0.15;
	double ahorros = sueldoMensual * 0.10;
	
	//ahora a continuacion tenemos que mostrar los resultados de estas operaciones, presentarlas//
	cout << "30% del salario en renta para la casa"<< rentaDeCasa << endl;
	cout << "30% del salario en alimentos"<< alimentos << endl;
	cout << "15% del salario en servicios"<< servicios<< endl;
	cout << "15% del salario en salud y cuidados"<< saludYCuidados<< endl;
	cout << "10% del salario en ahorros propios :)"<< ahorros<< endl;
	
}
