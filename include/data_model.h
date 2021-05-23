//
// Created by khand on 5/23/2021.
//

#ifndef OBSQURAA_DATA_MODEL_H
#define OBSQURAA_DATA_MODEL_H
#include "json.h"
#include <vector>
#include "person.h"
#include <fstream>
namespace obsquraa {
    class DataModel {
    public:
        DataModel();
        void SetJson(const std::string& file_name);
        void SetPersons(nlohmann::json& object);
    private:
        std::vector<Person> vector_of_people;
        nlohmann::json json_obj;
    };
}
#endif //OBSQURAA_DATA_MODEL_H
