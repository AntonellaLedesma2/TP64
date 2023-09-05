#include <bits/stdc++.h>
using namespace std;
string BuscarVocal(string frase);
string BuscarConsonante(string frase);
string BuscarLetra(string frase);
int main(){
	string frase,vocal,consonante,letra;
	cout<<"ingrese una frase"<<endl;
	getline(cin,frase);
	cout<<"las vocales en la frase son: "<<BuscarVocal(vocal)<<endl;
	cout<<"las consonantes en la frase son: "<<BuscarConsonante(consonante)<<endl;
	cout<<"la cantidad de letra Y en la frase son:  "<<BuscarLetra(letra)<<endl;
	
	return 0;
}

string BuscarVocal(string frase){
	int vocal=0;
	for(int i=0 ; i<frase.size() ; i++){
		char c = (frase[i]);
		if(c=='A'||c=='E'||c=='I'|c=='O'||c=='U'){
			frase[i]='V';
		}
		vocal++;
	}
	
	return vocal;
}

string BuscarConsonante(string frase){
	int consonante=0;
	for(int i=0 ; frase.size() ; i++){
		char c = (frase[i]);
		if(c=='B'|| c =='C'||c=='D'||c=='F'||c=='G'||c=='H'||c=='J'||c=='K'||c=='L'||c=='M'||c=='N'||c=='Ñ'||c=='P'||c=='Q'||c=='R'||c=='S'||c=='T'||c=='V'||c=='W'||c=='X'||c=='Z'){
			frase[i]='C';
		}
		consonante++;
	}
	return consonante;
}

string BuscarLetra(string frase){
	int l=0;
	for(int i=0 ; i<frase.size() ; i++){
		char c = (frase[i]);
		if(c =='Y'){
			frase[i]='S';
		}
		l++;
	}
	return l;
}





