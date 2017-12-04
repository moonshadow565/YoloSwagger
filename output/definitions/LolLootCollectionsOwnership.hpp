#ifndef SWAGGER_TYPES_LolLootCollectionsOwnership_HPP
#define SWAGGER_TYPES_LolLootCollectionsOwnership_HPP
#include <json.hpp>
#include "LolLootCollectionsRental.hpp"
namespace leagueapi {
  // 
  struct LolLootCollectionsOwnership {
    // 
    bool freeToPlayReward;
    // 
    bool owned;
    // 
    LolLootCollectionsRental rental;
  };

  inline void to_json(nlohmann::json& j, const LolLootCollectionsOwnership& v) {
    j["freeToPlayReward"] = v.freeToPlayReward;
    j["owned"] = v.owned;
    j["rental"] = v.rental;
  }

  inline void from_json(const nlohmann::json& j, LolLootCollectionsOwnership& v) {
    v.freeToPlayReward = j.at("freeToPlayReward").get<bool>;
    v.owned = j.at("owned").get<bool>;
    v.rental = j.at("rental").get<LolLootCollectionsRental>;
  }

}
#endif // SWAGGER_TYPES_LolLootCollectionsOwnership_HPP
