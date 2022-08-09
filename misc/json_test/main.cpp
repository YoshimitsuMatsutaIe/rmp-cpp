#include <iostream>
#include <fstream>
#include <filesystem>


#include <nlohmann/json.hpp>

int main()
{
    using nlohmann::json;

    //bool result = std::filesystem::create_directory("hoge");

    std::ifstream param_json("franka_sphere.json");
    json j = nlohmann::json::parse(param_json);


    std::cout << j["rmp_param"] << std::endl;
}