#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPersonalizedOffersOffer_t {
    int32_t itemId;
    std::string expirationDate;
    bool revealed;
    bool owned;
    int64_t discountPrice;
    std::string name;
    std::string inventoryType;
    uint32_t spotIndex;
    std::string offerId;
    int64_t originalPrice;
  };

  inline void to_json(nlohmann::json& j, const LolPersonalizedOffersOffer_t& v) {
    j["itemId"] = v.itemId;
    j["expirationDate"] = v.expirationDate;
    j["revealed"] = v.revealed;
    j["owned"] = v.owned;
    j["discountPrice"] = v.discountPrice;
    j["name"] = v.name;
    j["inventoryType"] = v.inventoryType;
    j["spotIndex"] = v.spotIndex;
    j["offerId"] = v.offerId;
    j["originalPrice"] = v.originalPrice;
  }

  inline void from_json(const nlohmann::json& j, LolPersonalizedOffersOffer_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.expirationDate = j.at("expirationDate").get<std::string>();
    v.revealed = j.at("revealed").get<bool>();
    v.owned = j.at("owned").get<bool>();
    v.discountPrice = j.at("discountPrice").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.spotIndex = j.at("spotIndex").get<uint32_t>();
    v.offerId = j.at("offerId").get<std::string>();
    v.originalPrice = j.at("originalPrice").get<int64_t>();
  }
  inline std::string to_string(const LolPersonalizedOffersOffer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
