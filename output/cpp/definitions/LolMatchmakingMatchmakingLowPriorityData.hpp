#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchmakingMatchmakingLowPriorityData_t {
    double penaltyTime;
    double penaltyTimeRemaining;
    std::string bustedLeaverAccessToken;
    std::vector<uint64_t> penalizedSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingLowPriorityData_t& v) {
    j["penaltyTime"] = v.penaltyTime;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingLowPriorityData_t& v) {
    v.penaltyTime = j.at("penaltyTime").get<double>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double>();
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string>();
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>();
  }
}
