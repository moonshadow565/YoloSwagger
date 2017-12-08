#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorNotificationSource.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorRestrictionNotification_t {
    bool displayReformCard;
    uint64_t id;
    int64_t gamesRemaining;
    LolPlayerBehaviorNotificationSource_t source;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorRestrictionNotification_t& v) {
    j["displayReformCard"] = v.displayReformCard;
    j["id"] = v.id;
    j["gamesRemaining"] = v.gamesRemaining;
    j["source"] = v.source;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorRestrictionNotification_t& v) {
    v.displayReformCard = j.at("displayReformCard").get<bool>();
    v.id = j.at("id").get<uint64_t>();
    v.gamesRemaining = j.at("gamesRemaining").get<int64_t>();
    v.source = j.at("source").get<LolPlayerBehaviorNotificationSource_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorRestrictionNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
