#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootSummoner_t {
    uint32_t_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolLootSummoner_t& v) {
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolLootSummoner_t& v) {
    v.summonerLevel = j.at("summonerLevel").get<uint32_t_t>();
  }
  inline std::string to_string(const LolLootSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
