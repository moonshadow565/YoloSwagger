#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesMiniseries.hpp"
#include "LolLeaguesLeagueEmblem.hpp"
namespace leagueapi {
  struct LolLeaguesLeagueStanding_t {
    std::string inactivityStatus;
    bool pendingDemotion;
    std::string name;
    int64_t apexDaysUntilDecay;
    uint64_t losses;
    std::vector<LolLeaguesMiniseries_t> miniseriesResults;
    uint64_t previousPosition;
    std::vector<LolLeaguesLeagueEmblem_t> emblems;
    bool inactive;
    uint64_t wins;
    bool pendingPromotion;
    uint64_t position;
    int64_t positionDelta;
    std::string id;
    int64_t points;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLeagueStanding_t& v) {
    j["inactivityStatus"] = v.inactivityStatus;
    j["pendingDemotion"] = v.pendingDemotion;
    j["name"] = v.name;
    j["apexDaysUntilDecay"] = v.apexDaysUntilDecay;
    j["losses"] = v.losses;
    j["miniseriesResults"] = v.miniseriesResults;
    j["previousPosition"] = v.previousPosition;
    j["emblems"] = v.emblems;
    j["inactive"] = v.inactive;
    j["wins"] = v.wins;
    j["pendingPromotion"] = v.pendingPromotion;
    j["position"] = v.position;
    j["positionDelta"] = v.positionDelta;
    j["id"] = v.id;
    j["points"] = v.points;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLeagueStanding_t& v) {
    v.inactivityStatus = j.at("inactivityStatus").get<std::string>();
    v.pendingDemotion = j.at("pendingDemotion").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.apexDaysUntilDecay = j.at("apexDaysUntilDecay").get<int64_t>();
    v.losses = j.at("losses").get<uint64_t>();
    v.miniseriesResults = j.at("miniseriesResults").get<std::vector<LolLeaguesMiniseries_t>>();
    v.previousPosition = j.at("previousPosition").get<uint64_t>();
    v.emblems = j.at("emblems").get<std::vector<LolLeaguesLeagueEmblem_t>>();
    v.inactive = j.at("inactive").get<bool>();
    v.wins = j.at("wins").get<uint64_t>();
    v.pendingPromotion = j.at("pendingPromotion").get<bool>();
    v.position = j.at("position").get<uint64_t>();
    v.positionDelta = j.at("positionDelta").get<int64_t>();
    v.id = j.at("id").get<std::string>();
    v.points = j.at("points").get<int64_t>();
  }
  inline std::string to_string(const LolLeaguesLeagueStanding_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
