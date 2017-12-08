#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchmakingMatchmakingSearchErrorResource_t {
    uint64_t_t penalizedSummonerId;
    std::string_t message;
    std::string_t errorType;
    double_t penaltyTimeRemaining;
    int32_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchErrorResource_t& v) {
    j["penalizedSummonerId"] = v.penalizedSummonerId;
    j["message"] = v.message;
    j["errorType"] = v.errorType;
    j["penaltyTimeRemaining"] = v.penaltyTimeRemaining;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchErrorResource_t& v) {
    v.penalizedSummonerId = j.at("penalizedSummonerId").get<uint64_t_t>();
    v.message = j.at("message").get<std::string_t>();
    v.errorType = j.at("errorType").get<std::string_t>();
    v.penaltyTimeRemaining = j.at("penaltyTimeRemaining").get<double_t>();
    v.id = j.at("id").get<int32_t_t>();
  }
  inline std::string to_string(const LolMatchmakingMatchmakingSearchErrorResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
