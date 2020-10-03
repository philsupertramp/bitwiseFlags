#include <iostream>
#include "bitflags.h"

enum AnimalFlags {
    HasClaws   = BIT(1),
    CanFly     = BIT(2),
    EatsFish   = BIT(3),
    Endangered = BIT(4)
};
BIT_OPERATORS(AnimalFlags);
void convertToBinary(unsigned int n)
{
    if (n / 2 != 0) {
        convertToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    AnimalFlags flags = AnimalFlags::CanFly | AnimalFlags::Endangered | AnimalFlags::HasClaws;
    std::cout << (flags == AnimalFlags::CanFly ? "True" : "False") << std::endl;
    convertToBinary(flags); std::cout<<std::endl;
    std::cout << HasClaws << std::endl;
    convertToBinary(HasClaws); std::cout<<std::endl;
    std::cout << CanFly << std::endl;
    convertToBinary(CanFly); std::cout<<std::endl;
    std::cout << EatsFish << std::endl;
    convertToBinary(EatsFish); std::cout<<std::endl;
    std::cout << Endangered << std::endl;
    convertToBinary(Endangered); std::cout<<std::endl;
    if(flags == HasClaws)
            std::cout << "HasClaws" << std::endl;
    if(flags == CanFly)
            std::cout << "CanFly" << std::endl;
    if(flags == EatsFish)
            std::cout << "EatsFish" << std::endl;
    if(flags == Endangered)
            std::cout << "Endangered" << std::endl;
    return 0;
}
