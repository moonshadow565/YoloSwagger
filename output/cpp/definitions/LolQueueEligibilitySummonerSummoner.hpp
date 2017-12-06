#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolQueueEligibilitySummonerSummoner_t {
    uint64_t summonerId;
    uint32_t summonerLevel;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilitySummonerSummoner_t& v) {
    j["summonerId"] = v.summonerId;
    j["summonerLevel"] = v.summonerLevel;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilitySummonerSummoner_t& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
  }
}
