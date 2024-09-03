#include <iostream>
#include <string>

Player::Player() : age(0) {}

void Player::setName(const std::string& newName) {
    name = newName;
}

void Player::setAge(int newAge) {
    age = newAge;
}

void Player::print() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

bool Player::hasName(const std::string& targetName) const {
    return name == targetName;
}

void Player::modifyAttribute(const std::string& attribute, const std::string& newValue) {
    if (attribute == "name") {
        setName(newValue);
    } else if (attribute == "age") {
        setAge(std::stoi(newValue));
    } else {
        std::cout << "Invalid attribute specified." << std::endl;
    }
}
