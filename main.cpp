#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class point
{
    float x, y;
      
    public:
    point(float a = 0, float b = 0){
        x = a;
        y = b;
    }
    
    float getX(){
    	return x;
	}
	void setX(float a){
		x = a;
	}
	
	float getY(){
    	return y;
	}
	void setY(float a){
		y = a;
	}
	
	void afficher(){
        cout << "(" << x << "," << y << ")";
    }
    
    void translation (float a){
    	x += a;
        y += a;
    }
    
             
	bool comparer(point p){
        if(x == p.x && y == p.y) 
			return true;
        
		return false;
    }
    
	float distance(point p){
        return sqrt(pow(x - p.x , 2) + pow(y - p.y , 2));
    }
    
};

class cercle{
    float r;
    point centre;
    
    public:
    	
    cercle(float a, point p){
        r = a;
        centre = p;
    }
    
    cercle(float a, float x, float y){
        r = a;
        centre.setX(x);
        centre.setY(y);
    }
    
    void afficher(){
    	cout << "Affichage du cercle : ";
    	cout<<"Le rayon est: " << r << endl;
    	cout << "Le centre est : ";
        centre.afficher();
        cout<<endl<<"-----"<<endl;
    }
    
    float getRayon(){
    	return r;
	}
	
    void setRayon(float a){
         r = a;
    }
	
	point getCentre(){
		return centre;
	}
    void translation(float a){
        centre.translation(a);
    }  
    
    float surface(){
        return r * r * 3.14;
    } 
    
    float perimetre(){
        return 2 * 3.14 * r;
    }   
	            
    bool egalite(cercle c){
       	return (c.r == r and centre.comparer(c.centre));
    } 
	 
    bool appartenance(point p){
       	if(centre.distance(p) <= r){
           return true;
        }
        return false; 
    }             
};

int main()
{
    point p(10, 10);
    cercle c(1, p);
    c.afficher();
    
    cout << "Perimetre: " << c.perimetre() << endl 
	<< "Surface: " << c.surface() << endl;
    
    c.setRayon(c.getRayon() * 2);
    
    cout << "Apres doublement du rayon : " << endl
    << "Perimetre: " << c.perimetre() << endl 
	<< "Surface: " << c.surface() << endl;
	
	c.translation(-10);
	
	point p1(1, 1);
	cout << "Le point : "; 
	p1.afficher();
	if(c.appartenance(p1)){
		cout << " est a l'interieur du cercle" << endl;
	}
	else{
		cout << " est a l'exterieur du cercle" << endl;
	}
	
	point p2(3, 3);
	cout << "Le point : "; 
	p2.afficher();
	if(c.appartenance(p2)){
		cout << "est a l'interieur du cercle" << endl;
	}
	else{
		cout << "est a l'exterieur du cercle" << endl;
	}
	
	cercle c2(2, 0, 0);
	if(c.egalite(c2)){
		cout << "Les deux cercles sont identiques" << endl;
	}
	else
		cout << "Les deux cercles ne sont pas identiques" << endl;
    return 0;  
}