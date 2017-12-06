#pragma once
#include <json.hpp>
#include <optional>
#include "LolItemSetsItemSetItem.hpp"
namespace leagueapi {
  struct LolItemSetsItemSetBlock_t {
    std::string showIfSummonerSpell;
    std::vector<LolItemSetsItemSetItem_t> items;
    std::string type;
    std::string hideIfSummonerSpell;
  };

  inline void to_json(nlohmann::json& j, const LolItemSetsItemSetBlock_t& v) {
    j["showIfSummonerSpell"] = v.showIfSummonerSpell;
    j["items"] = v.items;
    j["type"] = v.type;
    j["hideIfSummonerSpell"] = v.hideIfSummonerSpell;
  }

  inline void from_json(const nlohmann::json& j, LolItemSetsItemSetBlock_t& v) {
    v.showIfSummonerSpell = j.at("showIfSummonerSpell").get<std::string>();
    v.items = j.at("items").get<std::vector<LolItemSetsItemSetItem_t>>();
    v.type = j.at("type").get<std::string>();
    v.hideIfSummonerSpell = j.at("hideIfSummonerSpell").get<std::string>();
  }
}
