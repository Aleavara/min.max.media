#include <iostream>
using namespace std;
main(){
	//Intestazione
	cout<< "Calcolo Del Numer minore, Maggiore, E media tra 10 numeri in entrata\n";
	 // Esecuzione programma
	double i=0,num,b,min=9999999999,max,media;

	for(i=0;i<10;i++){
		cin>>num;
		media=media+num;
		if (num>max){
			max=num;
		}
		if (num<=min){
			min=num;
		}
	}
	media=media/10;
	cout<< "Il numero più grande è: "<< max << endl ;
	cout<< "Il numero più piccolo è: "<< min << endl;
	cout<< "La media è: "<< media << endl;
	return 0;
	
} 
