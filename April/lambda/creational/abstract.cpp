#include <iostream>
#include <memory>
using namespace std;

// 1. Abstract Products
class Pizza {
public:
    virtual void bake() = 0;
    virtual ~Pizza() = default;
};

class Drink {
public:
    virtual void serve() = 0;
    virtual ~Drink() = default;
};

// 2. Concrete Products
class ItalianPizza : public Pizza {
public:
    void bake() override { cout << "Thin crust with olive oil\n"; }
};

class AmericanPizza : public Pizza {
public:
    void bake() override { cout << "Thick crust with BBQ sauce\n"; }
};

class Wine : public Drink {
public:
    void serve() override { cout << "Serving red wine\n"; }
};

class Soda : public Drink {
public:
    void serve() override { cout << "Serving cola\n"; }
};

// 3. Abstract Factory
class RestaurantFactory {
public:
    virtual unique_ptr<Pizza> makePizza() = 0;
    virtual unique_ptr<Drink> makeDrink() = 0;
    virtual ~RestaurantFactory() = default;
};

// 4. Concrete Factories
class ItalianRestaurant : public RestaurantFactory {
public:
    unique_ptr<Pizza> makePizza() override {
        return make_unique<ItalianPizza>();
    }
    unique_ptr<Drink> makeDrink() override {
        return make_unique<Wine>();
    }
};

class AmericanRestaurant : public RestaurantFactory {
public:
    unique_ptr<Pizza> makePizza() override {
        return make_unique<AmericanPizza>();
    }
    unique_ptr<Drink> makeDrink() override {
        return make_unique<Soda>();
    }
};

// 5. Client Code
void orderMeal(RestaurantFactory& factory) {
    auto pizza = factory.makePizza();
    auto drink = factory.makeDrink();

    cout << "Preparing your meal:\n";
    pizza->bake();
    drink->serve();
}

int main() {
    // Italian branch
    ItalianRestaurant italian;
    cout << "ITALIAN MEAL:\n";
    orderMeal(italian);

    // American branch
    AmericanRestaurant american;
    cout << "\nAMERICAN MEAL:\n";
    orderMeal(american);
}
