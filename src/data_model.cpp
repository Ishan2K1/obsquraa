#include "data_model.h"
namespace obsquraa {
    DataModel::DataModel() {
    }

    void DataModel::SetJson(const std::string &file_name) {
        std::ifstream file(file_name);
        json_obj = nlohmann::json::parse(file);
        SetPersons(json_obj);
        file.close();
    }

    void DataModel::SetPersons(nlohmann::json &object) {

    }

}