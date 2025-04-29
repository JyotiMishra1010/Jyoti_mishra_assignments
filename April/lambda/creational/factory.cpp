#include<iostream>
#include<memory>
#include<string>

class shape {
public:
	virtual void draw()const = 0;
	virtual ~shape() = default;
};
class Circle : public shape {
public:
    void draw() const override {
        std::cout << "Drawing a Circle" << std::endl;
    }
};
class Rectangle : public shape {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle" << std::endl;
    }
};
class square : public shape {
public:
    void draw() const override {
        std::cout << "Drawing a square" << std::endl;
    }
};

class shapefactory {
public:
    static std::unique_ptr<shape> createShape(const std::string& shapeType) {
        if (shapeType == "CIRCLE") {
            return std::make_unique<Circle>();
        }
        else if (shapeType == "RECTANGLE") {
            return std::make_unique<Rectangle>();
        }
        else if (shapeType == "SQUARE") {
            return std::make_unique<square>();
        }
        return nullptr;
    }
};
int main() {
    auto circle = shapefactory::createShape("CIRCLE"); // Creates a Circle
    if (circle) circle->draw(); // Output: "Drawing a Circle"

    auto invalid = shapefactory::createShape("HEXAGON");
    if (!invalid) std::cout << "Invalid shape!\n"; // Output: "Invalid shape!"
}
