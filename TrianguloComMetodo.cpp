#include <iostream>
#include <math.h>
using namespace std;

//Criando o metodo de calculo da area do triangulo
double calctri(double a, double b, double c){
    double p = (a + b + c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main() {
    double xa,xb,xc,ya,yb,yc;
    
    //Pedindo pro usuario inputar os dados dos triangulos
    cout << "Qual as areas do triangulo x?" << endl;
    cin >> xa >> xb >> xc;
    cout << "Qual as areas do triangulo y?" << endl;
    cin >> ya >> yb >> yc;
    
    //chamando o metodo com os dados inputados do usuario
    double areax = calctri(xa,xb,xc);
    double areay = calctri(ya,yb,yc);
    
    //mostrando o resultado para o usuario
    cout << "Area do triangulo x:" << areax << endl;
    cout << "Area do triangulo y:" << areay << endl;
    
    //medindo qual triangulo é maior ou se são iguais
    if(areax > areay){
        cout << "A Area do triangulo x é maior";
    }else if(areax < areay){
        cout << "A Area do triangulo y é maior";
    }else{
        cout << "As areas são iguais";
    }
    return 0;
}