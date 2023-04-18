#include <iostream>
#include <cmath>
using namespace std;

class Triangulo{
    //Criando as classes privadas e publicas que receberam os dados
    private: double a,b,c;
    public:
        Triangulo(double lado1,double lado2,double lado3){
            a = lado1;
            b = lado2;
            c = lado3;
        }
        
//Criando o metodo de calculo da area do triangulo
double calctri(){
    double p = (a + b + c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
        //
        double getlado1(){return a;}
        double getlado2(){return b;}
        double getlado3(){return c;}

};
int main() {
    double a, b, c;
    
    //Pedindo pro usuario inputar os dados dos triangulos
    cout << "Qual as areas do triangulo x?" << endl;
    cin >> a >>b >> c;
    Triangulo X(a,b,c);
    
    cout << "Qual as areas do triangulo y?" << endl;
    cin >> a >> b >> c;
    Triangulo Y(a,b,c);
    
    //chamando o metodo dentro da classe com os dados inputados do usuario
    double areax = X.calctri();
    double areay = Y.calctri();
    
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