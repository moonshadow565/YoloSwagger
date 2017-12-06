#pragma once
#include <json.hpp>
#include <optional>
#include "LolStorePageGroupingDTO.hpp"
#include "LolStoreCatalogItem.hpp"
#include "LolStorePlayer.hpp"
namespace leagueapi {
  struct LolStorePageDTO_t {
    std::map<std::string, LolStorePageGroupingDTO_t> itemGroups;
    std::vector<std::string> groupOrder;
    LolStorePlayer_t Player;
    std::vector<LolStoreCatalogItem_t> catalog;
  };

  inline void to_json(nlohmann::json& j, const LolStorePageDTO_t& v) {
    j["itemGroups"] = v.itemGroups;
    j["groupOrder"] = v.groupOrder;
    j["Player"] = v.Player;
    j["catalog"] = v.catalog;
  }

  inline void from_json(const nlohmann::json& j, LolStorePageDTO_t& v) {
    v.itemGroups = j.at("itemGroups").get<std::map<std::string, LolStorePageGroupingDTO_t>>();
    v.groupOrder = j.at("groupOrder").get<std::vector<std::string>>();
    v.Player = j.at("Player").get<LolStorePlayer_t>();
    v.catalog = j.at("catalog").get<std::vector<LolStoreCatalogItem_t>>();
  }
}
