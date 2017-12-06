#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct TeamBoost_t {
    int64_t price;
    bool unlocked;
    int64_t ipRewardForPurchaser;
    int64_t ipReward;
    std::string summonerName;
    std::string skinUnlockMode;
    std::vector<int64_t> availableSkins;
  };

  inline void to_json(nlohmann::json& j, const TeamBoost_t& v) {
    j["price"] = v.price;
    j["unlocked"] = v.unlocked;
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser;
    j["ipReward"] = v.ipReward;
    j["summonerName"] = v.summonerName;
    j["skinUnlockMode"] = v.skinUnlockMode;
    j["availableSkins"] = v.availableSkins;
  }

  inline void from_json(const nlohmann::json& j, TeamBoost_t& v) {
    v.price = j.at("price").get<int64_t>();
    v.unlocked = j.at("unlocked").get<bool>();
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>();
    v.ipReward = j.at("ipReward").get<int64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>();
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>();
  }
}
