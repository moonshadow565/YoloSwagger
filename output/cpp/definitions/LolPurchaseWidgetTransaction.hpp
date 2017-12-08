#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetTransaction_t {
    std::string iconUrl;
    LolPurchaseWidgetItemKey_t itemKey;
    std::string transactionId;
    std::string itemName;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetTransaction_t& v) {
    j["iconUrl"] = v.iconUrl;
    j["itemKey"] = v.itemKey;
    j["transactionId"] = v.transactionId;
    j["itemName"] = v.itemName;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetTransaction_t& v) {
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    v.transactionId = j.at("transactionId").get<std::string>();
    v.itemName = j.at("itemName").get<std::string>();
  }
  inline std::string to_string(const LolPurchaseWidgetTransaction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
