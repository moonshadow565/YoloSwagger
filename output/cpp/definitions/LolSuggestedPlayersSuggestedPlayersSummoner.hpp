#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolSuggestedPlayersSuggestedPlayersSummoner_t {
    std::string_t displayName;
    uint64_t_t summonerId;
    uint32_t_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    v.displayName = j.at("displayName").get<std::string_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t_t>();
  }
  inline std::string to_string(const LolSuggestedPlayersSuggestedPlayersSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
