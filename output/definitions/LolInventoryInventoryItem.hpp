#ifndef SWAGGER_TYPES_LolInventoryInventoryItem_HPP
#define SWAGGER_TYPES_LolInventoryInventoryItem_HPP
#include <json.hpp>
#include "LolInventoryItemOwnershipType.hpp"
namespace leagueapi {
  // 
  struct LolInventoryInventoryItem {
    // 
    std::string inventoryType;
    // 
    int32_t itemId;
    // 
    LolInventoryItemOwnershipType ownershipType;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryInventoryItem& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
    j["ownershipType"] = v.ownershipType;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryInventoryItem& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.itemId = j.at("itemId").get<int32_t>;
    v.ownershipType = j.at("ownershipType").get<LolInventoryItemOwnershipType>;
  }

}
#endif // SWAGGER_TYPES_LolInventoryInventoryItem_HPP
