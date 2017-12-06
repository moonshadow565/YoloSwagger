#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoostsLcdsSummonerActiveBoostsDTO_t {
    int64_t xpBoostEndDate;
    uint32_t xpBoostPerWinCount;
    uint32_t ipBoostPerWinCount;
    uint32_t xpLoyaltyBoost;
    uint64_t summonerId;
    int64_t ipBoostEndDate;
    uint32_t ipLoyaltyBoost;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    j["xpBoostEndDate"] = v.xpBoostEndDate;
    j["xpBoostPerWinCount"] = v.xpBoostPerWinCount;
    j["ipBoostPerWinCount"] = v.ipBoostPerWinCount;
    j["xpLoyaltyBoost"] = v.xpLoyaltyBoost;
    j["summonerId"] = v.summonerId;
    j["ipBoostEndDate"] = v.ipBoostEndDate;
    j["ipLoyaltyBoost"] = v.ipLoyaltyBoost;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoostsLcdsSummonerActiveBoostsDTO_t& v) {
    v.xpBoostEndDate = j.at("xpBoostEndDate").get<int64_t>();
    v.xpBoostPerWinCount = j.at("xpBoostPerWinCount").get<uint32_t>();
    v.ipBoostPerWinCount = j.at("ipBoostPerWinCount").get<uint32_t>();
    v.xpLoyaltyBoost = j.at("xpLoyaltyBoost").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.ipBoostEndDate = j.at("ipBoostEndDate").get<int64_t>();
    v.ipLoyaltyBoost = j.at("ipLoyaltyBoost").get<uint32_t>();
  }
}
