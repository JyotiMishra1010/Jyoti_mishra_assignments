#include<iostream>
#include<vector>
#include<memory>

//1.s=single responsibility principle(SRP)
class myclass {
public:
	void function() {
		std::cout << "this is function" << std::endl;
	}
};
class myclass2 {
private :
	int n;
public:
	void function(int n) {
		std::cout<<"this function is to print the vale of n" << n << std::endl;
	}
};

//2 open/closed principle(OCP)

class shape {
public:
	virtual double area() const = 0;
	virtual ~shape() { std::cout << "this is virtual destructor of class shape" << std::endl; }
};
class rectangle :public shape {
public:
	double area()const override {
		return 10 * 5;
	}
};
class circle :public shape {
public:
	double area()const override {
		return  3.14*5*5;
	}
};
void print_area(const std::vector<std::shared_ptr<shape>>& shapes) {
	double total = 0;
	for (auto& s : shapes) {
		total += s->area();
	}
	std::cout << "total area:" << total << std::endl;
}
//3. liskov substitution principle(LSP)

class bird {
public:
	virtual void eat() {
		std::cout << "bird is eating" << std::endl;
	}
};
class flybird:public bird {
public:
	virtual void fly() {
		std::cout << "bird is flying" << std::endl;
	}
};
class sparrow :public flybird {
public:
	void fly() override {
		std::cout << "sparrow is flying" << std::endl;
	}
};

//I=interface segregation principle (ISP)
class printer {
public:
	virtual void print() = 0;
};
class scanner {
public:
	virtual void scan() = 0;

};
class nprinter :public printer {
public:
	void print() override {
		std::cout << "printing document" << std::endl;
	}
};
//D=dependency inversion principle

class message {
public:
	virtual void send(std::string msg) = 0;
};

class email :public message {
public:
	void send(std::string msg)override {
		std::cout << "sending email" << std::endl;
	}
};

class notification {
	message* m;
public:
	notification(message* msg):m(msg){}
	void notify(std::string msg) {
		m->send(msg);
	}
};



int main() {
	//SRP
	myclass obj1;
	obj1.function();

	myclass2 obj2;
	obj2.function(6);
	//OCP
	std::vector<std::shared_ptr<shape>> shapes;
	shapes.push_back(std::make_shared<rectangle>());
	shapes.push_back(std::make_shared<circle>());
	print_area(shapes);

	//LSP
	sparrow s;
	s.eat();
	s.fly();

	//ISP
	nprinter obj3;
	obj3.print();

	//DIP
	email em;
	notification n(&em);
	n.notify("welcome to dependency inversion!");
	return 0;



}
