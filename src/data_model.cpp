#include "data_model.h"

namespace obsquraa {
   DataModel::DataModel() = default;

    void DataModel::SetJson(const std::string &file_name) {
        std::ifstream file(file_name);
        json_obj = nlohmann::json::parse(file);
        SetPersons(json_obj);
        file.close();
    }

    void DataModel::SetPersons(nlohmann::json &object) {
        for (auto &el : object.items()) {
            std::size_t id = el.value()["ID"];
            std::string name = el.value()["Name"];
            std::string email = el.value()["Email"];
            std::string DOB = el.value()["Date of birth"];
            std::string gender = el.value()["Gender"];
            std::string height = el.value()["Height"];
            std::string sexuality = el.value()["Sexuality"];
            std::string agepref = el.value()["Would you date younger/older/same age/all. You can choose multiple answers."];
            std::string city = el.value()["Which city are you living in"];
            std::string loc_pref = el.value()["Area of dating"];
            std::string job = el.value()["What do you do? (Job/student). Please mention if you're a student, what you're studying and if you're employed, then what you do."];
            std::string fake_name_pref = el.value()["Make your own fake name, or we can give one to you! Your choice."];
            std::string tv_shows = el.value()["Favourite TV shows"];
            std::string food = el.value()["Favourite food"];
            std::string destination = el.value()["Dream destinations"];
            std::string preference = el.value()["Any preferences in other person (tall, short, should like a certain show, anything.)"];
            std::string others = el.value()["Any other information you would like to add."];
            std::string intrsts = el.value()["Six interests, based on ranking of most liked to least. Can be less than six as well."];
            Person person = Person(id, name, email, DOB, gender, height, sexuality, agepref, city, loc_pref, job,
                                   fake_name_pref, tv_shows, food, destination, preference, others, intrsts);
            vector_of_people.push_back(person);
        }
    }

}