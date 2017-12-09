#pragma once
#include <json.hpp>
#include <optional>
#include "LolStoreBundledItemCost.hpp"
namespace leagueapi {
  struct LolStoreBundledItem_t {
    int32_t itemId;
    std::string inventoryType;
    std::vector<LolStoreBundledItemCost_t> discountPrices;
    uint32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundledItem_t& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
    j["discountPrices"] = v.discountPrices;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundledItem_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.discountPrices = j.at("discountPrices").get<std::vector<LolStoreBundledItemCost_t>>();
    v.quantity = j.at("quantity").get<uint32_t>();
  }
  inline std::string to_string(const LolStoreBundledItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
