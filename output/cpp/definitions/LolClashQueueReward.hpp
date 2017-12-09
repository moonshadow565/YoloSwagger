#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashQueueReward_t {
    bool isChampionPointsEnabled;
    std::vector<int32_t> partySizeIpRewards;
    bool isIpEnabled;
    bool isXpEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolClashQueueReward_t& v) {
    j["isChampionPointsEnabled"] = v.isChampionPointsEnabled;
    j["partySizeIpRewards"] = v.partySizeIpRewards;
    j["isIpEnabled"] = v.isIpEnabled;
    j["isXpEnabled"] = v.isXpEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolClashQueueReward_t& v) {
    v.isChampionPointsEnabled = j.at("isChampionPointsEnabled").get<bool>();
    v.partySizeIpRewards = j.at("partySizeIpRewards").get<std::vector<int32_t>>();
    v.isIpEnabled = j.at("isIpEnabled").get<bool>();
    v.isXpEnabled = j.at("isXpEnabled").get<bool>();
  }
  inline std::string to_string(const LolClashQueueReward_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
