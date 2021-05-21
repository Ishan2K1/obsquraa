//
// Created by khand on 5/20/2021.
//

#ifndef OBSQURAA_PERSON_H
#define OBSQURAA_PERSON_H

#include <string>

namespace obsquraa {
    class Person {
    public:
        Person(std::size_t set_id, std::string set_name, std::string mail, std::string birth, std::string set_gender,
               std::string set_height, std::string set_sexuality, std::string agepref, std::string place, std::string location,
               bool same_place, std::string set_job, std::string fake_name, std::string set_tv_shows, std::string set_food,
               std::string destination, std::string preference, std::string others);
        std::size_t getID() const;
        std::string getName() const;
        std::string getEmail() const;
        std::string getDateOfBirth() const;
        std::string getGender() const;
        std::string getHeight() const;
        std::string getSexuality() const;
        std::string getAgePref() const;
        std::string getCity() const;
        std::string getLocationPref() const;
        bool getIfSameCityPref() const;
        std::string getJob() const;
        std::string getFakeNamePref() const;
        std::string getTVShows() const;
        std::string getFood() const;
        std::string getDreamDestination() const;
        std::string getPreferences() const;
        std::string getExtra() const;
    private:
        std::size_t id;
        std::string name;
        std::string email;
        std::string DOB;
        std::string gender;
        std::string height;
        std::string sexuality;
        std::string age_preference;
        std::string city;
        std::string location_preference;
        bool same_city;
        std::string job;
        std::string fake_name_preference;
        std::string tv_shows;
        std::string food;
        std::string dream_destination;
        std::string preferences;
        std::string extra;
    };
}


#endif //OBSQURAA_PERSON_H
