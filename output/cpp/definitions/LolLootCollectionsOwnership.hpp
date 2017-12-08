#pragma once
#include <json.hpp>
#include <optional>
#include "LolLootCollectionsRental.hpp"
namespace leagueapi {
  struct LolLootCollectionsOwnership_t {
    bool_t freeToPlayReward;
    LolLootCollectionsRental_t rental;
    bool_t owned;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsOwnership_t& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["rental"] = v.rental;
    j["owned"] = v.owned;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsOwnership_t& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool_t>();
    v.rental = j.at("rental").get<LolLootCollectionsRental_t>();
    v.owned = j.at("owned").get<bool_t>();
  }
  inline std::string to_string(const LolLootCollectionsOwnership_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
