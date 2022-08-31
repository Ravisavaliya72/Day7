#include<iostream>
using namespace std;
class wall{
	private :
		double length;
	public :
		wall(){
			cout<<"The Area Of wall is = ";
			
		}
		wall(int a,int b){
			length=a*b;
			cout<<"The Area Of Wall is = "<<length<<" sq.m";
		}
		
};
main(){
	wall obj(10,20);
	
}
