#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderTeamBuilderBoostInfo_t {
    int64_t activatorCellId;
    bool allowBattleBoost;
    int64_t cost;
    bool battleBoostActivated;
    std::vector<int64_t> unlockedSkinIds;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    j["activatorCellId"] = v.activatorCellId;
    j["allowBattleBoost"] = v.allowBattleBoost;
    j["cost"] = v.cost;
    j["battleBoostActivated"] = v.battleBoostActivated;
    j["unlockedSkinIds"] = v.unlockedSkinIds;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    v.activatorCellId = j.at("activatorCellId").get<int64_t>();
    v.allowBattleBoost = j.at("allowBattleBoost").get<bool>();
    v.cost = j.at("cost").get<int64_t>();
    v.battleBoostActivated = j.at("battleBoostActivated").get<bool>();
    v.unlockedSkinIds = j.at("unlockedSkinIds").get<std::vector<int64_t>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderTeamBuilderBoostInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
