#include <person.h>

#include <utility>
namespace obsquraa {

    Person::Person(std::size_t set_id, std::string set_name, std::string mail, std::string birth, std::string set_gender,
                   std::string set_height, std::string set_sexuality, std::string agepref, std::string place,
                   std::string location, bool same_place, std::string set_job, std::string fake_name, std::string set_tv_shows,
                   std::string set_food, std::string destination, std::string preference, std::string others) {
        id = set_id;
        name = std::move(set_name);
        email = std::move(mail);
        DOB = std::move(birth);
        gender = std::move(set_gender);
        height = std::move(set_height);
        sexuality = std::move(set_sexuality);
        age_preference = std::move(agepref);
        city = std::move(place);
        location_preference = std::move(location);
        job = std::move(set_job);
        fake_name_preference = std::move(fake_name);
        tv_shows = std::move(set_tv_shows);
        food = std::move(set_food);
        dream_destination = std::move(destination);
        preferences = std::move(preference);
        extra = std::move(others);
    }

    std::size_t Person::getID() const {
        return id;
    }

    std::string Person::getName() const {
        return name;
    }

    std::string Person::getEmail() const {
        return email;
    }

    std::string Person::getDateOfBirth() const {
        return DOB;
    }

    std::string Person::getGender() const {
        return gender;
    }

    std::string Person::getHeight() const {
        return height;
    }

    std::string Person::getSexuality() const {
        return sexuality;
    }

    std::string Person::getAgePref() const {
        return age_preference;
    }

    std::string Person::getCity() const {
        return city;
    }

    std::string Person::getLocationPref() const {
        return location_preference;
    }
    
    bool Person::getIfSameCityPref() const {
        return same_city;
    }

    std::string Person::getJob() const {
        return job;
    }

    std::string Person::getFakeNamePref() const {
        return fake_name_preference;
    }

    std::string Person::getTVShows() const {
        return tv_shows;
    }

    std::string Person::getFood() const {
        return food;
    }

    std::string Person::getDreamDestination() const {
        return dream_destination;
    }

    std::string Person::getPreferences() const {
        return preferences;
    }

    std::string Person::getExtra() const {
        return extra;
    }
}