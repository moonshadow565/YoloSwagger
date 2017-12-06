#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsSummonerRune_t {
    uint64_t purchaseDate;
    uint64_t purchased;
    int32_t quantity;
    uint32_t runeId;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsSummonerRune_t& v) {
    j["purchaseDate"] = v.purchaseDate;
    j["purchased"] = v.purchased;
    j["quantity"] = v.quantity;
    j["runeId"] = v.runeId;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsSummonerRune_t& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>();
    v.purchased = j.at("purchased").get<uint64_t>();
    v.quantity = j.at("quantity").get<int32_t>();
    v.runeId = j.at("runeId").get<uint32_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
}
