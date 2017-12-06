#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BannedChampion_t {
    int32_t championId;
    int32_t pickTurn;
    int32_t teamId;
  };

  inline void to_json(nlohmann::json& j, const BannedChampion_t& v) {
    j["championId"] = v.championId;
    j["pickTurn"] = v.pickTurn;
    j["teamId"] = v.teamId;
  }

  inline void from_json(const nlohmann::json& j, BannedChampion_t& v) {
    v.championId = j.at("championId").get<int32_t>();
    v.pickTurn = j.at("pickTurn").get<int32_t>();
    v.teamId = j.at("teamId").get<int32_t>();
  }
}
