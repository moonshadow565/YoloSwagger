#pragma once
#include <json.hpp>
#include <optional>
#include "CollectionsLcdsSummonerIcon.hpp"
namespace leagueapi {
  struct CollectionsLcdsSummonerIconInventoryDTO_t {
    std::vector<CollectionsLcdsSummonerIcon_t> summonerIcons;
    std::string dateString;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    j["summonerIcons"] = v.summonerIcons;
    j["dateString"] = v.dateString;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    v.summonerIcons = j.at("summonerIcons").get<std::vector<CollectionsLcdsSummonerIcon_t>>();
    v.dateString = j.at("dateString").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const CollectionsLcdsSummonerIconInventoryDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
