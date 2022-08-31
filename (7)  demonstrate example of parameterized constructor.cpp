#include<iostream>
using namespace std;
class a{
	public :
		a(){
			cout<<"Hello Friends ";
		}
		a(int x){
			cout<<endl<<x;
		}
		a(int y,int z){
			cout<<"X : "<<y<<endl<<"Z : "<<z;
		}
};

main(){
	
	a obj(10,50);
}

