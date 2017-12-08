#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootRecipeMenuConfig_t {
    std::vector<std::string> alwaysShowLootIds;
    bool_t enabled;
    std::vector<std::string> lootItemsUsingBreakoutRecipeMenu;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeMenuConfig_t& v) {
    j["alwaysShowLootIds"] = v.alwaysShowLootIds;
    j["enabled"] = v.enabled;
    j["lootItemsUsingBreakoutRecipeMenu"] = v.lootItemsUsingBreakoutRecipeMenu;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeMenuConfig_t& v) {
    v.alwaysShowLootIds = j.at("alwaysShowLootIds").get<std::vector<std::string>>();
    v.enabled = j.at("enabled").get<bool_t>();
    v.lootItemsUsingBreakoutRecipeMenu = j.at("lootItemsUsingBreakoutRecipeMenu").get<std::vector<std::string>>();
  }
  inline std::string to_string(const LolLootRecipeMenuConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
