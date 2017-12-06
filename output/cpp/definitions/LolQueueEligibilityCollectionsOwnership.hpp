#pragma once
#include <json.hpp>
#include <optional>
#include "LolQueueEligibilityCollectionsRental.hpp"
namespace leagueapi {
  struct LolQueueEligibilityCollectionsOwnership_t {
    bool freeToPlayReward;
    bool owned;
    LolQueueEligibilityCollectionsRental_t rental;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsOwnership_t& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsOwnership_t& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.rental = j.at("rental").get<LolQueueEligibilityCollectionsRental_t>();
  }
}
