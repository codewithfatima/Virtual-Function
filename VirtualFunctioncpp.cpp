#include<iostream>
using namespace std;

class baseclass{
	public:
		int var_base = 1;
		virtual	void display(){
			cout << "1 Displaying Base class variable var_base  " << var_base << endl;
		}
};

class derivedclass :public baseclass{
	public:
		int var_derived = 2;
		void display(){
			cout << "2 Displaying Base class variable var_base  " << var_base << endl;
			cout << "2 Displaying Base class variable var_derived  " << var_derived << endl;
		}
};


int main(){
	baseclass *base_class_pointer;	
    baseclass obj_base;
    derivedclass obj_derived;
    
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    
//    
//    //poniting to base class pointer to derived class pointer
//    base_class_pointer-> var_base  =  53;
//    base_class_pointer->display();
//    
//    //will throw error base_class_pointer-> var_derived  = 23; 
//    
//        base_class_pointer->var_base = 3500;
//       base_class_pointer->display();
//       
//       derivedclass *derived_class_pointer;
//       derived_class_pointer = &obj_derived;
//       derived_class_pointer->var_derived = 98;
//       derived_class_pointer->var_base = 84;
//       derived_class_pointer->display();
//    
}
