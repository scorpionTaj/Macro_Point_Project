#include <iostream>
#include <string>
using namespace std;

class Point{
	private :
		float abs;
		float ord;
	public :
		Point();
		Point (float x , float y);
		~Point();
		void affichierP();
		void deplacerP(float ab , float od);
		void setAbs(float a);
		float getAbs();
		void setOrd(float o);
		float getOrd();	
};

Point::Point(){
	this -> abs = 0;
	this -> ord = 0;
}
Point::Point(float x , float y){
	this -> abs = x;
	this -> ord = y;
}

Point::~Point(){
	cout << "j'ai supprime :)"<<endl;
}
void Point::affichierP(){
	cout << "les cordonnes sont : < " << abs << " , " << ord << " > ";
	cout << "abscisse"<<abs<<endl;
	cout << "Ordonne"<<ord<<endl;
}
void Point::deplacerP(float ab,float od){
	abs = abs + ab;
	ord = ord + od;
}
void Point::setAbs(float a){
	this -> abs = a;
}
void Point::getAbs(){
	return abs;
}
void Point::setOrd(){
	return ord;
}
void Point::getOrd(float o){
	retuen ord = o;
}

int main()
{
	system(color 0a);
	Point p1;
	Point p2(6,3);
	cout << "Entrez les cordonnees du 1er point svp : "<<endl;
	cout << "entrer l'abscisse x : " ;
	cin >>p1.abs;
	cout << "entrer l'ordonne y : " ;
	cin >>p1.ord;
	cout << "Entrez les cordonnees du 1er avant deplacement : "<<endl;
	p1.affichierP();
	cout << "Entrez les cordonnees du 1er apres deplacement : "<<endl;
	p1.deplacerP(3,5);
	p1.affichierP();
	return 0;
}