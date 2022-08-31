#include<iostream>
using namespace std;

class x{
	private :
		int a = 10;
		int b = 10;
		int c = a + b;
		
		friend class y;
};
class y{
	public :
		
		
		x obj;
		void add(){
			cout<<"The Addition Of Two Numbers is = "<<obj.c;
		}
};
main(){
	y set;
	set.add();
}
