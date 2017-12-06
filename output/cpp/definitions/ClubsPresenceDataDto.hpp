#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ClubsPresenceDataDto_t {
    std::string clubName;
    std::string clubTag;
    uint64_t summonerId;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const ClubsPresenceDataDto_t& v) {
    j["clubName"] = v.clubName;
    j["clubTag"] = v.clubTag;
    j["summonerId"] = v.summonerId;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, ClubsPresenceDataDto_t& v) {
    v.clubName = j.at("clubName").get<std::string>();
    v.clubTag = j.at("clubTag").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
}
