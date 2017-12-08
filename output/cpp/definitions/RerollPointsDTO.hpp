#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RerollPointsDTO_t {
    uint64_t currentPoints;
    uint32_t maxRolls;
    uint64_t pointsCostToRoll;
    uint32_t numberOfRolls;
    uint64_t pointsToReroll;
  };

  inline void to_json(nlohmann::json& j, const RerollPointsDTO_t& v) {
    j["currentPoints"] = v.currentPoints;
    j["maxRolls"] = v.maxRolls;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["numberOfRolls"] = v.numberOfRolls;
    j["pointsToReroll"] = v.pointsToReroll;
  }

  inline void from_json(const nlohmann::json& j, RerollPointsDTO_t& v) {
    v.currentPoints = j.at("currentPoints").get<uint64_t>();
    v.maxRolls = j.at("maxRolls").get<uint32_t>();
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<uint64_t>();
    v.numberOfRolls = j.at("numberOfRolls").get<uint32_t>();
    v.pointsToReroll = j.at("pointsToReroll").get<uint64_t>();
  }
  inline std::string to_string(const RerollPointsDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
