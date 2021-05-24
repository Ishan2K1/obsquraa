#include <iostream>
#include "data_model.h"
using obsquraa::DataModel;
int main() {
    std::string file = R"(C:\Users\khand\AppData\Roaming\Cinder\my-projects\obsquraa\data\Basic Info(1-14).json)";
    std::ifstream new_file(file);
    DataModel dataModel = DataModel();
    dataModel.SetJson(file);
    return 0;
//    nlohmann::json json = nlohmann::json::parse(new_file);
//    for (auto &el : json.items()) {
//        std::cout << el.value()["Gender"] << std::endl;
//    }
}