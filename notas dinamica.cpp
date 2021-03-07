#include<iostream>

using namespace std;

int main(){
int fila=0,columna=0,**pm_notas;
int *c,codigo=0;
string *n;

cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>columna;

n= new string[fila];	
c= new int[codigo];
pm_notas = new  int *[fila];
for (int i=0;i<fila;i++){
pm_notas[i] = new int[columna]; 	
}
cout<<"--------------Ingrese Notas--------------"<<endl;
for (int i=0;i<fila;i++){
	cout<<" CODIGO:          \t";
	cin>>c[codigo];
    cin.ignore(256,'\n');
    cout<<" NOMBRE:           \t";
    getline (cin, n[i]);
for (int ii=0;ii<columna;ii++){
	cout<<"INGRESE NOTA ["<<ii+1<<"]\t";;
	cin>>*(*(pm_notas+i)+ii);
	}
	
	codigo++;
	cout<<"------------------------------------"<<endl;
}
	cout<<"--------------Mostrar Notas--------------"<<endl;
for (int i=0;i<fila;i++){
	cout<<"CODIGO: "<<*c<<"\t";
	cout<<"| NOMBRE: "<<n[i]<<"\n";
for (int ii=0;ii<columna;ii++){
	cout<<"NOTA["<<ii+1<<"]\t"<<*(*(pm_notas+i)+ii)<<endl;
	}
	c++;
	cout<<"------------------------------------"<<endl;
}
// Liberar el espacio reservado en memoria
for (int i=0;i<fila;i++){
	delete [] pm_notas[i];
}

delete [] pm_notas;
delete [] c;
delete [] n;

	system("PAUSE");
	return 0;
	
	
}
