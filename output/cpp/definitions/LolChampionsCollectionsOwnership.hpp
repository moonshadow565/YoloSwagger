#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampionsCollectionsRental.hpp"
namespace leagueapi {
  struct LolChampionsCollectionsOwnership_t {
    bool owned;
    bool freeToPlayReward;
    LolChampionsCollectionsRental_t rental;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsCollectionsOwnership_t& v) {
    j["owned"] = v.owned;
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsCollectionsOwnership_t& v) {
    v.owned = j.at("owned").get<bool>();
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.rental = j.at("rental").get<LolChampionsCollectionsRental_t>();
  }
  inline std::string to_string(const LolChampionsCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
