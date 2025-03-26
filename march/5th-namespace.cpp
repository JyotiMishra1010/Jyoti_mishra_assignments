
//A namespace in C++ is a feature that allows you to organize code and prevent name conflicts in large projects.

#include<iostream>
#include<string>
using namespace std;
//nest namespace 
namespace college {
	class CS {
	public:
		void print(){
		cout << "this is first class" << endl;
		}
	};
	class IT {
	public:
		void print() {
			cout << "this is class It" << endl;
		}
	};
	namespace subject {
		class cplusplus {
		public:
			void print() {
				cout << "this is nested namespace class cplusplus" << endl;
			}
		};
		class mathematics {
		public:
			void print() {
				cout << "this is another class function in nested namespace" << endl;
			}
		};
	}
}
int main() {
	college::CS obj;
	obj.print();
	college::IT obj2;
	obj2.print();
	college::subject::cplusplus obj3;
	obj3.print();
	college::subject::mathematics obj4;
	obj4.print();
	
}
//why we use namespace
//Avoids Naming Conflicts 
// Organizes Code 
// Prevents Ambiguity
