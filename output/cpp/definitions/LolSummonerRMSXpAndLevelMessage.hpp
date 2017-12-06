#pragma once
#include <json.hpp>
#include <optional>
#include "LolSummonerRMSLevelField.hpp"
namespace leagueapi {
  struct LolSummonerRMSXpAndLevelMessage_t {
    nlohmann::json xp;
    LolSummonerRMSLevelField_t level;
  };

  inline void to_json(nlohmann::json& j, const LolSummonerRMSXpAndLevelMessage_t& v) {
    j["xp"] = v.xp;
    j["level"] = v.level;
  }

  inline void from_json(const nlohmann::json& j, LolSummonerRMSXpAndLevelMessage_t& v) {
    v.xp = j.at("xp").get<nlohmann::json>();
    v.level = j.at("level").get<LolSummonerRMSLevelField_t>();
  }
}
