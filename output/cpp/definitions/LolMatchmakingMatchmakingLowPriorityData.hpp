#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchmakingMatchmakingLowPriorityData_t {
    std::string_t bustedLeaverAccessToken;
    double_t penaltyTimeRemaining;
    std::vector<uint64_t> penalizedSummonerIds;
    double_t penaltyTime;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingLowPriorityData_t& v) {
    j["bustedLeaverAccessToken"] = v.bustedLeaverAccessToken;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["penalizedSummonerIds"] = v.penalizedSummonerIds;
    j["penaltyTime"] = v.penaltyTime;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingLowPriorityData_t& v) {
    v.bustedLeaverAccessToken = j.at("bustedLeaverAccessToken").get<std::string_t>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double_t>();
    v.penalizedSummonerIds = j.at("penalizedSummonerIds").get<std::vector<uint64_t>>();
    v.penaltyTime = j.at("penaltyTime").get<double_t>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingLowPriorityData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
