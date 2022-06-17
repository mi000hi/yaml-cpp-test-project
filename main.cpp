#include "yaml-cpp/yaml.h"

#include <string>
#include <iostream>

int main() {

    std::cout << "Reading a YAML file..." << std::endl;

    YAML::Node config = YAML::LoadFile("../config.yaml");

    // YAML::Node config = YAML::LoadFile(config_path);
    const YAML::Node& node_test1 = config["sensors"];

    for (std::size_t i = 0; i < node_test1.size(); i++) {
        const YAML::Node& node_test2 = node_test1[i];
        std::cout << "Id: " << node_test2["id"].as<std::string>() << std::endl;
        std::cout << "hardwareId: " << node_test2["hardwareId"].as<std::string>() << std::endl << std::endl;
    }
}
