#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPurchaseWidgetItemPrice_t {
    int32_t_t price;
    std::string_t currencyType;
    bool_t purchasable;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetItemPrice_t& v) {
    j["price"] = v.price;
    j["currencyType"] = v.currencyType;
    j["purchasable"] = v.purchasable;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetItemPrice_t& v) {
    v.price = j.at("price").get<int32_t_t>();
    v.currencyType = j.at("currencyType").get<std::string_t>();
    v.purchasable = j.at("purchasable").get<bool_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetItemPrice_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
