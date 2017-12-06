#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsRental.hpp"
namespace leagueapi {
  struct LolLootCollectionsOwnership_t {
    bool freeToPlayReward;
    bool owned;
    LolLootCollectionsRental_t rental;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsOwnership_t& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsOwnership_t& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.rental = j.at("rental").get<LolLootCollectionsRental_t>();
  }
}
