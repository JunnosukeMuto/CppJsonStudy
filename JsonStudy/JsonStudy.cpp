#include <iostream>
#include <fstream>
#include "json.h"
using json = nlohmann::json;

int main()
{
    std::ifstream f("data.json");
    json data = json::parse(f);

    std::cout << data["name"] << "," << data["age"] << std::endl;
}