# include <iostream>
using namespace std;

void edades(){
int age = 17;

if (age <18) {
	cout<<"No eres un adulto"<<endl;
	cout<<"Dont talk back to adult"<<endl;
}
else{
	cout<<"Eres un adulto"<<endl;

}

}


void edades2() {
    int age;
    cout << "Ingrese su edad: ";
    cin >> age;

    if (age <= 12) {
        cout << "Eres un niño" << endl;
    } else if (age <= 17) {
        cout << "Eres joven" << endl;
    } else if (age <= 65) {
        cout << "Eres un adulto" << endl;
	} else if (age <= 100) {
        cout << "Eres adulto mayor" << endl;
    } else {
        cout << "Mal ingresado" << endl;
    }
}


void temperatura() {
    int temperatura;
    cout << "Ingrese la temperatura: ";
    cin >> temperatura;

    if (temperatura > 20) {
        cout << "Ponte una camiseta" << endl;
    } else if (temperatura > 10) {
        cout << "Ponte un suéter" << endl;
    } else if (temperatura > 0) {
        cout << "Ponte un impermeable" << endl;
    } else {
        cout << "Ponte un abrigo" << endl;
    }
}


void punto() {
    int a = 5;
    int b = 7;
    
    
        cout << "Plano cartesiano" << endl;
	cout << "      |      " << endl;
	cout << "      |  p   " << endl;
	cout << "      |      " << endl;
	cout << "-------------" << endl;
	cout << "      |      " << endl;
	cout << "      |      " << endl;
	cout << "      |      " << endl;
   

}

void ab(){
	int a = 32;
	int b = 55;
	
	int min = a < b ? a : b ;
	
	cout<< min <<endl;
}



void punto1() {
    int x, y;
    cout << "Ingrese la coordenada x: ";
    cin >> x;
    cout << "Ingrese la coordenada y: ";
    cin >> y;

    if (x > 0 && y > 0) {
                cout << "Plano cartesiano" << endl;
	cout << "      |      " << endl;
	cout << "      |  p   " << endl;
	cout << "      |      " << endl;
	cout << "-------------" << endl;
	cout << "      |      " << endl;
	cout << "      |      " << endl;
	cout << "      |      " << endl;
    } else if (x < 0 && y > 0) {
                cout << "Plano cartesiano" << endl;
	cout << "      |      " << endl;
	cout << "   p  |      " << endl;
	cout << "      |      " << endl;
	cout << "-------------" << endl;
	cout << "      |      " << endl;
	cout << "      |      " << endl;
	cout << "      |      " << endl;
    } else if (x < 0 && y < 0) {
                cout << "Plano cartesiano" << endl;
	cout << "      |      " << endl;
	cout << "      |     " << endl;
	cout << "      |      " << endl;
	cout << "-------------" << endl;
	cout << "      |      " << endl;
	cout << "  p   |      " << endl;
	cout << "      |      " << endl;
    } else if (x > 0 && y < 0) {
                cout << "Plano cartesiano" << endl;
	cout << "      |      " << endl;
	cout << "      |      " << endl;
	cout << "      |      " << endl;
	cout << "-------------" << endl;
	cout << "      |      " << endl;
	cout << "      |   p  " << endl;
	cout << "      |      " << endl;
    } else {
        cout << "El punto (" << x << "," << y << ") esta en el origen. " << endl;
    }
}






int main(){
//	edades();
	edades2();
	cout<<"  "<<endl;	
	
	temperatura();
	cout<<"  "<<endl;	
//	punto();
//  ab();
	punto1();
	cout<<"  "<<endl;	
	
	return 0;
	}
	
	
