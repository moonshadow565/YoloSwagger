#ifndef SWAGGER_TYPES_LolPurchaseWidgetItemKey_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetItemKey_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPurchaseWidgetItemKey {
    // 
    std::string inventoryType;
    // 
    int32_t itemId;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetItemKey& v) {
    j["inventoryType"] = v.inventoryType;
    j["itemId"] = v.itemId;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetItemKey& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.itemId = j.at("itemId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetItemKey_HPP
