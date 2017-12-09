#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ChampSelectLcdsPointSummary_t {
    int32_t currentPoints;
    int32_t pointsToNextRoll;
    int32_t pointsCostToRoll;
    int32_t maxRolls;
    int32_t numberOfRolls;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsPointSummary_t& v) {
    j["currentPoints"] = v.currentPoints;
    j["pointsToNextRoll"] = v.pointsToNextRoll;
    j["pointsCostToRoll"] = v.pointsCostToRoll;
    j["maxRolls"] = v.maxRolls;
    j["numberOfRolls"] = v.numberOfRolls;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsPointSummary_t& v) {
    v.currentPoints = j.at("currentPoints").get<int32_t>();
    v.pointsToNextRoll = j.at("pointsToNextRoll").get<int32_t>();
    v.pointsCostToRoll = j.at("pointsCostToRoll").get<int32_t>();
    v.maxRolls = j.at("maxRolls").get<int32_t>();
    v.numberOfRolls = j.at("numberOfRolls").get<int32_t>();
  }
  inline std::string to_string(const ChampSelectLcdsPointSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
