#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityQueueAvailability.hpp"
namespace leagueapi {
  struct LolQueueEligibilityQueue_t {
    int32_t_t numPlayersPerTeam;
    LolQueueEligibilityQueueAvailability_t queueAvailability;
    std::string_t type;
    bool_t showPositionSelector;
    uint32_t_t minLevel;
    int32_t_t id;
    bool_t areFreeChampionsAllowed;
    int32_t_t maximumParticipantListSize;
    bool_t isRanked;
    uint32_t_t maxLevel;
    uint32_t_t championsRequiredToPlay;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityQueue_t& v) {
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["queueAvailability"] = v.queueAvailability;
    j["type"] = v.type;
    j["showPositionSelector"] = v.showPositionSelector;
    j["minLevel"] = v.minLevel;
    j["id"] = v.id;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["isRanked"] = v.isRanked;
    j["maxLevel"] = v.maxLevel;
    j["championsRequiredToPlay"] = v.championsRequiredToPlay;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityQueue_t& v) {
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolQueueEligibilityQueueAvailability_t>();
    v.type = j.at("type").get<std::string_t>();
    v.showPositionSelector = j.at("showPositionSelector").get<bool_t>();
    v.minLevel = j.at("minLevel").get<uint32_t_t>();
    v.id = j.at("id").get<int32_t_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t_t>();
    v.isRanked = j.at("isRanked").get<bool_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t_t>();
    v.championsRequiredToPlay = j.at("championsRequiredToPlay").get<uint32_t_t>();
  }
  inline std::string to_string(const LolQueueEligibilityQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
